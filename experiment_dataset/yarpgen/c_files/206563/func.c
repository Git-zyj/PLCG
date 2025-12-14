/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206563
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) arr_2 [i_0]);
        var_20 -= ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_1 [4LL] [i_0])) & (((/* implicit */int) arr_2 [i_0])))));
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) arr_2 [i_0]))), (((((/* implicit */int) arr_2 [(unsigned short)7])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_0 [i_0])), (max(((~(-3877409279032103427LL))), (((/* implicit */long long int) ((short) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_10 [(short)14] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7423838404779201265LL))));
                        arr_11 [i_0] [(_Bool)1] [(signed char)1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((min((5864869920697590477ULL), (((/* implicit */unsigned long long int) (unsigned short)31301)))), (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */unsigned short) (short)-28401))))))))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [9U] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [(unsigned short)11]);
                        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18)) ? (-1058843289) : (((/* implicit */int) (short)-21522))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) 3660749315U)))))) : (arr_4 [i_0] [i_0] [i_0])));
                        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3660749305U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) (_Bool)0))));
                        var_25 = ((((/* implicit */int) arr_13 [i_0] [i_1])) & ((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [(unsigned char)2])))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [(unsigned short)0] [i_2])) ? ((~(arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)4] [i_2] [i_1] [i_0]))))))));
                        arr_18 [i_0] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_0 [i_0]))))));
                        arr_19 [i_0] [i_5] = ((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2] [i_1] [i_1] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            var_27 = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_0] [i_5 + 2] [i_5 - 2] [i_5]))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_12 [i_6 + 1] [i_1] [i_2] [i_5 + 2]))));
                            arr_24 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 + 1])) == (((/* implicit */int) arr_16 [(signed char)13]))));
                        }
                        var_29 += ((/* implicit */unsigned short) (+(1058843288)));
                    }
                    arr_25 [i_2] [(short)12] = ((/* implicit */unsigned int) arr_23 [(signed char)10] [(unsigned char)11] [i_1] [i_1] [i_0] [i_0]);
                    var_30 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(unsigned short)12] [i_2]);
                    var_31 += ((/* implicit */unsigned long long int) var_5);
                    var_32 ^= ((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_30 [i_7] = ((/* implicit */long long int) ((unsigned char) (-(arr_28 [i_7]))));
        var_33 |= ((/* implicit */short) arr_26 [i_7] [i_7]);
        arr_31 [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (short)-28392)) : (((((/* implicit */int) (unsigned short)1251)) + (((/* implicit */int) (short)-20467))))))));
    }
    var_34 = var_4;
}
