/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3550
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_0 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)47385)) ? (((/* implicit */int) (unsigned short)18152)) : (((/* implicit */int) (_Bool)0))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_2 [i_0 - 2])))), (((((/* implicit */int) (unsigned short)47385)) * (((/* implicit */int) (_Bool)0))))));
        arr_5 [15] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) var_9);
        arr_9 [i_1] = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            arr_12 [i_2] [i_1] [i_2] = (((+(var_0))) + ((-(((/* implicit */int) var_3)))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) 
            {
                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_5)))))));
                var_14 = ((/* implicit */unsigned short) var_0);
                arr_16 [i_2] [i_2] [i_1 - 2] [i_2] = ((/* implicit */long long int) var_1);
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_19 [i_2] [i_3] [i_2 + 2] [i_2 + 2] [i_1] [i_2] = ((arr_17 [i_4] [i_3] [i_1] [i_1]) ? ((~(arr_0 [i_3 - 3]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_11)))));
                    var_15 = ((/* implicit */short) var_3);
                    arr_20 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3] [i_2 + 2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_4] [i_4] [i_2 + 1] [i_1 - 2]))));
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    arr_25 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_1 - 2]))));
                    var_18 = arr_7 [i_5] [i_1];
                }
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    arr_29 [i_6] [i_3 - 2] [i_2] [i_2] [i_1 + 3] [i_1 + 3] = ((/* implicit */unsigned char) arr_2 [i_1 - 2]);
                    var_19 = ((/* implicit */unsigned short) ((int) arr_18 [i_1] [(short)16] [i_2] [i_1] [i_1]));
                    arr_30 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) ((unsigned char) arr_2 [i_1 + 2]));
                    var_20 = ((/* implicit */int) ((((/* implicit */int) var_1)) != (arr_1 [i_1] [i_1])));
                }
            }
        }
        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned short)47374))) / (((/* implicit */int) var_3))));
            arr_33 [i_7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_1] [i_7] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_28 [18U] [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [15]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (arr_23 [i_7] [i_7] [i_7] [i_1] [i_1] [i_1])))));
        }
        var_22 = ((/* implicit */int) ((short) arr_24 [i_1 + 1] [1] [i_1 + 2] [i_1 + 2]));
        arr_34 [i_1] = ((/* implicit */unsigned int) var_4);
    }
    for (signed char i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
    {
        arr_39 [i_8] = ((/* implicit */unsigned short) min((((/* implicit */int) max((var_8), (arr_38 [i_8 - 2])))), (((((/* implicit */int) arr_38 [i_8 - 2])) * (((/* implicit */int) arr_38 [i_8 - 2]))))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 3; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1961578169U))))) : (((/* implicit */int) (unsigned short)18150))));
                            var_24 = ((/* implicit */_Bool) var_8);
                            arr_50 [i_11] [i_11] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 262128700)) ? (((/* implicit */int) (unsigned short)18162)) : (((/* implicit */int) var_3))))) != (max((((/* implicit */long long int) (unsigned short)47388)), (((((/* implicit */long long int) 7U)) - (-1421848587387624536LL)))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_48 [i_11] [i_9] [(unsigned char)14] [i_9] [i_11 - 1]) ? (((/* implicit */int) arr_48 [i_12 - 3] [i_9] [(unsigned char)16] [i_9] [i_11])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) arr_49 [i_8 + 3] [i_8 + 2])), ((+(2619354177U)))))));
                        }
                    } 
                } 
            } 
            arr_51 [(unsigned char)17] [i_9] [20LL] = ((/* implicit */long long int) ((_Bool) min(((~((-2147483647 - 1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
            {
                arr_54 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [2U] [i_8] [2U] [i_9] [i_8] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))) ? (((((/* implicit */_Bool) arr_28 [i_13] [i_9] [i_8])) ? (((/* implicit */int) arr_27 [i_8])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_44 [i_8] [i_8]))));
                arr_55 [i_13] [i_9] [i_9] [(unsigned short)18] = ((/* implicit */long long int) arr_43 [i_13] [i_9] [i_8]);
            }
            for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((max((var_1), (((/* implicit */unsigned short) arr_27 [i_9])))), (max((var_10), (((/* implicit */unsigned short) var_2)))))))));
                var_27 = ((/* implicit */unsigned int) var_9);
            }
            arr_59 [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_9] [i_8 - 1] [(short)8] [i_9])) ? (((/* implicit */int) max(((unsigned short)47374), ((unsigned short)15834)))) : (((/* implicit */int) ((short) var_7)))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))), (var_0))))));
            arr_60 [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6427)) ? (((((/* implicit */_Bool) ((unsigned short) arr_22 [i_9] [i_9] [i_9] [i_9] [(unsigned char)11]))) ? (max((var_11), (((/* implicit */unsigned int) arr_13 [i_9] [i_9] [(_Bool)1] [i_8])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_8 + 1] [i_8 + 1]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_9] [i_9])))))));
        }
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
        {
            for (unsigned short i_16 = 1; i_16 < 22; i_16 += 3) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_70 [i_17] [i_8 + 3] [i_15] [i_15] [i_8 + 3] = ((/* implicit */short) (-(((((/* implicit */int) arr_58 [i_15] [i_17] [i_17] [i_15])) + (((/* implicit */int) var_3))))));
                        var_28 = ((/* implicit */unsigned short) max(((~(((arr_13 [1U] [i_8 + 2] [i_15] [i_8 + 2]) ? (((/* implicit */unsigned long long int) arr_41 [(short)6])) : (var_7))))), (((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (_Bool)1))))))));
                        var_29 = ((/* implicit */unsigned char) ((arr_57 [i_17] [(unsigned char)17] [i_8]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_16] [(signed char)2] [i_8]))))) ? (((/* implicit */int) max((var_9), (var_6)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_8 + 1]))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_8 - 1])) : (((/* implicit */int) arr_6 [i_8 - 2])))) : (((/* implicit */int) max((arr_6 [i_8 + 2]), (arr_6 [i_8 + 2]))))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_40 [i_8] [i_8])) >> (((/* implicit */int) arr_40 [i_8] [i_8])))) : ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)47385)) == (((/* implicit */int) (unsigned short)65535)))))))));
    }
    /* LoopNest 2 */
    for (short i_18 = 0; i_18 < 25; i_18 += 1) 
    {
        for (signed char i_19 = 1; i_19 < 23; i_19 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) ((short) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_10)))))));
                    arr_80 [i_18] [i_19] [i_18] = (((!(((/* implicit */_Bool) (unsigned short)49702)))) || (((/* implicit */_Bool) ((unsigned char) arr_76 [i_19 + 2] [i_19 - 1] [i_18] [i_18]))));
                    arr_81 [i_20] [i_20] [i_19] [i_18] = ((/* implicit */unsigned short) max((((/* implicit */int) var_9)), (min((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-76)), ((unsigned short)52256)))), (-60312984)))));
                    arr_82 [i_20] [(unsigned short)3] [(unsigned short)3] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (short)6433)) : (((/* implicit */int) (short)6448))));
                }
                arr_83 [i_19 + 2] [i_18] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_6)))), (((((((/* implicit */int) var_8)) % (((/* implicit */int) var_8)))) != (((/* implicit */int) (signed char)78))))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)47374)) < (((/* implicit */int) (!((_Bool)1))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (var_1))))));
}
