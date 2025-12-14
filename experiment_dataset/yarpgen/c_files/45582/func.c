/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45582
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [(unsigned char)15] [(short)4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_10 += max((((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_7) : (12980057510447134995ULL))) * (max((var_0), (((/* implicit */unsigned long long int) 3706895820U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [(signed char)4] [i_3])) ? (((/* implicit */long long int) var_5)) : (arr_2 [16U])))) ? (((((/* implicit */_Bool) 16410986128281100652ULL)) ? (2035757945428450950ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_1 [(short)2])))))));
                        arr_13 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_10 [i_1 - 1] [i_1] [i_2] [i_1 + 1] [i_1 + 1]) < (arr_10 [i_1 - 1] [(short)17] [i_2] [i_1] [i_1 - 1]))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4] = (i_4 % 2 == zero) ? (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -3754240879515345411LL)))) / (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_4] [i_4]) : (16410986128281100652ULL))))), ((+(((var_0) >> (((arr_10 [i_4] [(short)2] [i_4] [i_4] [22U]) - (507536765U)))))))))) : (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -3754240879515345411LL)))) / (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_4] [i_4]) : (16410986128281100652ULL))))), ((+(((var_0) >> (((((arr_10 [i_4] [(short)2] [i_4] [i_4] [22U]) - (507536765U))) - (98294712U))))))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_12 [i_4] [i_4])))) & (((/* implicit */int) arr_14 [i_4]))));
            arr_22 [i_4] [i_4] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4] [i_5])) ? (-5697716382514395691LL) : (((/* implicit */long long int) var_2)))) < (((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_4] [(short)11] [i_4]), (((/* implicit */short) arr_1 [i_4])))))))) ? (max((max((((/* implicit */unsigned long long int) var_4)), (var_0))), (((/* implicit */unsigned long long int) var_6)))) : (((((((/* implicit */_Bool) -8528679454833235368LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_4])))))))));
        }
    }
    for (long long int i_6 = 3; i_6 < 23; i_6 += 4) 
    {
        arr_27 [i_6] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1047182679)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111)))))) ? (((/* implicit */unsigned long long int) var_2)) : (((var_9) / (((/* implicit */unsigned long long int) 3754240879515345388LL)))))));
        arr_28 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-71))) ? ((~(((unsigned long long int) 9005625440942013456ULL)))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_23 [i_6])))), (((/* implicit */int) arr_26 [3] [3])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_29 [i_6 - 3] [i_7])), (((var_3) / (((/* implicit */unsigned long long int) arr_34 [i_6] [i_7] [i_6]))))))) ? (max((((/* implicit */unsigned long long int) (short)8190)), (arr_32 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 1]))) : (max((((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) : (var_7))), (((/* implicit */unsigned long long int) var_4))))));
                arr_35 [i_6] [3LL] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) 27280941U))))), (min((((/* implicit */short) (unsigned char)220)), ((short)-14986))))));
            }
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
            {
                arr_39 [i_6] [i_6] [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2035757945428450964ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_30 [i_6] [i_9])))))) : (min((((/* implicit */unsigned long long int) arr_26 [i_7] [i_6])), (var_1))))), (max((arr_32 [i_6 - 1] [i_9] [i_9] [i_9]), (arr_32 [i_6 - 2] [i_7] [i_6 - 2] [i_7])))));
                arr_40 [i_6] [i_7] [i_6] = ((/* implicit */long long int) (((-((-(arr_29 [20LL] [i_6 - 1]))))) << (((((((/* implicit */_Bool) min((arr_29 [(unsigned char)18] [i_7]), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8190))) : (max((((/* implicit */long long int) var_5)), (-3754240879515345423LL))))) - (1806724460LL)))));
                var_12 = ((/* implicit */signed char) min((((/* implicit */long long int) ((_Bool) arr_31 [20U] [i_7] [20U] [i_6]))), (-5697716382514395688LL)));
            }
            arr_41 [i_6] [i_6] [i_6] = ((/* implicit */int) arr_32 [i_6] [i_6] [i_7] [i_7]);
            arr_42 [i_6] [i_6] = ((/* implicit */long long int) var_0);
        }
        for (signed char i_10 = 2; i_10 < 21; i_10 += 4) 
        {
            var_13 ^= ((/* implicit */long long int) (+(min((max((((/* implicit */unsigned long long int) var_6)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_37 [i_10] [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) var_2)))))))));
            arr_45 [i_6] [i_6 - 3] [i_6] = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5697716382514395690LL)) ? (arr_31 [(unsigned char)15] [4ULL] [i_6 - 3] [(unsigned char)15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_6]))))))));
            arr_46 [i_6] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_25 [i_6])))), (((int) max((arr_43 [i_6] [i_6]), (((/* implicit */int) arr_33 [i_10])))))));
            var_14 = ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_10 + 2])), (var_2)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6])))));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 22; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        {
                            arr_57 [i_6] [i_13] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [(unsigned short)7])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) -1047182679)) ? (arr_55 [i_12] [i_6] [i_6] [i_12] [i_13] [i_11] [i_13]) : (var_7))) : (((((/* implicit */_Bool) arr_51 [i_6] [i_10 - 2] [i_6] [i_11] [i_12] [7ULL])) ? (((/* implicit */unsigned long long int) -3754240879515345399LL)) : (var_0))))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_2))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_52 [i_10] [(short)10] [(short)10])) ? (arr_52 [i_10] [i_10 + 4] [i_11]) : (arr_52 [i_10] [i_10] [i_6 - 3]))) <= (((/* implicit */int) ((unsigned char) arr_52 [i_10] [i_10 - 1] [i_10])))));
                arr_58 [i_6 + 1] [i_10] [i_10] [16U] |= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) -3948860270904813188LL)), (arr_38 [i_10] [i_10] [i_10 + 4] [i_10]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_56 [i_6 - 3] [i_10] [i_10] [i_11] [i_11])) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10]))) >= (var_3)))))))));
            }
        }
        /* vectorizable */
        for (short i_14 = 3; i_14 < 23; i_14 += 3) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_6])) ? (arr_36 [i_6]) : (((/* implicit */int) arr_26 [i_14 + 1] [(_Bool)1]))));
            arr_61 [i_6] [i_14] [i_14] = ((/* implicit */unsigned char) ((arr_29 [i_6 - 2] [i_6 - 2]) << (((var_5) - (1806724463)))));
            var_18 = ((/* implicit */unsigned char) var_6);
            var_19 = ((/* implicit */unsigned int) arr_55 [i_14] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6 - 3] [i_6 + 2] [i_14 + 2]);
            arr_62 [(unsigned short)17] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_55 [4ULL] [4ULL] [i_6] [23U] [23U] [(unsigned char)22] [i_14]) << (((var_1) - (17909277991750537565ULL)))))) ? (var_3) : (((/* implicit */unsigned long long int) (~(var_5))))));
        }
        /* LoopSeq 2 */
        for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_8))));
            arr_65 [i_6] [i_15] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)227))))), (((((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6]))))) ? (((/* implicit */long long int) arr_52 [i_6] [i_15] [i_15])) : ((~(-3754240879515345396LL)))))));
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned int i_17 = 1; i_17 < 23; i_17 += 1) 
                {
                    {
                        arr_71 [(unsigned short)20] [i_15] [i_16] [i_16] [i_6] [7U] = ((/* implicit */_Bool) ((unsigned long long int) var_7));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((+(min((var_3), (((/* implicit */unsigned long long int) -1899174561)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            arr_74 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_25 [i_6])), (var_5)))) : (((((/* implicit */_Bool) arr_25 [i_6])) ? (var_1) : (((/* implicit */unsigned long long int) arr_34 [i_6 - 2] [i_6 - 2] [i_6]))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)17)) ? (var_5) : (((/* implicit */int) (short)24637)))), ((+(((/* implicit */int) (unsigned char)229))))))) : (var_1)));
            var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (arr_53 [i_6] [i_18] [i_6 - 2] [i_6] [i_6 - 2])))), (((((/* implicit */_Bool) arr_53 [i_6] [i_6] [i_6 - 3] [i_6] [i_6])) ? (var_9) : (((/* implicit */unsigned long long int) arr_53 [i_18] [i_18] [i_6 + 1] [i_6] [i_18])))));
            arr_75 [i_6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_25 [i_6])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6])))))));
            arr_76 [i_6] [i_6] = ((/* implicit */short) -3754240879515345381LL);
            arr_77 [i_6] = ((/* implicit */unsigned short) arr_72 [(_Bool)1] [i_6] [i_18]);
        }
    }
    var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)32)), (var_9)));
    var_24 = ((/* implicit */long long int) var_1);
}
