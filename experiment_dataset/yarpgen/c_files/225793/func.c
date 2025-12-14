/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225793
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
    var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((long long int) 18350977800261042552ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) == (((/* implicit */int) var_9)))))) : (((unsigned int) var_6))))));
    var_13 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57120)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)618))))))));
        var_15 = ((/* implicit */short) var_1);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) (unsigned short)40594);
            arr_7 [i_0] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)89)) / (1344334614)))) / (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [7ULL]))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [18ULL])) ? (((/* implicit */int) arr_9 [3U])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) min((max((((/* implicit */unsigned short) arr_9 [15LL])), (var_10))), (((/* implicit */unsigned short) ((short) (unsigned short)64918))))))));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)64918)), (156000413U)));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_8 [i_2]))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_2]), (((/* implicit */unsigned long long int) (+(arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [19U]))))))) && (((/* implicit */_Bool) (+(arr_11 [i_2] [i_4 - 1] [i_2]))))));
                        arr_20 [18U] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (short)16320)) >= (((/* implicit */int) (signed char)-64)))) ? (arr_18 [i_4 + 1] [i_5] [i_4 + 1] [(unsigned short)7] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))))))), (arr_11 [i_2] [i_2] [i_2])));
                        arr_21 [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (unsigned short)65535)))))) == ((-(arr_12 [i_2])))));
                    }
                } 
            } 
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_3] [i_3]))))));
            var_21 = (+(((/* implicit */int) min((arr_17 [i_2] [i_2]), (((/* implicit */unsigned char) ((arr_13 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [(unsigned char)6] [i_3] [i_3]))))))))));
        }
        var_22 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2])) * (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))), (((arr_13 [i_2]) / (arr_13 [i_2])))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            {
                arr_27 [i_6 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 + 1] [i_7 - 2]))) >= (0LL)))) ^ (((/* implicit */int) arr_24 [i_7 + 1])))))));
                arr_28 [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((arr_12 [i_6 + 2]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7]))) <= (arr_15 [(_Bool)1] [7ULL])))) / (((/* implicit */int) var_0)))))));
                var_23 = ((/* implicit */signed char) ((long long int) ((4267806902068102035ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 + 2]))))));
            }
        } 
    } 
}
