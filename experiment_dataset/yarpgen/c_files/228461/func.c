/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228461
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((min(((_Bool)1), (var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                var_15 -= ((/* implicit */signed char) min((((arr_0 [i_0]) | (arr_0 [i_1]))), (((/* implicit */long long int) (_Bool)1))));
                var_16 = ((/* implicit */_Bool) var_3);
                var_17 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_4 [4])), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            {
                arr_10 [16LL] [(signed char)8] [10] &= ((/* implicit */short) (!(((/* implicit */_Bool) 996340614U))));
                arr_11 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)77)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12682)) ? (2474610046U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_7 [i_2])))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | ((~(((/* implicit */int) var_13))))));
                /* LoopSeq 4 */
                for (long long int i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    arr_15 [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_12 [i_4 + 2] [i_2] [i_2] [i_2]) && (arr_12 [i_2] [i_3 + 1] [i_4] [i_2])))), ((-(4294966784U)))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_9))))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)1008)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (long long int i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_3 + 1])), ((unsigned char)50)))) : ((~(((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) & (var_12)));
                                var_22 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) var_0)) ? (arr_20 [i_2] [i_2] [i_2] [(unsigned char)8] [i_2] [i_2] [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1733536314U)) ? (-8590602612617881594LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_22 [(unsigned char)2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) arr_12 [i_5 - 3] [i_5 - 3] [i_5] [i_5 - 2])))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((min(((-2147483647 - 1)), (((/* implicit */int) var_9)))) + (((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_28 [i_2] [i_8] [(short)7] [i_3 + 1] [i_2] = ((/* implicit */unsigned short) max((((arr_18 [i_2] [i_3] [i_3 + 2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 1]))) : (var_1))), (((/* implicit */unsigned long long int) arr_9 [i_3 - 1]))));
                                arr_29 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((long long int) (-2147483647 - 1))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_30 [2LL] [2LL] [i_2] [i_2] [i_8] [i_8] [(unsigned short)14] = ((/* implicit */unsigned short) ((_Bool) var_1));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 16; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                arr_35 [i_2] [i_3 + 2] [i_5] [i_10] [(unsigned char)12] [i_3 + 2] &= var_12;
                                arr_36 [i_2] [(unsigned short)4] [(signed char)4] [9LL] [9LL] [i_11] [i_11] = ((/* implicit */short) max((((/* implicit */signed char) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11 + 1])))))), (var_4)));
                                var_23 = ((/* implicit */unsigned char) arr_26 [i_2] [i_3] [i_5] [i_10] [i_11]);
                            }
                        } 
                    } 
                    arr_37 [i_2] [(short)15] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_31 [i_2] [(unsigned short)3] [i_3] [i_3 + 1] [i_5 + 1]))))));
                }
                for (long long int i_12 = 3; i_12 < 15; i_12 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */int) arr_6 [i_3]);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 16; i_14 += 1) 
                        {
                            {
                                arr_47 [i_14] [i_2] [(signed char)9] [i_12] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)77), (((/* implicit */unsigned char) (_Bool)1))))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12080)) || (((/* implicit */_Bool) var_6)))))));
                                var_25 = ((/* implicit */short) arr_19 [i_2] [i_12 + 2]);
                            }
                        } 
                    } 
                }
                for (long long int i_15 = 3; i_15 < 15; i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 2; i_17 < 15; i_17 += 1) 
                        {
                            {
                                var_26 = ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_12));
                                var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_3 + 2] [i_15 + 1] [i_15 - 1] [i_2] [i_3 + 2])))))));
                            }
                        } 
                    } 
                    arr_56 [i_15] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned short)54334), (((/* implicit */unsigned short) (_Bool)1))))) > ((~(((/* implicit */int) (unsigned char)56))))));
                    arr_57 [(unsigned char)4] [i_2] = min((((/* implicit */long long int) (_Bool)0)), (-843106267705995065LL));
                }
            }
        } 
    } 
}
