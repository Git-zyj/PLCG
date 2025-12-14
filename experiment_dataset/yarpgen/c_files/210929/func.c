/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210929
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 705274651128301746LL);
                var_21 = var_6;
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 3])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 268435328)) != (1240646062U)))))));
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-13225)))));
                            }
                            for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                            {
                                var_23 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-13225)) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0])) + (9462))) - (24)))))) ? (((/* implicit */int) (short)28066)) : (((/* implicit */int) var_2))))) / (((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5] [i_3 - 2]))))) << (((((/* implicit */int) var_11)) - (232)))))));
                                var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65527))));
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-13225)) || (((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3] [i_3 - 2])))))) - (((var_8) % (((/* implicit */unsigned long long int) arr_10 [(unsigned char)7] [i_3] [i_3] [i_3 + 1])))));
                            }
                            var_25 = min(((+(((/* implicit */int) (short)13225)))), (((/* implicit */int) (((~(1287583530U))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)-13251)) : (((/* implicit */int) (short)13230)))))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_8 [(unsigned short)3] [i_2] [i_2] [i_1] [i_1] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))))) + (9223372036854775807LL))) << ((((~(((/* implicit */int) (signed char)-2)))) - (1)))))) ? (((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_1] [i_2] [i_2 - 2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13225))) : (var_1))) : (((/* implicit */unsigned int) ((arr_7 [i_1] [i_2] [(short)3]) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13254))) > (var_1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */int) max((var_1), (((/* implicit */unsigned int) (short)13251))));
    var_28 &= ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (unsigned short)61545)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */int) (short)3461)) < (var_7)))))), (((/* implicit */int) (unsigned short)30369))));
    var_29 &= ((/* implicit */short) min((-1229520665), (min((((((/* implicit */_Bool) -341812502)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-13222)))), (((/* implicit */int) (signed char)1))))));
    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-3623)) : (((/* implicit */int) (short)-8958))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_0)) : (var_4))))) >> (((/* implicit */int) ((var_7) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)32912)) <= (((/* implicit */int) var_2))))))))));
}
