/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211584
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
    var_19 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((long long int) arr_9 [i_4 - 1] [i_4 - 3] [i_4] [i_4] [i_4 - 3])))))));
                                var_21 = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)9] [i_3] [(unsigned short)9] [i_3])) - (63334)))))) + (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) : (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((((((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)9] [i_3] [(unsigned short)9] [i_3])) - (63334))) + (62095))) - (11)))))) + (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [6LL] [i_0 + 2] = ((/* implicit */unsigned int) var_14);
                arr_13 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -9155504000391653299LL)), (5708715921769979519ULL)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_17 [i_0 - 1] [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [2ULL] [8ULL] [i_0] [i_5] [i_5])))));
                    arr_18 [i_5] [i_5] [i_0 + 3] [i_5] = ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_21 [i_6] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1] [0U]))) > (2963242816U)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            arr_24 [i_5] [i_6] [i_5] [(unsigned char)4] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_6] [i_6] [i_7 - 1])) && (((/* implicit */_Bool) var_4)))))));
                            arr_25 [1LL] [i_5] [i_6] [3LL] [i_7] [i_1] [(unsigned short)4] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) + (((531906304U) << (((var_7) - (816165667U))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            arr_28 [i_0 - 1] [i_0 - 1] [i_5] [i_5] [2LL] = ((unsigned short) 16U);
                            arr_29 [i_0] [i_1] [i_5] [8U] [i_5] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_5] [(unsigned short)9] [(unsigned char)5]);
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) 1331724499U);
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_0 + 3] [i_1] [6ULL] [6ULL] [i_9]) : (arr_11 [i_0 - 1] [i_1] [i_5] [i_9] [i_1])));
                        /* LoopSeq 4 */
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_26 -= ((/* implicit */unsigned int) var_18);
                            arr_35 [i_0] [i_1] [i_5] [i_9] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                            arr_36 [i_10] [i_5] [i_5] = ((/* implicit */long long int) ((arr_31 [i_0] [i_0] [i_0] [(unsigned short)0] [(unsigned short)0] [i_0 + 2]) << (((arr_31 [i_0] [7LL] [(unsigned short)1] [i_5] [(unsigned short)2] [i_10]) - (4058155487U)))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 3) /* same iter space */
                        {
                            arr_39 [i_9] [i_5] [i_11] [i_9] [i_5] = (~(((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                            var_27 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0 + 3])) + (((/* implicit */int) arr_6 [i_9] [i_9])))) + (((/* implicit */int) arr_8 [i_5] [i_1] [i_5] [2LL] [i_9] [i_1]))));
                        }
                        for (unsigned int i_12 = 1; i_12 < 9; i_12 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((1331724484U) * (var_11))))));
                            arr_42 [i_5] = ((((/* implicit */_Bool) (unsigned short)34978)) ? ((-(arr_19 [i_0 + 2] [i_5] [i_9] [i_5]))) : (((/* implicit */long long int) 1331724479U)));
                            arr_43 [i_0] [(unsigned short)0] [i_5] [i_5] [i_12] = arr_14 [i_1 + 1];
                        }
                        for (unsigned int i_13 = 1; i_13 < 9; i_13 += 3) /* same iter space */
                        {
                            var_29 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))) : (var_18)))) + (var_14));
                            arr_46 [i_0] [i_1] [4ULL] [4ULL] [i_9] [i_9] [i_9] &= ((long long int) 2963242816U);
                        }
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_15))));
                    }
                    arr_47 [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned short)32767);
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((var_14) ^ (((/* implicit */unsigned long long int) 1044206359061799606LL)))))));
                }
                for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)0)), (((/* implicit */unsigned long long int) arr_45 [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (arr_34 [i_0] [i_0] [i_0] [i_1] [i_0] [4U]) : (arr_15 [i_14] [i_1] [i_0 + 2]))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))))) : (((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */long long int) var_8)), (522366878484964891LL))) : (((((/* implicit */_Bool) arr_19 [i_1 - 2] [i_1 - 1] [i_0] [i_14])) ? (arr_4 [i_1]) : (arr_4 [i_14])))))));
                    var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (max((((var_16) - (((/* implicit */unsigned long long int) -5797885412751418616LL)))), (((/* implicit */unsigned long long int) ((long long int) var_5)))))));
                }
            }
        } 
    } 
}
