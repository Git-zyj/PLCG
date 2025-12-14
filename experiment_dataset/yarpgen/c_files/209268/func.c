/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209268
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
    var_10 = ((/* implicit */unsigned long long int) min(((~(var_5))), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 = ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) & (((/* implicit */int) (unsigned short)52368)));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) var_3);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_1] [i_1] [3LL] [i_3]))));
                            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 29360128);
                        }
                        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */short) (+(arr_3 [i_0])));
                            arr_19 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_0]);
                            var_14 = ((/* implicit */_Bool) (unsigned short)13110);
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_3] [(unsigned short)11] [i_0] [i_3] [i_3]);
                        }
                        arr_23 [i_0] [i_1 - 2] [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))));
                        var_16 = ((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1 - 3] [i_1 - 3]);
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) var_0);
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_31 [i_0] [i_0] [8U] [10LL] [i_0] [10LL] [10LL] |= ((/* implicit */unsigned int) var_9);
                            var_17 |= ((arr_3 [(unsigned char)0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1])) ? (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2] [i_7])) : (arr_14 [i_0] [i_1 - 3])))));
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_34 [6LL] [i_1 - 2] [i_1] [i_9] [i_1] [i_1] [i_1 + 1] |= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_33 [i_9] [i_7] [i_2] [i_1] [i_9])))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_25 [i_0] [10LL] [i_0] [i_0] [i_9]);
                            arr_36 [i_0] [i_1] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (~((~(arr_18 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) arr_38 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]));
                            arr_44 [i_0] = ((/* implicit */unsigned char) var_6);
                            arr_45 [i_0] [i_0] [i_0] [i_10] [(_Bool)0] [i_0] [i_0] &= ((/* implicit */unsigned short) (_Bool)1);
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_0] [i_1] [i_2 - 1] [i_10] [i_2 - 1])) != (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(arr_20 [i_0] [i_0] [i_2]))))));
                        }
                        var_19 = ((/* implicit */int) ((unsigned long long int) arr_5 [i_10] [i_1] [i_1]));
                        arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_1 [(_Bool)1] [i_10]))) ? ((~(15827996025513300786ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (unsigned short)65212))));
        arr_48 [i_0] = ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_21 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_22 = ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_0] [i_0]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_12 = 2; i_12 < 16; i_12 += 2) 
    {
        arr_52 [i_12] = ((/* implicit */int) (_Bool)1);
        var_23 += ((/* implicit */int) ((unsigned long long int) 4294967269U));
    }
}
