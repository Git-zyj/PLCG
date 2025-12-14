/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47763
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
    var_18 = ((/* implicit */unsigned int) 536870911LL);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) min(((!(min(((_Bool)1), ((_Bool)1))))), (((min((-536870909LL), (((/* implicit */long long int) var_8)))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_9)))))));
            arr_5 [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [6LL]);
            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))))));
        }
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_13 [4U] [i_2] [i_2] [4U] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 3])))))) >= ((~(((/* implicit */int) (_Bool)1))))));
                        var_21 = ((/* implicit */long long int) ((unsigned int) (short)12084));
                        var_22 = ((/* implicit */signed char) min((((max((((/* implicit */long long int) var_17)), (-1678740626827369696LL))) | (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((_Bool) max((var_10), (var_10)))))));
                    }
                } 
            } 
            arr_14 [i_0] = ((((((/* implicit */_Bool) (~(var_17)))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))))))))) % (2947645210U));
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_18 [i_0] [i_0] [i_0] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_15 [11U] [i_0] [(short)14]))) != (var_1))))) * (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_0)))) + (((14609806091963076604ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56257)))))) / (-748143663228692949LL)));
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                var_24 = ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 3]));
                var_25 = ((/* implicit */long long int) ((arr_0 [i_0 - 2]) < (var_5)));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_8])) ? (((/* implicit */unsigned long long int) 2096128U)) : (18446744073709551615ULL))))));
                        arr_32 [i_0] [i_6] [i_7 - 1] [i_7] [i_9] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) 29U)));
                        var_28 = var_5;
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1262251038U)) ? (arr_31 [i_0 - 1] [i_0 - 2] [i_0 - 2] [17LL] [i_0 - 1] [(signed char)3]) : (var_9)));
                        arr_33 [i_0] [i_6] [i_7 + 1] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) arr_22 [i_0 - 1] [i_0 - 3]));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_31 [i_0] [1] [i_7 + 1] [i_8] [i_0] [i_10])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_12)) : (var_13))) : (((/* implicit */unsigned long long int) arr_0 [10LL]))));
                        var_31 = ((/* implicit */unsigned int) var_8);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_8] [i_6] [i_10] [i_0 - 1] [i_6] [i_6])) - (((/* implicit */int) arr_27 [17LL] [i_6] [i_7 - 2] [i_0 - 2] [i_10] [i_6]))));
                    }
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        var_33 = (-(arr_9 [i_7 - 3] [i_7 - 3] [i_7] [i_0 - 3]));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */long long int) arr_36 [(unsigned short)17] [i_7 - 3] [i_7 - 2] [i_0 - 3] [i_11])) <= (arr_30 [i_0] [i_6] [i_7] [i_8] [i_11]))))));
                        arr_39 [i_0] [i_6] [i_7] [i_8] [i_11] [i_11] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_12 [7])) ? (((/* implicit */unsigned long long int) var_12)) : (3187484465608505621ULL)))));
                        var_35 = ((/* implicit */short) ((int) arr_34 [i_0 - 2]));
                    }
                    var_36 ^= var_12;
                }
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                {
                    var_37 &= ((307358511071245796LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6ULL)))))));
                    var_38 = ((long long int) arr_36 [12LL] [i_6] [i_0] [i_7 - 3] [i_7 - 1]);
                }
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */long long int) 258048U)) : ((~(-868767577515520495LL)))));
            }
            var_40 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_10 [i_6] [i_0 + 1] [i_6] [i_0 - 2] [i_6])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) 3104118086U))));
            arr_42 [i_0] [i_6] [i_0] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_11 [i_0] [i_6] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) >= (max((var_1), (((/* implicit */long long int) 1190849210U)))))), (min(((_Bool)1), (arr_26 [i_0 - 2] [i_0] [i_0 - 2])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                var_41 = ((/* implicit */signed char) (-(536870911LL)));
                arr_45 [i_0] [i_6] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) arr_36 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2])) : (var_1)));
            }
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
        {
            var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
            var_43 = ((arr_21 [i_0 + 1]) ^ (arr_21 [i_0 + 1]));
            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1975446632)) ? (((/* implicit */unsigned long long int) 1151990331U)) : (18446744073709551599ULL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                arr_51 [i_15] [i_15] = ((/* implicit */short) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                arr_52 [i_15] [9U] [i_0 - 2] [i_0 - 3] = ((/* implicit */unsigned long long int) var_14);
            }
        }
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        arr_55 [i_16] = ((/* implicit */int) (+(var_1)));
        arr_56 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [10U] [i_16] [i_16] [i_16] [i_16] [i_16]))))) ? (8LL) : (((/* implicit */long long int) 4294967295U))));
    }
}
