/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23154
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
    for (short i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max(((+(var_11))), (((((/* implicit */_Bool) max((-4173478088490677824LL), (((/* implicit */long long int) var_3))))) ? (min((var_0), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0 + 2]))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_5 [i_0 - 4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [0ULL])), (var_5)))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12402))) | (var_0)))))) * (((/* implicit */int) ((signed char) arr_2 [i_0 + 3] [i_0 + 2] [i_1])))));
            var_14 = ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)5] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1] [i_3] [i_3] [i_0] [i_3])) ? (((/* implicit */int) arr_0 [i_2] [i_1])) : (((/* implicit */int) arr_0 [i_2] [i_3]))))) : (((((/* implicit */_Bool) var_10)) ? (min((var_0), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36790)))))))));
                        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((unsigned int) var_7))))), (((((/* implicit */_Bool) arr_9 [i_0 - 4] [i_0 + 2] [i_1] [i_0 + 1] [(unsigned short)6] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) : (var_11))), (max((var_11), (((/* implicit */long long int) var_1)))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2] [i_4]))))))))));
                            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)36802))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            var_19 -= ((/* implicit */short) (((+(((/* implicit */int) arr_1 [i_2])))) | (((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)4] [i_0])) ? (((/* implicit */int) arr_3 [i_5] [i_1])) : (((/* implicit */int) var_9))))));
                            var_20 += ((/* implicit */unsigned short) var_7);
                        }
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_14 [i_0 - 3] [i_0 + 1] [i_0 + 2]) == (((/* implicit */int) arr_12 [i_1]))))), (((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_14 [i_0 - 3] [i_0 + 1] [i_0 + 2]) : (((/* implicit */int) var_1))))));
                            var_22 += ((/* implicit */short) ((((_Bool) var_3)) && (arr_19 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 4] [i_0] [i_0 + 1])));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_2] [i_1])), (min((((((/* implicit */_Bool) 6468521388812200050LL)) ? (10730138755430239865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)243))))), (6024632903879260929ULL)))));
                            var_23 = ((/* implicit */signed char) var_10);
                            var_24 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_1] [i_2] [(unsigned char)0] [i_3] [i_7]))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (8802609726381932549ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))));
                            var_27 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_16 [i_1] [i_1]))))));
                        }
                    }
                } 
            } 
            var_28 |= var_3;
        }
        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            arr_28 [i_0] [i_0] [(unsigned short)9] = ((/* implicit */long long int) arr_11 [i_0] [i_8] [i_0] [i_8] [i_8 - 2] [i_8]);
            arr_29 [i_0] [i_0] [(unsigned char)9] = ((/* implicit */unsigned long long int) -6115397110015679080LL);
            arr_30 [3LL] [i_8 - 1] = ((/* implicit */unsigned int) ((unsigned char) var_6));
            var_29 += ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)122)), (8802609726381932558ULL))))))), (arr_6 [i_8 - 2] [i_8])));
            arr_31 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned short) var_6)));
        }
    }
    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_34 [(_Bool)1])) : (arr_37 [5U] [i_10] [i_10])))))));
            arr_39 [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_34 [9])) ? (arr_37 [i_9] [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9]))))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10] [i_9] [i_9])) ? (((/* implicit */unsigned int) var_12)) : (arr_34 [0LL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6032782848695996493LL))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_36 [i_9])))))))));
            arr_40 [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) arr_32 [i_10]);
        }
        for (long long int i_11 = 4; i_11 < 10; i_11 += 1) 
        {
            arr_45 [i_11] = (!(((/* implicit */_Bool) (+(7716605318279311750ULL)))));
            /* LoopNest 3 */
            for (signed char i_12 = 2; i_12 < 9; i_12 += 4) 
            {
                for (int i_13 = 2; i_13 < 8; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) >> (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (1369349047494982452ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)15))))) : (10730138755430239865ULL)))));
                            arr_56 [i_9] [i_11 - 1] [i_12] [i_11] [i_13] [i_14] = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_31 = ((((/* implicit */_Bool) var_10)) ? (arr_37 [i_9] [4LL] [i_15]) : (arr_37 [i_15] [i_9] [i_9]));
            var_32 = ((/* implicit */int) max((var_32), (((int) var_9))));
        }
        arr_60 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_9), (var_9))))));
    }
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_16] [i_16] [(signed char)2] [i_16])) ? (arr_44 [i_16]) : (max((((/* implicit */long long int) var_3)), (var_11)))))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_37 [i_16] [i_16] [i_16]))) : (max((min((arr_55 [i_16] [(signed char)5] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned long long int) arr_36 [i_16])))), (((/* implicit */unsigned long long int) arr_54 [i_16] [(unsigned char)2] [i_16] [i_16] [(unsigned char)2])))))))));
        arr_64 [i_16] [i_16] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)27579))))) * (((unsigned int) arr_58 [i_16] [i_16]))));
    }
    var_34 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((var_4) - (8507683292678401334ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        for (unsigned char i_18 = 3; i_18 < 21; i_18 += 1) 
        {
            {
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_8))))) ? ((+(((((/* implicit */_Bool) arr_67 [i_17] [8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((((/* implicit */int) (!(arr_65 [i_17] [i_18 - 2])))) <= (((/* implicit */int) min((((/* implicit */short) var_3)), (var_1)))))))));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((var_11), (((/* implicit */long long int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((17077395026214569163ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))) : ((-(((/* implicit */int) arr_66 [i_17]))))));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    for (unsigned short i_20 = 3; i_20 < 21; i_20 += 3) 
                    {
                        {
                            var_37 = max((((/* implicit */unsigned long long int) (signed char)-115)), ((+(var_4))));
                            /* LoopSeq 3 */
                            for (long long int i_21 = 2; i_21 < 19; i_21 += 3) /* same iter space */
                            {
                                var_38 = ((/* implicit */short) (-(max((((/* implicit */int) min((((/* implicit */short) arr_69 [i_18])), (var_1)))), ((-(((/* implicit */int) var_2))))))));
                                var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                            }
                            for (long long int i_22 = 2; i_22 < 19; i_22 += 3) /* same iter space */
                            {
                                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_76 [i_17] [i_18] [i_18] [i_20] [i_22])) ? (var_12) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_73 [i_18 + 2] [i_18] [i_20 + 1] [i_20 - 2] [i_20] [i_22 + 4])), (arr_74 [i_18 - 2] [i_18 - 2] [i_20 - 2] [i_22] [i_22 - 1]))))));
                                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (max((((/* implicit */int) arr_65 [i_19] [i_19])), (var_12))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) && (var_3)));
                                arr_81 [i_18] [i_22] = ((/* implicit */int) (unsigned short)22009);
                            }
                            for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
                            {
                                var_42 = ((/* implicit */unsigned short) var_5);
                                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_70 [i_20 + 1] [i_20 - 1] [i_20 + 1]), (((/* implicit */unsigned char) var_3))))) << (((((((/* implicit */_Bool) arr_70 [i_20 + 1] [i_20 - 3] [i_20 + 1])) ? (((/* implicit */int) arr_70 [i_20 - 3] [i_20 + 1] [i_20 - 1])) : (((/* implicit */int) arr_70 [i_20 - 1] [i_20 + 1] [i_20 - 2])))) - (111))))))));
                            }
                            arr_85 [i_18] [i_18] [i_19] [i_18] [i_18] [i_19] = ((/* implicit */long long int) var_10);
                            var_44 = ((min((((/* implicit */int) arr_71 [i_17] [i_20] [i_18])), (((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_75 [i_17])))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7716605318279311750ULL)) ? (7202388306077196629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58930)))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) arr_70 [5ULL] [5ULL] [5ULL])) : (var_12))))));
                            arr_86 [(short)16] [i_18] [(short)16] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_67 [i_20 - 1] [i_18 + 2])), (var_2))), (((/* implicit */unsigned short) max((arr_67 [i_20 - 1] [i_18 + 2]), (arr_67 [i_20 - 1] [i_18 - 2]))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_66 [i_17])) : (((((((/* implicit */_Bool) arr_78 [i_18] [i_17] [i_18] [i_18] [i_18 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) - (((((/* implicit */_Bool) arr_67 [i_18] [(short)20])) ? (((/* implicit */int) arr_80 [3ULL])) : (((/* implicit */int) arr_67 [i_17] [i_18]))))))));
            }
        } 
    } 
}
