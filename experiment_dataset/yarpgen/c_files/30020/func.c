/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30020
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_20 = ((/* implicit */int) min((min(((-(var_0))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))), (min((min((8840788565880808473ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))), (((/* implicit */unsigned long long int) ((unsigned int) 8840788565880808464ULL)))))));
            var_21 = ((/* implicit */signed char) min(((+(8840788565880808453ULL))), (arr_1 [i_1 - 2] [i_0 + 3])));
            var_22 += ((/* implicit */_Bool) (signed char)-103);
        }
        /* vectorizable */
        for (short i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) 871465911U));
            arr_10 [(unsigned char)10] [(_Bool)1] [i_2] = ((signed char) arr_4 [i_2] [i_2 - 2]);
            var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (arr_3 [i_2] [i_2]))));
        }
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            arr_13 [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [(unsigned short)0]))))), (min((((/* implicit */unsigned long long int) ((unsigned char) var_2))), (min((arr_2 [0]), (((/* implicit */unsigned long long int) arr_8 [(signed char)16]))))))));
            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)25947)) ? (8840788565880808449ULL) : (((/* implicit */unsigned long long int) 871465919U)))), (2528664553280284188ULL)));
        }
        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_1 [(unsigned short)11] [i_4]))));
            var_26 = ((/* implicit */long long int) (~(max((arr_11 [i_0 + 1] [i_4 - 2] [i_4 + 1]), (arr_3 [i_0] [i_4])))));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            arr_20 [10] [14ULL] [i_0] = ((/* implicit */_Bool) ((871465914U) % (((/* implicit */unsigned int) 2147483647))));
            arr_21 [(signed char)1] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_10)), (min((min((var_6), (var_1))), (((/* implicit */unsigned long long int) var_17))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) max(((unsigned char)126), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)115)) < (((/* implicit */int) var_8)))))))), (max((((/* implicit */unsigned int) ((_Bool) var_8))), (var_12)))));
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_0 + 1])))));
                        var_28 = ((/* implicit */unsigned long long int) (short)-25948);
                        arr_31 [i_7 + 1] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_3))), (arr_11 [i_0] [i_0 + 3] [i_7 + 1])))), (max((min((2528664553280284188ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0])))), (9605955507828743145ULL)))));
                    }
                } 
            } 
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-86)), (max((3343191261U), (((/* implicit */unsigned int) arr_18 [(short)5] [(short)5]))))))) ? (min((max((((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [18ULL] [i_0])), (var_2))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_16)), (arr_5 [(signed char)16] [12LL] [16])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15918079520429267427ULL)) ? (arr_24 [i_0] [i_5] [(short)9] [i_0]) : (9605955507828743145ULL)))) ? (((/* implicit */int) var_16)) : (((arr_23 [(unsigned char)7] [(unsigned char)7] [i_5]) ? (((/* implicit */int) arr_22 [i_0] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_8)))))))));
        }
        for (long long int i_8 = 3; i_8 < 16; i_8 += 3) 
        {
            arr_34 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_4 [i_8 + 3] [i_0 - 1]));
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned short) (short)-6871)), (var_17))))), (((var_7) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (var_11))))))))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(short)15] [(short)15] [i_0] [(short)15])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_35 [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [1]))) : (((/* implicit */int) var_16))))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)18))))), (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [17U] [i_9]))) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) arr_5 [i_0] [i_9] [(_Bool)1])))))));
            arr_38 [i_0] [(unsigned short)1] = ((/* implicit */short) ((unsigned short) var_5));
        }
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_32 = arr_35 [i_10] [i_10];
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                {
                    var_33 *= ((/* implicit */_Bool) var_17);
                    arr_46 [i_10] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2528664553280284183ULL)) ? (((/* implicit */unsigned long long int) 3343191276U)) : (8840788565880808485ULL))))));
                    arr_47 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((_Bool) arr_35 [i_10] [i_11]));
                    var_34 = ((/* implicit */signed char) 1294576806U);
                }
            } 
        } 
        arr_48 [i_10] [i_10] = ((/* implicit */unsigned short) (~(871465911U)));
        var_35 *= ((/* implicit */unsigned long long int) arr_41 [i_10] [i_10]);
    }
    /* LoopSeq 2 */
    for (int i_13 = 1; i_13 < 17; i_13 += 4) /* same iter space */
    {
        arr_51 [i_13] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_35 [i_13 - 1] [i_13 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13 - 1] [i_13 - 1] [4ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [18U])) ? (((/* implicit */unsigned int) (~(arr_36 [i_13] [i_13] [10ULL])))) : (min((((/* implicit */unsigned int) var_16)), (arr_7 [4]))))))));
        arr_52 [i_13] = ((/* implicit */unsigned char) min((((/* implicit */short) (signed char)82)), ((short)0)));
    }
    for (int i_14 = 1; i_14 < 17; i_14 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) max(((-(min((9605955507828743145ULL), (((/* implicit */unsigned long long int) (signed char)85)))))), (min((min((arr_0 [i_14]), (arr_27 [i_14 - 1] [i_14]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_15)), (var_16))))))));
        var_37 = ((/* implicit */unsigned int) min((var_37), (min((((/* implicit */unsigned int) max((((int) arr_26 [i_14 + 1] [i_14] [(unsigned char)17])), (((/* implicit */int) ((_Bool) var_17)))))), (arr_26 [i_14 + 1] [i_14 + 1] [i_14 + 1])))));
        var_38 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (unsigned short)21909)));
        arr_57 [i_14] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((int) arr_18 [(_Bool)1] [(_Bool)1]))), (arr_2 [0]))), (max((((((/* implicit */_Bool) arr_14 [i_14])) ? (arr_24 [i_14] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_36 [(unsigned short)15] [7LL] [i_14]) : (((/* implicit */int) arr_37 [(signed char)19])))))))));
    }
}
