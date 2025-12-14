/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237488
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (var_5)))) ? (min((var_10), (((/* implicit */unsigned long long int) var_8)))) : (((((/* implicit */_Bool) var_7)) ? (var_10) : (var_10)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_9), (((/* implicit */short) var_1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) min((((/* implicit */short) var_7)), (var_9)))))))))));
        var_14 = ((/* implicit */unsigned short) var_1);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((((/* implicit */int) var_7)) / (var_0))), (((/* implicit */int) max((var_6), (((/* implicit */short) var_1))))))))));
        var_16 = ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_0)) : (var_5))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) var_7)))))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            {
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))));
                var_18 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_11)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    arr_11 [i_3] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_2)))) && (((((/* implicit */int) var_7)) != (((/* implicit */int) var_4)))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_20 ^= ((/* implicit */long long int) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                                arr_21 [i_1] [i_2 - 2] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7)))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_2)))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_0))) : (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    arr_22 [i_4] [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (var_0)))));
                    arr_23 [i_1] [i_1] [i_2] [(unsigned char)20] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                }
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    arr_26 [i_7] [i_2] [i_1] = ((/* implicit */_Bool) var_0);
                    arr_27 [i_1] [i_2 + 1] [i_7] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_3)), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10))), (var_11)))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (var_11)))) ? (min((var_10), (((/* implicit */unsigned long long int) var_0)))) : (min((((/* implicit */unsigned long long int) var_3)), (var_11))))))));
                    arr_28 [i_2] = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) var_1)), (var_0))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
                    arr_29 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((min((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10))), (((/* implicit */unsigned long long int) max((3350924955U), (((/* implicit */unsigned int) (unsigned char)165))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_3))))) : (var_0))))));
                }
            }
        } 
    } 
}
