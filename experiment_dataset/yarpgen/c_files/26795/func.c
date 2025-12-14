/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26795
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */int) min((max((min((var_6), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_0 [(short)6] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 1942100700U))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2147483637) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_3 [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4] [i_3] [i_1] [9U] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))));
                                var_22 = ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) arr_10 [20LL] [20LL] [i_0] [i_0] [i_0]);
        arr_12 [i_0] = ((/* implicit */int) 2205436891U);
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_17 [i_5] [i_6] = ((/* implicit */unsigned long long int) (_Bool)0);
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_7 [0U] [i_7 + 1] [1] [i_6 - 1])), (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))));
                        var_25 = ((/* implicit */_Bool) arr_18 [(unsigned char)14] [2] [i_5]);
                        arr_22 [i_5] [i_5] [i_5] [i_8] = ((/* implicit */signed char) arr_19 [i_5]);
                    }
                } 
            } 
            arr_23 [i_5] [2U] |= ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_3 [i_5])))));
            var_26 = ((/* implicit */int) ((_Bool) var_16));
            arr_24 [i_5] [i_6] = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [(signed char)2] [i_6] [i_6 - 1] [i_6] [(signed char)2])) <= (((/* implicit */int) (_Bool)1))))), ((+(var_16))))), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned char) (_Bool)1)), (var_9))), (arr_19 [i_5]))))));
        }
        var_27 = ((/* implicit */long long int) min((((arr_18 [15U] [i_5] [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [9ULL] [11ULL] [i_5] [i_5]))))), (((_Bool) arr_18 [i_5] [i_5] [i_5]))));
    }
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((_Bool) (-2147483647 - 1))))));
        var_29 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        arr_27 [(signed char)16] = ((/* implicit */unsigned char) arr_26 [i_9] [i_9]);
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            arr_30 [i_9] [i_10] = ((/* implicit */unsigned long long int) var_13);
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_29 [i_12])) & (((/* implicit */int) arr_28 [i_11])))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (arr_34 [i_12] [i_9] [i_9] [i_9] [i_9])))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (arr_26 [i_12] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((var_0), (((/* implicit */unsigned long long int) var_15))))))))))));
                        arr_35 [(_Bool)1] [i_10] = ((/* implicit */_Bool) var_0);
                    }
                } 
            } 
            arr_36 [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
            arr_37 [i_9] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_32 [i_10] [i_9] [(_Bool)1])))));
        }
        /* vectorizable */
        for (unsigned int i_13 = 1; i_13 < 20; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 2) 
            {
                var_31 = ((/* implicit */unsigned short) var_8);
                var_32 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) arr_26 [i_13 + 3] [i_13])));
                arr_43 [i_9] [11] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_14 + 2] [i_14 - 1] [i_13 + 1] [i_13] [i_9])) ? (((int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)1001)) || (((/* implicit */_Bool) var_5)))))));
            }
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (_Bool)0))));
        }
        arr_44 [i_9] [i_9] = ((/* implicit */short) arr_29 [i_9]);
    }
    var_34 *= var_13;
    var_35 = var_16;
    var_36 = 5716881001192384165ULL;
}
