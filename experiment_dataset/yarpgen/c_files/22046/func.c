/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22046
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
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_13 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_3] [i_2] [i_0])) != (((/* implicit */int) (unsigned char)246))));
                        arr_13 [i_3] [i_2] [i_1 - 3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (1451614948)))) && (((/* implicit */_Bool) ((arr_3 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12636))) : (var_10))))));
                    }
                    arr_14 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12640)) ? (((/* implicit */int) min(((signed char)-107), (arr_5 [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)12634)) : (((/* implicit */int) (short)12641))))))), ((+(arr_0 [i_1 - 1] [i_2])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_4])) ^ (((/* implicit */int) ((short) min((((/* implicit */long long int) (short)-12639)), (var_8)))))));
            arr_19 [i_4] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned char)86))));
            arr_20 [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) var_6);
            var_15 -= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_18 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) / (arr_1 [i_4] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)12617)) && (((/* implicit */_Bool) (short)12639))))) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_4]))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) var_1))));
                var_17 = ((/* implicit */unsigned int) ((390635503U) != (((/* implicit */unsigned int) arr_8 [i_6] [i_5] [i_0]))));
                var_18 = (unsigned short)43423;
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 844829148U)) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (arr_21 [i_5]))))));
                var_20 = ((/* implicit */unsigned long long int) (+((+(var_8)))));
            }
            var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12653)) ? (((/* implicit */int) (unsigned short)64512)) : (((/* implicit */int) (unsigned short)64493))))) ? (((((/* implicit */int) (unsigned char)45)) >> (((var_8) - (2623389574712155149LL))))) : (((((-1) + (2147483647))) >> (8ULL)))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18344026129309795091ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) : (arr_24 [i_5] [i_0] [i_0])));
        }
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_31 [i_8] = ((/* implicit */_Bool) var_1);
            /* LoopSeq 3 */
            for (short i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                var_23 = ((/* implicit */int) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (14425381046652342064ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_9))) > (((((/* implicit */_Bool) (unsigned short)1247)) ? (21) : (((/* implicit */int) (unsigned char)195)))))) ? ((~(-10))) : (((/* implicit */int) ((((int) arr_10 [i_9 - 3] [i_8] [i_0] [i_8] [i_8] [i_0])) > (((/* implicit */int) (!(((/* implicit */_Bool) 604461941)))))))))))));
                arr_34 [i_0] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ^ (4U)))) ? (604461920) : ((~(((((/* implicit */_Bool) 14425381046652342070ULL)) ? (var_11) : (2147483642)))))));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        {
                            var_25 = (+(604461954));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((arr_23 [i_8] [i_10]) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((-243316084) + (243316093)))))) : (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) (~(var_10)));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1)))))))) == (((/* implicit */int) var_3))));
                var_29 = ((/* implicit */_Bool) ((long long int) min((arr_18 [i_13]), ((!(((/* implicit */_Bool) (unsigned char)67)))))));
                var_30 &= ((/* implicit */unsigned char) (unsigned short)6329);
            }
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 3) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_50 [i_16] = ((/* implicit */_Bool) (+(((((min((((/* implicit */int) arr_17 [i_14])), (var_7))) + (2147483647))) >> (((((((/* implicit */int) var_3)) ^ (arr_21 [i_16]))) + (301220348)))))));
                            arr_51 [i_8] [i_14] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12617))) : (var_8)));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_17 = 1; i_17 < 12; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (short i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (10864259918700135324ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 575334852396580864ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (2305843009213693952LL))))))));
                            arr_60 [i_19] |= ((/* implicit */int) ((_Bool) ((signed char) (short)-16443)));
                            arr_61 [i_18] = ((/* implicit */short) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_7)) : (var_10))));
                        }
                    } 
                } 
            } 
            arr_62 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) var_8);
        }
        for (signed char i_20 = 0; i_20 < 13; i_20 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_21 = 2; i_21 < 9; i_21 += 4) 
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_33 [i_21 + 4] [i_21 - 1] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0])) ? (-1092387380) : (((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (14425381046652342057ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_20])) ? (((/* implicit */long long int) -1729440219)) : (15LL)))))))));
                var_33 = (+((-(var_7))));
            }
            arr_67 [i_0] [2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_63 [i_0] [i_20] [i_20]), (((/* implicit */short) var_0))))) && (((/* implicit */_Bool) arr_10 [i_20] [i_20] [i_0] [i_0] [i_20] [i_0]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)3490))))), (((unsigned long long int) arr_41 [i_0] [i_20]))))));
        }
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-12636)))))));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned short) arr_70 [(signed char)8]))) ? (arr_70 [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) (short)12644))))))))));
    }
}
