/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32375
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_11);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        arr_9 [i_3] [i_1 - 1] [i_2] [17LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((arr_0 [13LL]), (((/* implicit */short) arr_5 [i_2] [i_0]))))))))));
                        arr_10 [i_1] [i_3] [12ULL] [i_1 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2] [i_3]))));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_14 [6LL] [i_0] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1]);
                        var_14 -= ((/* implicit */short) var_6);
                        arr_15 [12] |= ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */long long int) min((((unsigned int) var_10)), (arr_7 [i_0 + 1] [i_1] [i_1] [i_0 - 2])))) : (5897174076879343378LL));
                        var_15 ^= ((/* implicit */int) min((max((173440835U), (((/* implicit */unsigned int) -1852500209)))), (arr_13 [i_2] [i_0 - 1] [i_0 - 1] [i_1 + 1])));
                    }
                    arr_16 [i_0] [i_1 + 1] [i_2] = ((/* implicit */long long int) (+(max((arr_12 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 2]), (arr_12 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 2])))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            for (int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        arr_28 [i_5] [i_5] [i_6 - 1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) 622037452U));
                        arr_29 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */int) ((_Bool) arr_25 [i_5] [i_7] [i_7 - 1] [i_7] [i_5]));
                        var_16 = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5 + 4])) && (((/* implicit */_Bool) arr_22 [8] [i_5] [i_5 + 1] [i_5 - 1]))))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        arr_33 [i_9] = ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) min((((/* implicit */short) var_3)), (arr_0 [(unsigned char)6])))));
        /* LoopSeq 3 */
        for (short i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
        {
            arr_36 [i_9] [i_9] = ((/* implicit */unsigned char) ((max((max((arr_7 [i_10 + 2] [i_10] [i_10] [i_9]), (((/* implicit */unsigned int) arr_8 [i_9] [i_9] [i_9])))), (var_6))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_10])) ? (-1852500209) : (((/* implicit */int) (_Bool)1)))))))))));
            var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_13 [7] [i_10 + 1] [i_10 + 1] [i_9])) ? (150916448) : (((/* implicit */int) arr_20 [i_10 + 3] [i_9])))))), (min((3200103439017559610LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_10] [i_9] [i_9])))))))));
        }
        for (short i_11 = 2; i_11 < 17; i_11 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 5897174076879343390LL)), (min((var_8), ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) arr_25 [i_9] [i_9] [i_9] [2LL] [i_11]))))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1852500180)) ? (((/* implicit */long long int) arr_6 [i_9] [i_11] [i_11] [i_9])) : ((-((((_Bool)1) ? (-9192594300011717323LL) : (((/* implicit */long long int) 1852500208)))))))))));
        }
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                var_21 = arr_39 [3];
                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((var_11), (1181685318)))))) ? (max((max((arr_26 [i_9]), (((/* implicit */unsigned long long int) arr_23 [i_9] [i_9] [i_9])))), (((/* implicit */unsigned long long int) min((3903308694U), (((/* implicit */unsigned int) var_12))))))) : (arr_17 [i_9])));
            }
            var_23 -= ((/* implicit */unsigned long long int) ((int) arr_4 [i_12] [i_12] [i_9]));
            var_24 = ((/* implicit */int) max((var_24), (((((-1181685318) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 5897174076879343377LL)))))))));
        }
        arr_44 [i_9] = ((/* implicit */unsigned char) ((arr_42 [i_9] [i_9] [i_9]) * (((/* implicit */unsigned int) ((int) (-(arr_35 [i_9] [i_9] [6])))))));
        var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) 812992636U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_9] [i_9] [i_9])))), (((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_8 [i_9] [(short)14] [i_9])) : (((/* implicit */int) arr_8 [i_9] [i_9] [i_9]))))));
    }
    for (long long int i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        arr_48 [i_14] = ((/* implicit */long long int) var_11);
        var_26 = ((-4069162410388358037LL) / (5897174076879343377LL));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 4) 
        {
            for (unsigned int i_16 = 1; i_16 < 21; i_16 += 4) 
            {
                {
                    arr_57 [i_16] [i_16] [i_16] = ((/* implicit */int) (-(((unsigned int) arr_20 [i_16 + 2] [i_15 - 1]))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) -9192594300011717323LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1438927501U)));
                    var_28 = (-(((((/* implicit */_Bool) -9192594300011717323LL)) ? (arr_53 [i_14] [i_15 + 2] [i_16 + 1] [i_16 - 1]) : (arr_23 [i_14] [i_15] [i_16]))));
                    arr_58 [i_16] [8ULL] [8ULL] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) var_0)), (arr_26 [i_14])))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        var_29 -= ((/* implicit */unsigned char) (short)-26860);
                        arr_63 [i_14] [i_15 + 3] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_21 [i_15 + 1])))) ? (min((arr_21 [i_15 + 2]), (((/* implicit */long long int) 391658602U)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_15 + 1]) >= (((/* implicit */long long int) 1085305587U))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 1; i_18 < 20; i_18 += 4) 
                        {
                            var_30 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) & (arr_23 [i_14] [i_15 + 1] [(short)0])))) : (max((((/* implicit */unsigned long long int) arr_21 [i_14])), (arr_17 [i_14])))))) ? (((((/* implicit */unsigned long long int) (-(arr_47 [11U])))) + (arr_62 [i_14] [i_15 + 1] [i_16] [i_17] [i_18] [i_15 + 1]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 954405970U)) ? (-1181685318) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_3))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_14] [i_17]))))), ((-(arr_24 [i_17])))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) -415782710)) + (var_8))) >= (((/* implicit */unsigned long long int) (+(-756702847455345350LL))))))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_59 [i_17] [(unsigned char)1] [i_16 + 1] [i_17] [i_18 + 3]), (((/* implicit */short) max((arr_51 [i_14]), (var_3))))))) ? (((/* implicit */unsigned int) ((int) arr_49 [i_16 + 1] [i_18 + 3]))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_59 [i_16 + 2] [i_15] [i_15] [(short)2] [i_15]))))) ^ ((-(1626669537U))))))))));
                            var_33 = ((/* implicit */long long int) ((int) 391658609U));
                            arr_67 [i_15] [i_14] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) arr_51 [i_14])) || (((/* implicit */_Bool) var_11)))))) ? ((((_Bool)1) ? (max((((/* implicit */long long int) arr_45 [i_16] [i_18])), (-2248261394309461070LL))) : (((/* implicit */long long int) min((2668297759U), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_16 + 2])))));
                        }
                    }
                }
            } 
        } 
        arr_68 [i_14] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
        /* LoopNest 3 */
        for (long long int i_19 = 3; i_19 < 21; i_19 += 4) 
        {
            for (unsigned int i_20 = 1; i_20 < 21; i_20 += 4) 
            {
                for (int i_21 = 4; i_21 < 21; i_21 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) 4824010465507237388LL);
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)28591)), (var_6))))));
                    }
                } 
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned int) max((var_36), (max((((/* implicit */unsigned int) var_12)), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (var_2))))))))));
    var_37 |= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min((var_7), (var_7)))) ? (var_0) : ((-(var_0))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) -366110273)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) -1181685318)), (var_4))))))));
}
