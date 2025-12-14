/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38778
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
    var_17 = ((/* implicit */unsigned short) ((signed char) var_15));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) << (min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2]))));
                        var_20 ^= ((/* implicit */int) var_9);
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) 18);
                var_22 += ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -6200648535444905373LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (778617904896526454LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)41)))));
            }
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_23 += ((/* implicit */long long int) var_15);
                arr_16 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 42)) ? (((/* implicit */int) (short)-23)) : (((/* implicit */int) (signed char)-28)))), (min((((/* implicit */int) var_9)), (arr_15 [i_0] [i_1] [i_5])))));
            }
            arr_17 [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0]);
        }
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 24; i_6 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            var_24 = (~(min((min((((/* implicit */unsigned long long int) arr_20 [i_8 + 2] [i_8 + 2])), (18446744073709551614ULL))), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_0])))));
                            var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)89)), (min((((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) arr_18 [i_7] [i_7] [i_7]))))), (((((/* implicit */_Bool) var_9)) ? (17744544840216067757ULL) : (((/* implicit */unsigned long long int) var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        {
                            arr_35 [i_6] [i_7] [i_10] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [i_10 + 4] [i_10] [i_10])) ? (-6LL) : ((~(arr_30 [i_10] [i_10] [i_7] [i_10])))))));
                            var_26 -= ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_15)), (var_5)))), (((((/* implicit */unsigned long long int) 18)) / (arr_6 [i_0] [i_6] [i_7] [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)1)))) : (min((((/* implicit */unsigned int) (_Bool)1)), (307783178U)))));
            }
            for (long long int i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_6] [i_12] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6 + 1]))) : (var_5))), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_6 - 1])))))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_22 [i_12] [i_12] [i_12] [(unsigned short)9])) : (var_14)))) ? (((var_10) ? (5835833856648066598LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_6] [i_12]))))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1])) - (((/* implicit */int) (_Bool)0)))))));
            }
            for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                arr_44 [i_0] [i_0] [i_0] = ((/* implicit */signed char) -2760276567337161706LL);
                var_29 = (-(min((8460147192940049453LL), (var_12))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((6133582762606971520ULL), (((/* implicit */unsigned long long int) 1034529766)))), (((/* implicit */unsigned long long int) (short)-20660)))))));
                    arr_49 [(short)15] [(short)15] [(short)15] [(short)15] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (short)0))))), (max((var_8), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0]))))))) ? (((long long int) min((var_1), (((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                }
                var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min(((signed char)13), (arr_34 [i_0] [i_0] [i_0] [i_13] [i_0])))) ? (min((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)0)))))), (max((((4504554979630698045LL) - (((/* implicit */long long int) ((/* implicit */int) arr_25 [(signed char)7] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) (unsigned char)116))))));
            }
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                for (unsigned short i_16 = 1; i_16 < 23; i_16 += 4) 
                {
                    {
                        var_32 = ((/* implicit */signed char) arr_7 [i_16 + 2] [i_16 + 2] [i_16 - 1] [i_16 + 2]);
                        arr_54 [i_16 + 2] [i_16 + 2] [i_15] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) (unsigned char)1)), (0ULL)))))) ? (min((var_1), (((/* implicit */int) (unsigned short)1122)))) : (min((((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0])), (arr_41 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) var_5)) ? (var_16) : (var_7))))));
                        var_33 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((min((arr_15 [i_0] [i_15] [i_0]), (var_6))), (((/* implicit */int) max(((unsigned char)255), ((unsigned char)0))))))), (max((((/* implicit */unsigned long long int) (unsigned char)250)), (1147929488954742692ULL)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_17 = 1; i_17 < 22; i_17 += 3) 
            {
                for (long long int i_18 = 2; i_18 < 21; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        {
                            arr_61 [i_0] [i_17] = ((/* implicit */unsigned char) var_9);
                            arr_62 [i_0] [i_6] [i_0] [i_18] [i_6] [i_17] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4504554979630698051LL)) ? (((/* implicit */int) (short)-20653)) : (((/* implicit */int) (signed char)-44))));
                        }
                    } 
                } 
            } 
        }
        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
}
