/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210421
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 576460752303423487ULL)) ? (9573946055144486453ULL) : (((/* implicit */unsigned long long int) -1047265416)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) var_2);
        arr_3 [i_0] = ((/* implicit */int) var_6);
        var_14 = var_9;
        var_15 = ((/* implicit */unsigned long long int) var_3);
    }
    /* LoopSeq 1 */
    for (int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_8 [9ULL] [i_1] = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (var_0)))) ? (var_9) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_5)) ? (((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) var_10);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) var_3);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
                            arr_19 [i_4] [8ULL] = ((/* implicit */_Bool) var_4);
                        }
                    }
                    /* LoopSeq 4 */
                    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27544)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27544))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (12483215178179473930ULL)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_7)));
                        arr_22 [i_6] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))));
                        arr_23 [i_1] [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_8))))) : (var_6)));
                        var_20 = ((/* implicit */unsigned long long int) var_9);
                        var_21 = ((/* implicit */unsigned long long int) var_4);
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_26 [i_3] [i_7] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))));
                        arr_27 [i_1 + 2] [0ULL] [0ULL] [i_1 + 2] [i_7] = ((/* implicit */unsigned long long int) var_8);
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6))) : (((/* implicit */unsigned long long int) var_1))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (var_1)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (var_9)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_10);
                        var_25 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_10)) : (var_9)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (var_1)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
                        arr_33 [i_1] [i_1] [6ULL] [i_9] = ((/* implicit */short) var_0);
                        arr_34 [i_9] [11] [i_9] [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_4)))) : (var_0)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_38 [i_1] [i_2 - 2] [i_2 - 2] [i_10] = ((/* implicit */unsigned short) var_6);
                        var_27 = ((/* implicit */_Bool) var_11);
                        var_28 = var_11;
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) var_1);
    }
    var_30 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_9))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))));
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (var_0)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))));
}
