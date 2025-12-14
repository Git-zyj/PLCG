/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194555
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
    var_12 += ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_6));
    var_13 = ((/* implicit */unsigned long long int) (-((+((+(var_0)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))), (min(((-(arr_0 [i_0] [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)23]))) / (arr_0 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) min((arr_2 [i_0]), (((/* implicit */unsigned int) var_1))));
            var_15 = ((/* implicit */short) arr_0 [(unsigned char)20] [(unsigned char)20]);
            var_16 = ((/* implicit */unsigned char) var_11);
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) ((_Bool) var_1));
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) (-(var_0)));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        arr_14 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((var_6) > (20744616U))))));
                        arr_15 [i_3] = ((/* implicit */unsigned char) min((((unsigned long long int) arr_13 [i_3])), (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_2] [i_2] [i_2]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_19 [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) ((unsigned char) var_2))))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) arr_11 [i_0] [i_2] [i_5] [15LL]);
                        var_19 = ((/* implicit */int) var_6);
                        var_20 = ((/* implicit */int) (((+(arr_11 [i_0] [i_0] [i_6] [i_7 + 1]))) - (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))), (arr_11 [i_0] [i_0] [9U] [i_0])))));
                        var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        var_22 -= var_2;
                        arr_29 [i_0] [i_0] [(signed char)24] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (~(arr_16 [i_0] [18U] [(_Bool)1])));
                    }
                    arr_30 [i_6] [i_5] [i_5] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)148)) / (var_11)));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_6]), (((/* implicit */unsigned int) ((-360179873) * (((/* implicit */int) (_Bool)1)))))))) ? (arr_2 [i_2]) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (1401654724U)))));
                }
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) var_11)) < (((arr_24 [i_9] [i_2] [i_9]) ? (var_8) : (var_8))))) ? (((/* implicit */int) min((arr_31 [i_9] [1] [i_2]), (arr_31 [i_0] [i_5] [i_9])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_9])) || (arr_24 [i_9] [i_0] [i_9])))))))))));
                    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_5 + 1] [i_5]))));
                    var_26 = ((/* implicit */short) var_8);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        arr_37 [i_0] [i_0] [i_5] = ((/* implicit */int) var_1);
                        arr_38 [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_9] [i_10] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 2U)) ? (var_3) : (var_3))));
                        var_27 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [(_Bool)1] [i_10])) || (arr_7 [(_Bool)1] [i_0]))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 &= arr_0 [i_0] [i_2];
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5197833986927933018LL)) ? (-5197833986927933019LL) : (-5197833986927933018LL)))) ? (-574587414) : (-328801138)));
                        var_31 = ((/* implicit */unsigned char) var_9);
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 24; i_12 += 1) 
                    {
                        var_32 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_36 [i_9] [i_9]))));
                        var_34 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_5 + 1])))) ? (((var_0) * (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    }
                }
                arr_45 [i_0] [22LL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 107684547)) : (((min((3870446326U), (((/* implicit */unsigned int) var_10)))) | (((((/* implicit */_Bool) (short)-670)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))))))));
            }
        }
        arr_46 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32744)) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [(short)1] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
    {
        arr_49 [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_13] [i_13])) << (((((/* implicit */int) arr_48 [i_13])) - (103)))));
        var_35 = ((/* implicit */int) var_4);
    }
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_14] [i_14] [i_15] [i_16])) ? (var_11) : (((/* implicit */int) arr_57 [(unsigned char)20] [i_16] [i_16] [i_15]))))), (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_14] [i_15] [i_15] [i_16])))))));
                    var_37 = ((/* implicit */int) var_0);
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        var_38 = var_4;
                        var_39 += ((/* implicit */unsigned char) var_9);
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) || (((/* implicit */_Bool) 2U))));
                    }
                    for (unsigned int i_18 = 2; i_18 < 21; i_18 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_19 = 2; i_19 < 22; i_19 += 2) 
                        {
                            var_41 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_16] [i_18] [i_19 - 1]))))), (min((((/* implicit */unsigned int) arr_21 [(short)10] [i_14] [i_16] [i_18 + 1] [i_19 + 1])), (var_6)))));
                            arr_69 [i_19 - 1] [i_15] [i_18] [i_15] [i_14] = ((/* implicit */short) arr_18 [i_18]);
                        }
                        var_42 = ((/* implicit */unsigned int) min(((short)-32767), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 4274222680U)) ? (((/* implicit */unsigned int) arr_63 [i_14] [i_14])) : (var_7)))))));
                        arr_70 [i_18] [i_18] [i_18] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) & (arr_43 [i_14] [i_18 - 1] [i_14] [i_18] [i_18 + 4] [(unsigned short)0] [(_Bool)1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_14] [i_14] [i_14])))));
                        arr_71 [i_14] [i_14] [(signed char)19] [i_18 - 1] [i_18] [i_15] = ((/* implicit */_Bool) var_8);
                        var_43 *= ((/* implicit */_Bool) var_3);
                    }
                    var_44 *= ((/* implicit */unsigned long long int) var_8);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */_Bool) arr_28 [i_14] [i_15] [(_Bool)0] [i_16] [i_20]);
                        arr_75 [i_20] [i_15] [i_20] = ((/* implicit */_Bool) var_7);
                        arr_76 [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_34 [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_58 [i_15] [i_16] [i_15] [i_14]))));
                        var_46 = ((/* implicit */int) ((unsigned long long int) arr_20 [i_16] [i_20]));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */short) min((arr_72 [i_16] [i_14]), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))) : (arr_21 [i_14] [i_21] [i_15] [i_21] [i_14]))))));
                        arr_79 [i_21] [i_16] [2LL] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((5317795612642410128ULL) > (((/* implicit */unsigned long long int) -232741123)))))) : (min((((/* implicit */unsigned int) -1430186466)), ((~(var_0)))))));
                        var_48 = ((/* implicit */signed char) arr_36 [i_16] [i_21]);
                        arr_80 [i_21] [(_Bool)1] [i_15] [i_21] = ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_10)) - (28905))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        arr_84 [i_14] [i_22] [i_14] [i_22] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                        var_49 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) / (17U)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))));
                        arr_85 [i_14] [(unsigned char)3] [i_16] [i_22] [i_22] [12] = ((/* implicit */signed char) var_9);
                    }
                }
            } 
        } 
        var_50 *= ((/* implicit */unsigned short) var_6);
        /* LoopSeq 1 */
        for (unsigned short i_23 = 0; i_23 < 25; i_23 += 2) 
        {
            var_51 *= ((/* implicit */long long int) arr_7 [i_14] [i_23]);
            arr_88 [i_14] [i_23] = ((/* implicit */unsigned short) arr_62 [i_14] [i_23]);
            arr_89 [i_14] [i_14] [i_23] &= ((/* implicit */long long int) arr_32 [i_23] [20LL] [i_23]);
            var_52 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_3)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) -995321654))))) ? (((((/* implicit */unsigned long long int) var_2)) + (arr_43 [i_23] [(_Bool)1] [i_14] [i_14] [(short)20] [i_14] [i_14]))) : (((/* implicit */unsigned long long int) var_0))))));
        }
    }
    var_53 = max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)253)) > ((-(1521368339)))))), (((((/* implicit */_Bool) var_6)) ? ((+(var_6))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6013))))))));
}
