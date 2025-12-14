/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31062
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_6))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) var_12)) + (var_2))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) (unsigned short)960);
            var_15 = ((/* implicit */long long int) ((((var_3) > (0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) : (((var_7) / (((/* implicit */unsigned long long int) -222239375))))));
        }
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_12))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (var_7) : (var_0)));
                    arr_13 [(unsigned short)8] [i_4] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_4 - 2] [2] [2] [i_4]))));
                }
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_8) - (((long long int) (signed char)11))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (7))) > ((~(2147483647))))))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_12) : (-1761795529)))) ? (((long long int) 33030144)) : (((/* implicit */long long int) var_12))));
                            arr_20 [i_0] [i_2] [5U] [i_3] [i_6 + 1] [i_6] = ((/* implicit */unsigned long long int) -8);
                        }
                    } 
                } 
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), ((unsigned short)48824)));
                var_22 = ((/* implicit */long long int) var_2);
            }
            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    arr_28 [i_0] [i_8] = ((/* implicit */unsigned long long int) var_6);
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((arr_11 [i_9 - 2] [i_9] [(unsigned short)10] [i_9 - 1]) != (((/* implicit */int) arr_17 [i_0] [i_2] [0U] [i_9] [i_9 + 1])))))));
                }
                for (int i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) 2140352877227526754LL))));
                        var_25 = ((/* implicit */int) ((unsigned long long int) var_2));
                    }
                    for (int i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) ((((unsigned int) 0U)) % (((/* implicit */unsigned int) ((int) var_8)))));
                        arr_36 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                        var_27 = 222239375;
                        var_28 |= ((/* implicit */int) ((long long int) -445485473));
                    }
                    for (int i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
                    {
                        arr_39 [i_0] [i_2] [i_8] [(unsigned short)2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        arr_40 [i_2] [10] [i_8] |= ((/* implicit */unsigned int) ((unsigned short) -1761795522));
                        var_29 = ((/* implicit */long long int) var_3);
                    }
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        arr_43 [i_14] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])) : (2ULL))) : (((/* implicit */unsigned long long int) var_8))));
                        var_30 ^= (((-(((/* implicit */int) arr_22 [i_0] [i_2] [i_8] [i_10])))) - (-31));
                    }
                    arr_44 [i_0] [i_0] [i_0] [i_10] [i_2] [i_10 - 1] = ((/* implicit */unsigned int) (-(var_8)));
                }
                var_31 |= ((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [4] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)59863)))))));
                arr_45 [i_0] [i_2] [i_2] [i_8] = ((/* implicit */unsigned short) arr_8 [i_0]);
            }
            arr_46 [i_0] [i_2] = ((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) 2147483647))));
        }
        for (unsigned int i_15 = 1; i_15 < 12; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 14; i_16 += 2) 
            {
                for (signed char i_17 = 1; i_17 < 13; i_17 += 4) 
                {
                    for (signed char i_18 = 3; i_18 < 13; i_18 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_18 [4ULL] [i_17] [i_16 + 1] [i_15] [4ULL])) & (((unsigned long long int) var_0)))) & (((/* implicit */unsigned long long int) -1589376151)))))));
                            arr_58 [i_0] [i_0] [(signed char)10] [i_0] [i_18] = 201355310;
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                for (unsigned int i_20 = 2; i_20 < 15; i_20 += 2) 
                {
                    for (int i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1761795528)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (13934529799430752954ULL)));
                            var_34 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) & (((unsigned int) 1331809679U)))), (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) -222239375)), (1437147180U)))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_22 = 0; i_22 < 13; i_22 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_23 = 0; i_23 < 13; i_23 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) ((int) (signed char)-1));
            arr_72 [i_22] [i_23] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_11)) != (((((/* implicit */_Bool) var_10)) ? (17497067972606893259ULL) : (((/* implicit */unsigned long long int) arr_30 [i_22] [i_23]))))));
        }
        for (int i_24 = 0; i_24 < 13; i_24 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8064))) & (var_10))))));
            arr_76 [i_22] [i_22] = ((/* implicit */unsigned int) 10931512459522434063ULL);
            arr_77 [i_24] [i_22] = ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8069))) : (var_7)));
        }
        for (int i_25 = 0; i_25 < 13; i_25 += 3) 
        {
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32139)))))));
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((arr_48 [i_22]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
            var_39 = ((/* implicit */long long int) var_11);
        }
        arr_80 [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1939982280))));
    }
    for (int i_26 = 0; i_26 < 13; i_26 += 2) /* same iter space */
    {
        arr_84 [i_26] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) var_6))), (((((/* implicit */_Bool) var_3)) ? (arr_62 [i_26] [i_26] [i_26]) : (((/* implicit */unsigned long long int) 1761795526))))));
        var_40 = ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_1)))))) ? (((var_1) / (((/* implicit */unsigned long long int) ((var_2) | (((/* implicit */unsigned int) 2147483645))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_26] [i_26] [i_26] [i_26] [i_26]))));
        arr_85 [i_26] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((signed char) var_10)))))));
        /* LoopNest 2 */
        for (unsigned short i_27 = 0; i_27 < 13; i_27 += 1) 
        {
            for (unsigned long long int i_28 = 2; i_28 < 9; i_28 += 3) 
            {
                {
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) min((min((((/* implicit */unsigned int) (signed char)-99)), (3373918452U))), (((/* implicit */unsigned int) ((var_0) <= (((/* implicit */unsigned long long int) arr_21 [i_28 + 1] [i_27]))))))))));
                    var_42 ^= ((/* implicit */signed char) var_11);
                    var_43 = ((/* implicit */int) var_5);
                }
            } 
        } 
    }
    var_44 = ((/* implicit */int) min((4294967282U), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (1997147484) : (222239375))), (((/* implicit */int) (unsigned short)38676)))))));
}
