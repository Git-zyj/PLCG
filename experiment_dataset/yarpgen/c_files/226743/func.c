/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226743
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7)))))));
        var_11 &= ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
            {
                var_12 = ((((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_7 [i_0] [i_1]))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [9LL]))))));
                var_13 |= ((/* implicit */unsigned int) var_6);
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5))))) : (((arr_1 [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */int) var_5);
                        arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((signed char) (-(4539665371653238735ULL))));
                        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_4 - 1] [i_4 - 1] [i_4]))));
                        var_17 |= ((/* implicit */signed char) ((long long int) -2147483624));
                    }
                    for (int i_5 = 3; i_5 < 24; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) (unsigned char)131);
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) var_9))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11527306085341718913ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45958))) : (907108231U)));
                    }
                    for (unsigned int i_6 = 2; i_6 < 23; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) var_9))))));
                        arr_19 [i_0] [i_0] [i_2] [i_1] [12] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_10)))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        arr_22 [i_7] [i_7] [i_2] [i_3] [i_1] = ((/* implicit */short) arr_16 [i_0] [i_1] [i_2] [13ULL] [i_1] [i_1]);
                        var_22 = (+(arr_16 [i_2] [i_3] [i_7] [i_7 - 2] [i_7] [i_7 + 3]));
                        arr_23 [i_0] [i_7] [i_0] [i_0] [i_0] = (+((-2147483647 - 1)));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 24; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_0]))));
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned short) arr_9 [(short)10] [i_3] [i_2] [i_0 + 1] [i_8] [i_2]));
                    }
                    arr_28 [i_1] [i_2] [i_1] [i_0 - 2] [i_0] = ((/* implicit */short) var_0);
                }
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        var_25 -= ((/* implicit */unsigned short) var_9);
                        var_26 &= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-90)) - (((/* implicit */int) var_9)))) - (((/* implicit */int) var_8))));
                        var_27 -= ((/* implicit */unsigned int) var_0);
                        var_28 = ((/* implicit */unsigned int) var_0);
                    }
                    var_29 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0 - 2]);
                    var_30 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_9]);
                    arr_35 [i_0 - 2] [i_1] [24U] [i_0 - 2] = ((/* implicit */unsigned int) arr_7 [6LL] [6LL]);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 2; i_11 < 24; i_11 += 3) 
                {
                    var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-(var_7))) : (arr_27 [i_0] [i_1] [i_1] [i_11 - 2] [i_11] [i_11 + 1])));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_11 - 2] [i_11] [i_11] [i_11] [i_11 + 1] [i_11 + 1])) ? (1863412580120121790LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_11] [21ULL] [i_11] [i_11] [i_11 - 1] [i_11 + 1]))))))));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)134)))))));
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)27)))))));
                    }
                    var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 5033696840421998400ULL)))));
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_11 - 2] [i_1] [i_0 - 1] [i_0 - 1])))))));
                }
                var_37 = ((/* implicit */int) (+(arr_27 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1])));
            }
            for (long long int i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
            {
                var_38 = ((long long int) -2147483643);
                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(2147483623)))) : (arr_40 [i_0] [i_0 + 1])))))));
                var_40 = ((/* implicit */unsigned char) var_3);
            }
            for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 2) 
            {
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_2 [i_0 - 1]))) == (arr_6 [i_14] [i_1])));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    for (long long int i_16 = 2; i_16 < 23; i_16 += 2) 
                    {
                        {
                            var_42 = max((((/* implicit */unsigned long long int) min(((unsigned short)43623), (((/* implicit */unsigned short) arr_47 [i_16] [i_16 + 2] [i_16] [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16 - 1]))))), ((+(arr_7 [i_0 - 2] [i_0 + 1]))));
                            var_43 *= ((/* implicit */unsigned long long int) (~(-2060507441)));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) -108139816)) ? (((/* implicit */unsigned int) 2060507442)) : (3387859057U))))));
                            var_45 *= ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-2147483643))))));
            }
            for (unsigned long long int i_17 = 2; i_17 < 22; i_17 += 4) 
            {
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) > (arr_43 [i_0] [i_0 + 1] [i_0 - 2])))))))));
                var_48 = ((/* implicit */unsigned char) (((_Bool)1) ? (3387859050U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60989)))));
                arr_53 [i_0] = (_Bool)1;
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                var_49 = ((/* implicit */signed char) min((max((var_7), (arr_10 [i_0] [i_0 + 1]))), (((arr_10 [i_0 - 2] [i_0 - 1]) - (((/* implicit */unsigned long long int) 1939518765))))));
                var_50 = ((/* implicit */unsigned short) min((var_50), ((unsigned short)58100)));
                var_51 = arr_26 [i_18] [(short)6] [i_18] [i_1] [i_1] [i_0 - 2] [i_0 - 2];
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_4)), (arr_7 [i_0 - 2] [i_0 - 1]))), (((((/* implicit */unsigned long long int) max((5644783551857505635LL), (((/* implicit */long long int) (unsigned short)6146))))) | (arr_41 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0]))))))));
            }
        }
        for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 25; i_21 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) /* same iter space */
                        {
                            var_53 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) 1854015065)), (3669013035U)));
                            var_54 = ((/* implicit */long long int) arr_52 [i_20] [i_19] [i_20]);
                            var_55 = ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (15599573021919835604ULL))) & (((/* implicit */unsigned long long int) arr_16 [i_0 - 2] [i_20 + 1] [i_22] [i_0 - 2] [i_22] [(signed char)1])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_32 [i_0] [i_0] [i_20] [i_21] [i_0] [i_19]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483621)) ? (((/* implicit */int) arr_29 [i_0] [i_0] [17U] [i_21] [i_22])) : (((/* implicit */int) arr_54 [i_0] [i_0] [i_0]))))))))));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
                        {
                            var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) (~(((var_7) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_7))))))))));
                            var_57 = min(((((-(var_0))) ^ (((unsigned long long int) 2147483643)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_9))))));
                        }
                        arr_69 [13ULL] [i_20] [i_19] [i_21] = ((/* implicit */signed char) ((int) ((-6737493950808936442LL) & (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                    }
                } 
            } 
            var_58 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 907108261U))))));
            /* LoopNest 2 */
            for (unsigned int i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                for (signed char i_25 = 4; i_25 < 24; i_25 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_26 = 2; i_26 < 21; i_26 += 1) 
                        {
                            arr_77 [i_0] [i_25 - 1] |= max(((~(((((/* implicit */long long int) 6U)) & (1LL))))), (-25LL));
                            var_59 = ((/* implicit */unsigned short) ((min((arr_57 [i_0 - 1] [i_25 - 4] [i_25 - 2]), (((/* implicit */unsigned long long int) (short)-8452)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
                        }
                        var_60 = ((/* implicit */unsigned long long int) min((var_60), (((((/* implicit */_Bool) ((arr_7 [i_0 - 2] [i_0 - 1]) << (((-4LL) + (56LL)))))) ? (min((arr_7 [20U] [8U]), (arr_7 [i_0 - 2] [i_24]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)7))))))));
                    }
                } 
            } 
        }
        var_61 *= ((/* implicit */unsigned int) var_7);
    }
    var_62 = ((/* implicit */unsigned long long int) var_6);
    var_63 = ((/* implicit */unsigned short) var_8);
}
