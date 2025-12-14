/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194403
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((((((/* implicit */int) ((((/* implicit */long long int) var_9)) == (889480221140177779LL)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) || (((/* implicit */_Bool) var_4))))))) < (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) || (((/* implicit */_Bool) arr_4 [i_1] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    arr_8 [(_Bool)1] [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) arr_3 [i_2 + 1] [i_2])), (var_9))) ^ (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((int) max((max((arr_4 [i_0] [i_1]), (((/* implicit */short) var_15)))), (((/* implicit */short) ((((/* implicit */_Bool) -2147483636)) || (((/* implicit */_Bool) 2774009409U))))))));
                                arr_14 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1 - 1] [(_Bool)1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1]))))), (arr_11 [i_2 - 4] [i_2 + 2] [i_2] [i_2 + 3] [4] [i_2 - 2])))) & ((~(((unsigned long long int) arr_11 [i_0 + 2] [i_1] [i_1] [i_3] [i_1] [i_4]))))));
                                var_19 = ((/* implicit */int) 3ULL);
                                var_20 = ((/* implicit */short) ((((/* implicit */int) ((((arr_12 [i_2]) & (var_2))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [19ULL] [i_3] [i_4])) && (((/* implicit */_Bool) 18446744073709551615ULL))))))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_4])) || (((((/* implicit */int) arr_4 [i_0 + 2] [i_2])) < (((/* implicit */int) (_Bool)1)))))))));
                                var_21 = min((((/* implicit */int) arr_13 [i_0] [(_Bool)0] [i_0] [(signed char)10] [i_0])), ((~((-(((/* implicit */int) arr_10 [i_2] [i_4])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)-3279)) > (((/* implicit */int) ((((/* implicit */int) (signed char)18)) > (((/* implicit */int) (unsigned char)31)))))))) << (((/* implicit */int) (_Bool)1))));
                    arr_16 [i_2] [i_1] = ((/* implicit */unsigned short) (_Bool)0);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) arr_17 [i_1] [i_2] [i_5]);
                        arr_20 [13ULL] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_1 - 1] [(short)1] [(short)1] [(short)1]);
                        arr_21 [i_5] [(unsigned char)6] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((short) 2896535000U));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] = ((((/* implicit */int) arr_5 [i_1] [i_1] [i_2])) << (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                        arr_25 [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) 2147483647U);
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1]))))));
                        arr_28 [i_7] = ((/* implicit */unsigned short) (((~(((var_11) ^ (((/* implicit */unsigned long long int) -2)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_7])))))));
                    }
                    for (signed char i_8 = 4; i_8 < 17; i_8 += 1) 
                    {
                        arr_31 [i_8] [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_2])) / (((/* implicit */int) (short)10473)))))) ^ (((/* implicit */int) ((((/* implicit */int) ((arr_1 [(short)8]) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))))))))));
                        var_24 = ((/* implicit */signed char) arr_9 [i_0] [9ULL]);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_42 [7ULL] = ((/* implicit */short) 3215473894U);
                                arr_43 [i_11] [14U] [i_10] [i_9] [i_9] [i_1 + 2] [i_0] = ((/* implicit */_Bool) ((int) arr_1 [i_11]));
                            }
                        } 
                    } 
                    arr_44 [i_9] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_3)) + (((/* implicit */int) arr_5 [i_9] [11] [i_9]))))));
                    arr_45 [i_0] [i_0] = ((/* implicit */signed char) (+(var_2)));
                }
                var_25 |= ((/* implicit */unsigned short) (+(arr_12 [(short)15])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
    {
        for (int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_12] [i_13])) || (((/* implicit */_Bool) arr_49 [i_12] [i_12]))))) >> (((/* implicit */int) (_Bool)1)))) <= (((-1610099085) ^ (((/* implicit */int) ((signed char) var_12))))))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 4; i_14 < 21; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            arr_55 [i_14] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_12] [i_12])))))))) >= (((((arr_51 [i_12] [i_13] [i_14]) << (((var_10) - (9678437051670555420ULL))))) << (((((4294967264U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))))) - (4294967252U)))))));
                            arr_56 [(signed char)2] [(signed char)2] = ((((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)65535)))) && (((/* implicit */_Bool) arr_50 [18ULL] [i_15])))) && (((/* implicit */_Bool) (~(max((var_1), (var_1)))))));
                        }
                    } 
                } 
                arr_57 [i_12] [i_13] [i_13] = ((/* implicit */unsigned long long int) 2567455560U);
            }
        } 
    } 
}
