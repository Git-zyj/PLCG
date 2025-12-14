/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46428
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
    var_20 -= var_0;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) var_19))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            var_24 = ((/* implicit */int) (~((-((+(var_7)))))));
                            var_25 = ((/* implicit */int) max((var_25), ((-((-(((/* implicit */int) var_19))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) var_14);
                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)128))));
            }
            for (short i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                arr_15 [i_5 + 1] [i_1 - 1] [i_5 + 1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                arr_16 [i_0] [i_1 - 1] [i_5 + 1] [i_5] &= ((/* implicit */int) (~((~(var_18)))));
            }
            for (short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    var_27 = ((/* implicit */int) var_7);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) var_6);
                        arr_25 [i_8] [i_7] [i_8] [i_8] = (!((!(((/* implicit */_Bool) var_13)))));
                        arr_26 [i_6] [i_7] [14U] = ((/* implicit */signed char) (~((+(var_2)))));
                        arr_27 [i_7] [i_6] [i_6] = ((/* implicit */int) (+(var_9)));
                    }
                    for (int i_9 = 3; i_9 < 23; i_9 += 4) 
                    {
                        arr_30 [i_0] [i_1 + 1] [i_7] [(signed char)11] [i_6] [23U] [23U] = ((/* implicit */short) (+((+(var_13)))));
                        var_29 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                        arr_34 [i_0] [i_7] [i_0] [8LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                        arr_35 [i_0] [i_10] [i_7] [i_7] [i_6] [i_6] [(unsigned short)4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_0))))));
                    arr_36 [i_1 - 2] [i_7] = var_0;
                }
                for (unsigned int i_11 = 2; i_11 < 23; i_11 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                    arr_39 [i_1] = ((/* implicit */unsigned int) (-(var_4)));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                        arr_43 [i_0] [i_1 - 1] [23] [i_11 + 1] [i_12] = ((/* implicit */unsigned char) var_7);
                    }
                }
                for (int i_13 = 1; i_13 < 20; i_13 += 1) 
                {
                    arr_47 [i_0] [i_1] [i_6] [i_13] = (~(var_11));
                    var_34 = (+((+(((/* implicit */int) var_19)))));
                }
                arr_48 [i_6] [(unsigned char)21] [(unsigned char)21] [(unsigned char)4] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_12))))));
            }
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                var_35 = ((/* implicit */unsigned short) (~((~(var_1)))));
                arr_53 [i_14] = ((/* implicit */unsigned int) var_4);
                var_36 += ((/* implicit */unsigned long long int) (+((+((-(var_13)))))));
            }
        }
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            var_37 *= ((/* implicit */signed char) (~((~(var_6)))));
            arr_57 [i_0] = ((/* implicit */signed char) (-(var_16)));
        }
        var_38 = ((/* implicit */signed char) (+((+(var_1)))));
        arr_58 [i_0] = ((/* implicit */unsigned short) var_0);
    }
    var_39 = ((/* implicit */int) (+((-(var_3)))));
    var_40 = var_4;
    var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
}
