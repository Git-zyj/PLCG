/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36589
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_18);
            var_20 = ((/* implicit */_Bool) ((1138997026U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4)))));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_7 [i_2]) / (((/* implicit */int) var_3)))))));
                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((arr_10 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (var_15)));
                        var_23 = (~(((/* implicit */int) (!(((/* implicit */_Bool) 2561301140U))))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] = 2561301140U;
                        var_24 = ((/* implicit */int) (~(3523726074U)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_1] = ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_2] [i_2])));
                        var_25 = ((/* implicit */short) (~(arr_14 [i_0] [i_1] [i_1] [i_3] [(unsigned char)13] [i_3] [i_1])));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) arr_5 [i_0] [i_6]);
                        var_27 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)0))))));
                    }
                    arr_23 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) var_19);
                    var_28 = ((/* implicit */signed char) (+(var_8)));
                }
            }
            for (unsigned int i_7 = 4; i_7 < 18; i_7 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) || (((/* implicit */_Bool) arr_22 [i_7 + 4] [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 + 2]))));
                            var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_32 [i_0] [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_30 [i_1] [i_1] [i_0] [i_7] [i_7 - 3] [i_7 - 1]));
            }
            for (unsigned int i_10 = 4; i_10 < 18; i_10 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) ((short) (_Bool)1));
                arr_37 [i_0] [i_1] [i_1] [i_10 - 4] = ((/* implicit */long long int) (+(2561301170U)));
            }
            arr_38 [i_0] [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_1]))) >= (arr_24 [i_0] [i_1]));
        }
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            var_32 = ((/* implicit */_Bool) arr_22 [i_0] [i_11] [i_11] [i_0] [i_11]);
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            arr_48 [i_13] [i_0] [i_12] = ((/* implicit */unsigned char) var_6);
                            var_33 = ((/* implicit */signed char) (-(arr_1 [i_0])));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */long long int) arr_44 [i_0] [i_0] [i_0] [i_11]);
        }
        var_35 = ((/* implicit */long long int) ((int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
        arr_49 [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) (short)0))))));
    }
    var_36 = (+(((/* implicit */int) var_18)));
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
