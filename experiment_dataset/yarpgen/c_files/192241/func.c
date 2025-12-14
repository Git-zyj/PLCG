/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192241
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
    var_12 |= ((/* implicit */short) var_6);
    var_13 = ((/* implicit */_Bool) max((var_13), (((_Bool) var_8))));
    var_14 = ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */int) (short)21680)) % (((/* implicit */int) (short)20220))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [18LL] [i_0 + 1]))) == (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
            var_17 = ((/* implicit */unsigned char) 100663296U);
        }
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(-1))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -5735781416838798478LL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) var_7))));
                    arr_18 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_4 - 2] [i_3]))) + (331229287837438325LL)))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))));
                    var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))), (max((min((-20LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) 1264133076))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27))) : (1852295895213397852ULL)))))));
                                arr_23 [i_3] [i_3] [i_4 - 2] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (min((min((((/* implicit */unsigned int) (unsigned short)2044)), (532676608U))), (((/* implicit */unsigned int) var_4))))));
                                var_21 = ((/* implicit */unsigned char) min((max(((unsigned short)1792), (((/* implicit */unsigned short) (short)-11989)))), (((/* implicit */unsigned short) arr_19 [(unsigned char)3] [i_2] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63491)) >> (((-3LL) + (16LL)))));
    }
    for (signed char i_7 = 2; i_7 < 12; i_7 += 4) 
    {
        var_23 = ((/* implicit */int) max((var_23), ((+(((/* implicit */int) var_9))))));
        var_24 ^= ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) var_3)));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)-54))))), (min(((short)-11), (((/* implicit */short) arr_3 [i_7] [i_7])))))))));
    }
    var_26 &= ((/* implicit */_Bool) ((long long int) var_3));
}
