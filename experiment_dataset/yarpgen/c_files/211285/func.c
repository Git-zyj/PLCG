/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211285
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2 + 1] [i_3] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)91)) || (((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_2] [i_2 + 2] [i_2]) : (arr_3 [(unsigned char)21] [i_2 + 2] [i_0])))));
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_3] [i_3] [i_2 + 3] [i_1 - 2] [i_1] [i_1])) / (((/* implicit */int) (unsigned short)58021)))) / (((/* implicit */int) min((((/* implicit */short) var_10)), (arr_8 [i_3] [i_3] [i_2 + 2] [i_1 + 1] [i_0] [21LL]))))));
                        arr_10 [i_0] [i_1] [i_2 + 2] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2]);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)64762)), (0U)));
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((1306208822) | (-1306208814))))));
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_20 [1] [i_4] [i_5] [i_6] [i_6 + 3] [(signed char)1] = ((/* implicit */unsigned short) arr_19 [i_6] [(unsigned short)20] [i_6]);
                        var_24 = ((/* implicit */unsigned short) (~(2147483647)));
                    }
                } 
            } 
            arr_21 [i_0] = ((/* implicit */short) ((unsigned char) ((short) arr_3 [i_0] [(unsigned short)3] [i_4])));
            var_25 ^= ((/* implicit */short) max((((/* implicit */int) ((short) ((-1306208830) * (((/* implicit */int) (_Bool)1)))))), (1306208831)));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
            {
                var_26 = arr_16 [i_4] [i_4] [i_7] [i_4];
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((int) var_14)))));
                            arr_29 [i_0] [i_8] [i_7] [15U] = (i_8 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */int) var_0)) / (((/* implicit */int) (short)24062)))) % (((arr_12 [i_0] [i_4] [i_8]) << (((((((/* implicit */int) arr_28 [i_8] [i_4] [i_8] [i_9] [i_9] [i_9])) + (95))) - (27)))))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_0)) / (((/* implicit */int) (short)24062)))) % (((arr_12 [i_0] [i_4] [i_8]) << (((((((((/* implicit */int) arr_28 [i_8] [i_4] [i_8] [i_9] [i_9] [i_9])) + (95))) - (27))) - (41))))))));
                            arr_30 [i_0] [i_4] [i_8] [i_8 - 1] [i_9] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
                arr_31 [i_0] [i_4] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13)));
                arr_32 [i_0] [(short)13] [i_7] = ((/* implicit */unsigned short) arr_17 [i_4] [i_4]);
                arr_33 [i_0] [i_0] [i_4] [15ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_7]))));
            }
            for (int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
            {
                arr_38 [i_10] [(short)14] [(short)14] = ((/* implicit */short) var_4);
                var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) min((var_19), (var_10))))))), (((var_9) - (((/* implicit */long long int) min((arr_0 [i_10] [(unsigned short)1]), (((/* implicit */int) arr_2 [i_0])))))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
            {
                arr_41 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */long long int) 1306208814)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56845))) / (7163829277102805991LL)))));
                var_29 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_11] [i_4] [i_0]))));
                arr_42 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)13))));
            }
            for (signed char i_12 = 3; i_12 < 22; i_12 += 4) 
            {
                var_30 = ((/* implicit */signed char) var_15);
                var_31 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_14)), (min((((/* implicit */long long int) arr_19 [i_12] [i_12 + 1] [i_12])), (((long long int) (_Bool)0))))));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_15))));
                var_33 = ((/* implicit */unsigned short) arr_7 [i_0] [i_4] [i_4] [i_4] [(short)4] [i_4]);
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) arr_46 [i_0] [i_13] [i_13]);
            var_35 = ((/* implicit */unsigned short) arr_6 [i_0] [i_13] [i_13] [i_0]);
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 21; i_14 += 3) 
        {
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1)))))));
            arr_51 [i_14] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [i_14] [i_14 - 1] [i_14]))));
        }
    }
    /* vectorizable */
    for (short i_15 = 1; i_15 < 23; i_15 += 4) 
    {
        arr_56 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) arr_13 [i_15 + 1] [i_15 - 1])) : (((/* implicit */int) var_14))));
        arr_57 [i_15] = ((/* implicit */long long int) var_12);
        arr_58 [i_15] = ((/* implicit */unsigned char) var_1);
        var_37 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_10))))));
    }
    var_38 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_3)), (var_16)));
    var_39 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (long long int i_16 = 2; i_16 < 13; i_16 += 4) 
    {
        for (short i_17 = 1; i_17 < 12; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_68 [i_16] [i_17] [i_18] [i_17] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_16 - 2] [i_17 + 1] [i_17 - 1])) ? (((int) var_12)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_53 [i_17])) : (-1306208826))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (var_1)))))))));
                    var_40 = ((/* implicit */unsigned long long int) max((((min((-7163829277102805991LL), (((/* implicit */long long int) arr_52 [i_16] [(short)6])))) + (arr_7 [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_17 + 2] [i_18]))), (((/* implicit */long long int) ((((/* implicit */int) max((arr_48 [i_17] [i_17] [i_18]), (((/* implicit */unsigned short) var_7))))) != (((((/* implicit */_Bool) arr_1 [i_16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))))))));
                    arr_69 [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_24 [i_16 - 1] [i_17] [i_18] [i_17] [i_18]))))) ? (-1306208796) : ((+(arr_12 [i_16] [i_17] [i_18])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_67 [i_16] [i_17] [i_18]), (var_0))))) != (((((/* implicit */_Bool) (short)12)) ? (-7163829277102805991LL) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_17] [i_17] [(unsigned short)3])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
                    var_41 = ((/* implicit */unsigned short) var_16);
                    arr_70 [i_17] [i_17] [i_17] = ((/* implicit */signed char) var_12);
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */short) ((((((var_16) != (((/* implicit */unsigned long long int) -1306208826)))) && (((/* implicit */_Bool) (-(var_13)))))) ? (((/* implicit */int) ((_Bool) 4194303ULL))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (-1306208814)))));
}
