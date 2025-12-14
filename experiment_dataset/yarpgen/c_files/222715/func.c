/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222715
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_3))) : (((/* implicit */int) var_7))))) : (var_6)));
    var_14 -= ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) var_6);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) var_8);
                            arr_14 [i_0] [i_1 + 3] [i_0] [i_0] [(short)11] = ((/* implicit */unsigned char) var_5);
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_3)) : (var_6))))));
                            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */long long int) var_10);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            arr_21 [i_3] [i_3] [i_0] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))));
                            var_20 = ((/* implicit */_Bool) var_4);
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
            arr_23 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_9);
            var_21 = ((/* implicit */signed char) var_3);
        }
        for (short i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            arr_27 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
            arr_28 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))));
        }
        for (short i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            arr_32 [14] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_4))))));
            arr_33 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))));
        }
    }
    var_22 ^= ((/* implicit */unsigned long long int) var_4);
}
