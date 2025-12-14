/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191829
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
    var_11 = ((/* implicit */unsigned char) var_8);
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)4054))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [(unsigned short)8] = ((/* implicit */unsigned short) ((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) + (((((((/* implicit */_Bool) 8954786424507263410ULL)) ? (((/* implicit */int) arr_1 [5ULL])) : (((/* implicit */int) arr_1 [(short)10])))) / (((/* implicit */int) var_0))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (4167571926U)))), (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) ((int) 9491957649202288205ULL))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1]))))) : ((-(arr_4 [i_0] [i_1] [12U]))))) : (4167571926U)));
            var_14 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_5)) == (((/* implicit */int) ((arr_0 [i_0]) == (1119178226008486480LL)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 1] [i_2 - 1]))));
                    arr_12 [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 - 3])) & (((/* implicit */int) arr_1 [i_2 + 1]))));
                }
                for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    var_16 = ((/* implicit */signed char) (((-(((/* implicit */int) var_4)))) != (((/* implicit */int) var_1))));
                    var_17 = ((/* implicit */unsigned char) (signed char)124);
                }
                var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) ((short) 1511637518U)))))));
                arr_17 [i_5] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_16 [i_5] [i_1] [2LL])))) ? (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((unsigned long long int) arr_10 [i_0] [18LL] [i_0] [(unsigned short)19])) : (max((((/* implicit */unsigned long long int) arr_11 [(short)16] [i_1] [(unsigned short)5] [i_0])), (8954786424507263421ULL))))) : (((/* implicit */unsigned long long int) min((127395370U), (((/* implicit */unsigned int) (short)31071)))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_10), (arr_11 [i_1] [i_5] [i_6] [i_7])))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_7]))))));
                            var_21 = ((/* implicit */short) ((unsigned int) ((9491957649202288205ULL) << (((var_9) - (3571644247U))))));
                            arr_25 [i_0] [i_0] [i_1] [i_1] [18ULL] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8385))) : (8954786424507263410ULL)));
                            var_22 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [20U] [i_7]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) var_3);
                            arr_33 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_9] [i_5] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_9] [i_1] [i_8] [i_8]))));
                            arr_34 [(unsigned short)0] [i_9] [i_5] = ((/* implicit */long long int) min((arr_30 [i_0] [i_8] [i_5] [i_8] [i_9]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) 9491957649202288205ULL))))))));
                            arr_35 [i_0] [i_9] [i_9] [i_8] [i_9] = arr_24 [i_0] [i_1];
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) max((4154065588956691369LL), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [i_1])) % (((((/* implicit */int) (unsigned short)65521)) - (((/* implicit */int) var_4)))))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_10))))));
                var_26 = ((/* implicit */_Bool) ((int) arr_10 [i_0] [i_1] [i_10] [i_1]));
            }
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_27 = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) -3001213301916285870LL)) ? (((/* implicit */unsigned long long int) var_9)) : (5220087592343018339ULL)))))));
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_28 = max((((/* implicit */unsigned int) -18)), (1201551668U));
                        arr_47 [i_0] [i_1] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? ((+(max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_11])), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) arr_37 [(signed char)14])))))))));
                        var_29 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) : (6155863078681622082LL)));
                    }
                    arr_48 [i_12] [(signed char)4] [i_11] [i_12] [i_0] [i_1] = ((/* implicit */int) arr_31 [i_0] [(unsigned char)3] [i_0] [i_0] [i_12] [i_0] [i_0]);
                }
                var_30 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) 2590632593U)) + (2305843009213693952LL)))));
            }
        }
        for (long long int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
        {
            arr_52 [i_0] [i_14] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_38 [13U] [i_14] [13U] [i_14]))) - (70366596694016LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [(short)10] [i_14]))))))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_19 [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((short) arr_19 [i_0] [i_0] [i_0])))));
            var_32 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) > (arr_16 [i_14] [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_14] [2LL] [i_0]))) >= (arr_16 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_0] [i_0] [(unsigned short)15]))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned char)199))));
            var_34 = ((/* implicit */signed char) 1534722967U);
        }
        for (long long int i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */_Bool) ((0LL) << (7U)));
            var_36 = ((/* implicit */signed char) (-(((int) arr_2 [i_15] [i_0]))));
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
        {
            arr_58 [(unsigned char)17] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_16] [i_16] [i_16])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_16] [i_0] [i_0])))))) == (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_16]))) : (arr_15 [i_0] [i_16] [i_16] [i_16])))));
            var_37 = ((/* implicit */short) 63U);
        }
        var_38 = ((/* implicit */long long int) var_1);
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (-1698160020) : (((/* implicit */int) (short)12870))));
}
