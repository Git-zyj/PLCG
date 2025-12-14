/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248600
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
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_14)))))) != (var_9))) ? (((/* implicit */long long int) max(((+(var_15))), (((/* implicit */int) max((var_18), ((_Bool)1))))))) : (((var_12) >> (((var_5) + (5625977303978052271LL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 1])))))));
            /* LoopSeq 2 */
            for (int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                var_22 -= ((/* implicit */long long int) ((arr_6 [i_0]) >= (((((/* implicit */_Bool) var_19)) ? (arr_6 [i_0]) : (var_9)))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_3 [i_0]) > (((/* implicit */long long int) 1023658914))))) - (((/* implicit */int) arr_7 [i_0 - 1] [i_2 - 4] [i_0]))));
                var_24 += ((/* implicit */_Bool) ((2179779761U) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))));
            }
            for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(var_2)));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_19 [i_5] [i_3] [i_0] [i_0] [i_1] [i_0] = var_9;
                            arr_20 [i_5] [i_0] [i_3 - 2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) 1700788535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_1] [i_3] [i_0 + 1] [i_5]))) : (var_12)))));
                            var_25 = ((/* implicit */int) ((arr_4 [i_3] [i_3 - 1] [i_3 + 1]) != (((long long int) 2506559251308763418LL))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_6 = 4; i_6 < 9; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_13 [i_6]))));
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) var_18))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_10 = 3; i_10 < 11; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) arr_5 [i_0]);
                        arr_35 [i_0] [i_0] [i_0] [i_11] [i_0] = ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_14 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]))) & ((~(arr_14 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                    }
                } 
            } 
        }
        for (long long int i_12 = 2; i_12 < 10; i_12 += 4) 
        {
            var_29 = arr_32 [i_0];
            /* LoopSeq 1 */
            for (int i_13 = 2; i_13 < 9; i_13 += 4) 
            {
                var_30 = ((((((((/* implicit */_Bool) arr_17 [i_0] [i_13 + 1] [i_0 - 1] [i_0 - 1] [i_0])) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */unsigned int) var_15)) : (4063232U)))))) + (9223372036854775807LL))) << (((/* implicit */int) arr_18 [i_13] [i_13] [i_0] [i_0] [i_0 - 1])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
                {
                    var_31 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_33 [i_0] [i_0] [i_13 - 1] [i_14]) >> (((((/* implicit */int) (unsigned short)46621)) - (46600)))))) * (arr_15 [i_0] [i_12])))) : (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((arr_33 [i_0] [i_0] [i_13 - 1] [i_14]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)46621)) - (46600)))))) * (arr_15 [i_0] [i_12]))));
                    var_32 -= ((/* implicit */unsigned int) arr_15 [i_14] [i_13]);
                    var_33 = ((/* implicit */unsigned char) ((-1LL) == (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0 + 1])))));
                }
                for (int i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_38 [i_13 - 2] [i_13] [i_0 - 1] [i_15]))) ? (arr_38 [i_13 + 2] [i_15] [i_0 + 1] [i_15]) : (((arr_38 [i_13 + 2] [i_15] [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                    arr_47 [i_0] [i_0] = var_8;
                    var_35 = ((/* implicit */_Bool) (+(min((((/* implicit */int) (!(var_1)))), (min((arr_22 [i_0] [i_0 - 1] [i_0]), (var_2)))))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_13 + 2])) > (((/* implicit */int) arr_26 [i_12 - 2]))))) < (((/* implicit */int) max((arr_26 [i_0 - 1]), (((/* implicit */unsigned char) var_8)))))));
                    var_37 = ((/* implicit */unsigned int) min((max(((~(var_9))), (((/* implicit */long long int) 1352733346U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_13] [i_15])) > (var_9))))))));
                }
            }
            var_38 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) + (((((/* implicit */long long int) arr_38 [i_0] [i_0] [i_0] [i_0])) / (var_12)))))));
        }
        for (int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (long long int i_18 = 2; i_18 < 11; i_18 += 3) 
                {
                    {
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) 1223841163U))));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) max((min(((-(-1762743761178539524LL))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46621))) | (arr_3 [8]))))), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) arr_33 [i_0] [2LL] [2LL] [i_0])))))))));
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_48 [i_0 + 1]), (((/* implicit */int) var_1))))), (arr_17 [i_17 - 1] [i_18 - 1] [i_18 - 1] [i_18] [(_Bool)0])))) ? (((/* implicit */long long int) max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) max((var_8), (arr_29 [i_0] [i_0] [i_16] [i_17 - 1] [i_0] [i_16] [i_18 - 1]))))))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */long long int) var_11)))))))))));
                        var_42 = ((/* implicit */long long int) var_18);
                    }
                } 
            } 
            arr_55 [i_0] = min((((long long int) arr_42 [i_0 - 1])), (((/* implicit */long long int) ((int) arr_46 [i_0] [i_0] [i_0 - 1] [i_0]))));
            /* LoopNest 3 */
            for (long long int i_19 = 1; i_19 < 11; i_19 += 4) 
            {
                for (int i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        {
                            arr_65 [i_21] [i_16] [i_0] [i_20] [i_21] [i_0] = ((/* implicit */_Bool) min((max((((8250350246504037275LL) << (((((/* implicit */int) var_17)) - (64496))))), (((/* implicit */long long int) (~(arr_12 [i_0] [i_0] [i_20] [i_21])))))), (max((((/* implicit */long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (arr_5 [i_0])))));
                            var_43 &= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) ((2179779750U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_19] [i_21])))))), (max((((/* implicit */unsigned int) arr_33 [i_0 + 1] [i_21] [i_20] [i_21])), (arr_54 [i_0] [i_0] [i_0] [i_0] [i_21] [i_21]))))));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (_Bool)1))));
                            var_45 = ((/* implicit */int) (-(((((/* implicit */long long int) arr_32 [i_19 + 1])) ^ (var_12)))));
                            var_46 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_0 - 1] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (arr_38 [i_0] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_28 [i_0] [i_0 + 1] [i_21] [i_0 + 1])))))))) : (((((arr_34 [8LL] [i_21] [8LL] [i_19] [i_21] [8LL]) != (((/* implicit */int) arr_28 [i_19] [i_19] [i_21] [i_19])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2078677884)) && (((/* implicit */_Bool) var_19)))))) : (arr_51 [i_0] [i_16] [i_16] [i_20])))));
                        }
                    } 
                } 
            } 
            var_47 = ((((/* implicit */_Bool) var_16)) ? (((long long int) max((arr_53 [7U] [0] [i_0] [i_16] [i_16]), (((/* implicit */int) var_4))))) : (((((arr_15 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_16] [i_16] [i_0])) : (var_2)))))));
        }
        var_48 = ((((/* implicit */_Bool) min((((((/* implicit */long long int) var_11)) ^ (arr_8 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) max((arr_10 [i_0 - 1] [i_0 - 1] [i_0]), (arr_36 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0]))) : (((min((arr_14 [i_0] [i_0] [i_0] [4U]), (((/* implicit */unsigned int) var_2)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_19))))));
    }
    var_49 = ((/* implicit */long long int) var_19);
}
