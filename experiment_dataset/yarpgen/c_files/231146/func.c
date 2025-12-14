/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231146
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */signed char) ((((unsigned long long int) var_0)) - (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [10LL] [i_0]))))));
                arr_5 [(short)15] [i_1] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) 7252131797789696138LL)))) ? (((/* implicit */unsigned long long int) (+(((long long int) var_6))))) : (((unsigned long long int) max((var_5), (((/* implicit */unsigned long long int) 5203787462127794303LL)))))));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (-(((((/* implicit */_Bool) (~(arr_3 [i_0] [(signed char)2] [i_1])))) ? (((unsigned long long int) (short)13764)) : (((((/* implicit */_Bool) 7252131797789696138LL)) ? (((/* implicit */unsigned long long int) 7252131797789696126LL)) : (var_2))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((var_4), (16716807408483201296ULL)));
                            var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 7252131797789696138LL)) ? (16716807408483201301ULL) : (1729936665226350285ULL))) : (4226861378655627ULL)))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_3]);
                            var_15 = ((/* implicit */signed char) 7252131797789696133LL);
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(var_6)))) ? (max((-7252131797789696153LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((int) (short)-22767))))) >= (((/* implicit */long long int) ((/* implicit */int) (short)-41)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                {
                    arr_24 [(short)17] [i_4] [i_4] [i_4] = ((/* implicit */int) ((short) var_7));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) -4044144496694565162LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 1729936665226350318ULL)))) : (-7252131797789696138LL))))));
                    var_17 *= ((/* implicit */short) var_3);
                    arr_25 [i_4] [i_4] [(short)21] [i_4] = ((/* implicit */_Bool) (signed char)-1);
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) ? (1729936665226350320ULL) : (((/* implicit */unsigned long long int) -8540198108491531825LL))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)21)) : (874333360))))))));
    }
    var_19 = var_8;
    var_20 = ((/* implicit */unsigned long long int) (short)24540);
}
