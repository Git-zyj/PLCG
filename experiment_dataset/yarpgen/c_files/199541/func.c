/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199541
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
    var_20 = ((/* implicit */_Bool) var_18);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_21 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 1])) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) : (max((min((15U), (((/* implicit */unsigned int) (unsigned short)63099)))), (((/* implicit */unsigned int) (_Bool)0))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (4294967281U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_0])))))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])) >> (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) - (9072)))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) var_17);
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((4294967280U), (((/* implicit */unsigned int) arr_12 [i_1] [i_1 - 2] [i_1 - 2]))))) ? (((unsigned long long int) arr_12 [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_19))));
            var_26 = var_1;
        }
        for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 = ((/* implicit */short) max((arr_12 [i_0] [i_5] [i_0]), (((/* implicit */unsigned short) (unsigned char)44))));
                    var_28 = ((/* implicit */long long int) min((max((min((arr_11 [i_7] [i_6] [i_5] [i_5] [i_0] [i_0]), (var_12))), (min((((/* implicit */int) arr_4 [i_0] [i_0])), (var_1))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34977)) << (((1029890U) - (1029889U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (arr_10 [i_7] [i_6] [i_5 - 2] [i_0])))));
                    var_29 -= ((/* implicit */unsigned char) max((min((13659702404726046133ULL), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_5] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (signed char)-1))));
                    var_30 = ((/* implicit */unsigned short) (signed char)-116);
                }
                var_31 = ((/* implicit */short) 4294967280U);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 4) 
                {
                    arr_30 [i_0] [i_5] [i_6] [i_8 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_5] [i_8 - 1] [i_8 - 3] [i_8 - 1])) ? (((/* implicit */int) var_4)) : (var_19)));
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (849817905) : (arr_0 [i_5 - 1]))))));
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    arr_34 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) arr_17 [i_0] [i_5 - 2] [i_9]);
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_5] [i_5] [i_6] [i_9])) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) arr_12 [i_0] [i_5] [i_9]))))) ? (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_5] [i_5 - 2])) : (arr_25 [i_5 - 1] [i_5 - 1])));
                }
                arr_35 [i_5] = ((/* implicit */int) ((unsigned long long int) arr_33 [i_5] [i_5] [i_5] [i_6]));
            }
            var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)47340)))) | (((((/* implicit */int) var_18)) >> (((/* implicit */int) arr_15 [i_0]))))))) <= (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) -849817905)) : (arr_20 [i_0] [i_5] [i_5 + 1] [i_5])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_10 = 2; i_10 < 7; i_10 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1))))) ? (((((/* implicit */int) (unsigned char)2)) >> (((var_8) - (14026175764515086720ULL))))) : (arr_1 [i_5 - 1] [i_5 - 2])));
                var_36 = ((/* implicit */unsigned char) ((((unsigned long long int) var_8)) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_5]);
                            arr_43 [i_0] [i_5] [i_5] [i_11] [i_12 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) <= (arr_29 [i_0] [i_5] [i_0] [i_11] [i_12 - 2])));
                            arr_44 [i_12] [i_5] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) arr_42 [i_5] [i_12 - 2]);
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_5 + 1] [i_11] [i_11])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (var_3)))) : (((/* implicit */int) arr_12 [i_12 + 2] [i_5 - 1] [i_10]))));
                            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_12]))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */long long int) (-(((-849817903) ^ (((/* implicit */int) var_16))))));
            }
            /* vectorizable */
            for (unsigned int i_13 = 2; i_13 < 7; i_13 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5)))))));
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (var_8) : (12004170694715692339ULL)));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) arr_6 [i_13 + 1] [i_5 + 1]))));
                            arr_51 [i_0] [i_0] [i_0] [i_13 + 2] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5 - 2] [i_5] [i_5])) ? (arr_47 [i_5 - 2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5 - 2] [i_5] [i_5] [i_5 - 2] [i_5 - 1] [i_5])))));
                            arr_52 [i_5] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_5 - 1] [i_14] [i_14] [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)20479)) : (((/* implicit */int) ((signed char) (signed char)-5)))));
                            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_33 [i_0] [i_13 + 1] [i_13 - 1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_5 - 2])))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_16 = 2; i_16 < 7; i_16 += 3) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_0]))) == (arr_42 [i_5] [i_16 + 1])))), (var_15))));
                var_47 = ((/* implicit */unsigned int) min((var_47), (((3991077054U) >> (((var_3) + (6605918304014152678LL)))))));
                arr_55 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((int) ((unsigned char) ((arr_13 [i_5] [i_5] [i_16] [i_5 - 1]) / (2147483647)))));
            }
            var_48 = ((/* implicit */short) var_17);
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                {
                    var_49 = ((/* implicit */unsigned short) 1483587488);
                    var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) max((((unsigned long long int) ((arr_32 [i_0] [i_17]) ? (((/* implicit */int) arr_15 [i_18])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)29553), (((/* implicit */unsigned short) arr_58 [i_0] [i_17] [i_0]))))) - (((int) 2147483647))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_19 = 1; i_19 < 10; i_19 += 1) 
        {
            var_51 = ((/* implicit */unsigned int) ((long long int) arr_8 [i_19 - 1] [i_19 + 1] [i_0]));
            var_52 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (-1483587488)));
        }
    }
    var_53 = ((/* implicit */signed char) var_16);
}
