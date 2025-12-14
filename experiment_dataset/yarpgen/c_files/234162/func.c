/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234162
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
    var_17 |= ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 1924309471U)) ? (((/* implicit */long long int) arr_3 [i_1])) : (min((((((/* implicit */long long int) 915528559)) - (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_1]) : (((/* implicit */int) (unsigned short)14649))))))))))));
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((var_16) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)64512)) : (((/* implicit */int) max(((unsigned short)14679), ((unsigned short)50628))))))))))));
            arr_7 [(unsigned char)12] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 611587523)) ? (5004561609538467439ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))));
        }
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((arr_5 [i_0]) / (arr_5 [i_0])));
                arr_13 [i_0] [i_0] [i_2] [i_3 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_3 - 1])) || (((/* implicit */_Bool) var_6))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_11))));
            }
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                arr_16 [i_2] [i_4] &= ((/* implicit */unsigned char) min(((((-(((/* implicit */int) var_10)))) % (((/* implicit */int) arr_11 [i_0] [i_2] [i_4])))), (((((/* implicit */_Bool) max((arr_10 [i_4] [i_2] [(signed char)9]), (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0])))))))));
                arr_17 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 6200615916348635688ULL)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_2])))));
            }
            arr_18 [i_0] [i_0] = (+(((/* implicit */int) (_Bool)1)));
        }
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))), ((((_Bool)0) ? ((-(var_7))) : (((/* implicit */int) arr_11 [i_0] [(unsigned short)2] [i_0]))))));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                arr_23 [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) (signed char)94);
                arr_24 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) arr_0 [i_0] [0LL]);
                arr_25 [11] [i_5] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 536870911)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_13))))) : (min((arr_6 [i_6] [i_5] [i_0]), (var_12)))))));
            }
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_0]))))), (arr_20 [i_0] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_22 [i_0] [i_0] [(unsigned short)8] [i_5]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) - (var_6)))))))) : (((((/* implicit */_Bool) 576458553280167936ULL)) ? (2370657832U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_0] [(unsigned short)13]))))))))));
            var_23 = ((/* implicit */signed char) (~(arr_4 [11ULL])));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_30 [(unsigned short)2] [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
            arr_31 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((int) ((var_11) % (arr_3 [i_0]))))) * (min((arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1]), (((/* implicit */long long int) arr_20 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
            arr_32 [i_7 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) ((signed char) 65535))), (1868467357)))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */int) 0U);
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
            var_25 = ((/* implicit */int) arr_6 [i_0] [i_8] [i_8]);
        }
        for (int i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            var_26 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned short) (signed char)94))) ^ (((/* implicit */int) arr_2 [4] [i_9 - 1])))), (var_4)));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50909)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5004561609538467427ULL)) ? (var_14) : (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? ((~(((/* implicit */int) var_2)))) : (33423360)))));
            /* LoopSeq 3 */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
            {
                arr_40 [i_0] [(unsigned short)6] [i_0] = ((/* implicit */signed char) arr_2 [i_9 - 1] [i_9 - 1]);
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_4 [i_0]))));
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4981737269101307759ULL)) ? (536870911) : (((/* implicit */int) (short)511))));
                    }
                    arr_47 [i_0] [i_0] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((+(max((1216154246), (((/* implicit */int) arr_36 [i_0])))))) : (((/* implicit */int) max((((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)65525)))), (((((/* implicit */_Bool) arr_15 [i_0])) && (((/* implicit */_Bool) var_2)))))))));
                }
                var_30 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_9 + 1] [i_0] [i_10] [i_10])) ? (arr_22 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_10]) : (arr_22 [i_9 + 2] [i_9 + 2] [i_10] [i_0]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_9 + 1] [i_9 - 1] [i_10] [i_10])) ? (((/* implicit */int) arr_20 [i_9 + 2] [i_9 + 2] [i_9 + 1])) : (((/* implicit */int) arr_20 [i_9 + 2] [i_9 + 2] [i_9 - 1])))))));
            }
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_9]))))));
                var_32 = ((/* implicit */unsigned int) max((var_32), (var_3)));
                /* LoopSeq 3 */
                for (int i_14 = 1; i_14 < 12; i_14 += 1) /* same iter space */
                {
                    arr_52 [i_13] [i_13] [i_0] [i_14] [i_0] [i_14] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_37 [i_0])) & (((/* implicit */int) var_13))))));
                    arr_53 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] = ((/* implicit */short) var_3);
                }
                for (int i_15 = 1; i_15 < 12; i_15 += 1) /* same iter space */
                {
                    arr_58 [i_0] [i_9 - 1] [i_13] [i_0] = ((/* implicit */int) arr_39 [i_0] [i_15] [i_13]);
                    /* LoopSeq 4 */
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))));
                        var_34 = ((/* implicit */long long int) arr_1 [i_15 + 2] [i_9 - 1]);
                        var_35 |= ((((/* implicit */_Bool) (unsigned short)51942)) ? (((/* implicit */int) (short)-32763)) : (-536870901));
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) 4281457114025272649LL))));
                    }
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) arr_45 [0ULL] [i_9 + 2] [i_13] [i_15 + 1] [i_9 + 2] [i_13]);
                        arr_64 [i_17] [i_0] [i_13] [i_9 - 1] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_4)));
                        var_38 = (!(((/* implicit */_Bool) 5912139731981664842LL)));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_9 + 2])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9 + 1])))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        arr_67 [i_18] [4ULL] [i_13] [4ULL] [4ULL] |= (-(arr_29 [(signed char)6]));
                        arr_68 [4ULL] [i_9 + 1] [(unsigned short)6] [4ULL] [i_9] |= ((/* implicit */long long int) ((unsigned long long int) arr_21 [i_15 - 1] [i_9 - 1] [6ULL]));
                        arr_69 [i_0] [(unsigned short)6] [2] [i_13] [2] [6LL] [i_18] |= var_13;
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        arr_72 [i_0] [i_9 + 1] [i_0] [i_0] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483633))));
                        var_40 = var_13;
                    }
                }
                for (int i_20 = 1; i_20 < 12; i_20 += 1) /* same iter space */
                {
                    arr_77 [i_9] [(unsigned short)0] [i_13] |= ((/* implicit */int) ((unsigned int) (+(5004561609538467426ULL))));
                    var_41 *= ((/* implicit */unsigned long long int) var_11);
                    arr_78 [i_0] [i_0] [i_13] [i_13] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_14 [i_20 + 2] [i_13] [i_0] [i_0]))))) ? (((/* implicit */int) arr_36 [i_0])) : (((/* implicit */int) (signed char)94))));
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(437936836)))) ? (arr_50 [i_0] [i_9 + 2] [i_9 + 2] [i_0]) : (((/* implicit */long long int) -2147483634))));
                }
            }
            for (unsigned short i_21 = 0; i_21 < 14; i_21 += 3) /* same iter space */
            {
                arr_83 [i_0] [i_9 + 1] [0] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((1921426457609594282LL), (((/* implicit */long long int) arr_29 [0]))))) || (((/* implicit */_Bool) -33423369))))) + (min((((/* implicit */int) arr_59 [i_0] [i_0] [(signed char)8] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) 3642162908686248512ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-26053))))))));
                var_43 = ((/* implicit */signed char) arr_10 [i_0] [i_9] [i_21]);
            }
        }
    }
}
