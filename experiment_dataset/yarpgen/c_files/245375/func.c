/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245375
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0 + 2] [i_1] [i_2] [4U] |= ((/* implicit */long long int) var_18);
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_14))));
                            arr_14 [i_1] [i_2] [i_3] = ((/* implicit */signed char) var_17);
                            arr_15 [i_3] [i_2] [i_1] [i_0 + 1] = var_3;
                            arr_16 [i_0 + 2] [i_1 + 2] [i_2] [(_Bool)1] [i_1] [i_3] = ((/* implicit */long long int) var_17);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) var_14);
                            var_22 = var_0;
                            arr_22 [(signed char)13] [i_1] [i_4] [i_5] = ((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned long long int) var_6)));
                            /* LoopSeq 3 */
                            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                            {
                                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) var_15)) : (var_6)));
                                var_24 += ((/* implicit */unsigned char) var_15);
                            }
                            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                            {
                                arr_28 [i_1] [i_5] [i_4] [i_1] [(unsigned short)14] = ((/* implicit */int) var_9);
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (var_1)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)))));
                                arr_29 [i_0] [i_1 + 3] [i_4] [(unsigned char)2] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) var_9))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                                var_26 &= ((/* implicit */_Bool) var_16);
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_17))))));
                            }
                            for (short i_8 = 2; i_8 < 18; i_8 += 4) 
                            {
                                var_28 -= ((/* implicit */unsigned short) ((var_5) ? (var_2) : (((/* implicit */int) var_3))));
                                arr_33 [(unsigned short)18] [i_1] [i_4] [i_5] [7LL] [(unsigned short)18] = ((/* implicit */unsigned short) var_12);
                                var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10)))) ? (var_0) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_4))));
                            }
                            var_30 = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_31 &= ((/* implicit */signed char) var_11);
                            var_32 -= ((/* implicit */unsigned long long int) var_16);
                        }
                    } 
                } 
                var_33 += ((/* implicit */short) var_2);
            }
        } 
    } 
    var_34 = var_16;
    var_35 = ((/* implicit */unsigned short) var_0);
}
