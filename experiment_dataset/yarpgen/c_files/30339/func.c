/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30339
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (var_8))))))), (min((min((((/* implicit */unsigned long long int) arr_0 [1U])), (var_10))), (((/* implicit */unsigned long long int) var_8))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_12 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (-400239868)));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_2] [i_0])), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2])))))) : (min((((/* implicit */unsigned int) var_7)), (var_0))))) >> ((((~(((/* implicit */int) (!(var_4)))))) + (7)))));
                    arr_9 [i_1] [i_1] [i_2] [i_2 - 2] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [(signed char)6] [i_1] [i_2])))))) != (arr_2 [i_2 - 1] [i_2 - 1]))) ? (min((arr_2 [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((arr_2 [i_1] [i_0]) - (7677280442254647585ULL)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
                    var_13 = ((/* implicit */short) arr_0 [i_2]);
                }
                arr_10 [i_1] [i_1] = ((/* implicit */short) ((min((var_6), (((/* implicit */unsigned long long int) var_8)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0] [i_1]), (((/* implicit */short) arr_6 [i_0] [i_1] [i_0]))))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) 14878309319214886613ULL)) && (((/* implicit */_Bool) 3722892052U))));
                    arr_15 [4U] [i_1] = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) >> (((var_5) - (var_5)))))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (arr_4 [i_3] [(signed char)1]))))))) : (min((((var_6) >> (((arr_12 [i_0] [i_3]) + (2079508635))))), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [(unsigned char)9]))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_23 [6] [i_3] [i_3 + 1] [i_4] [i_1] [9ULL] = ((/* implicit */int) (~(min((((((/* implicit */unsigned long long int) var_9)) * (arr_21 [i_1] [i_1] [i_1] [i_4] [i_5]))), (((/* implicit */unsigned long long int) arr_14 [i_3 + 1] [i_1] [i_3 + 1]))))));
                            arr_24 [1ULL] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_3 - 1]);
                            var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (min((var_5), (((/* implicit */int) arr_16 [1] [1ULL] [i_3 + 1] [i_4])))))), (((/* implicit */int) min((((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_11 [(unsigned short)1] [i_1] [i_1])))), ((!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1])))))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            arr_28 [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) arr_17 [i_0] [2U] [2U] [2U] [1U] [i_0])), (var_6))), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_3 - 1] [i_1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_3 - 1] [i_1] [i_6 + 1])))))));
                            arr_29 [i_0] [i_1] [i_1] [i_3] [(short)1] [i_6 - 2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) ? (max((((/* implicit */unsigned int) var_5)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [(unsigned char)1] [i_0] [5] [i_6 + 2] [i_3 + 1] [i_1])) || (((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_4] [i_0] [i_6 + 1] [i_3 + 1] [i_1]))))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_4))));
                            var_17 = ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_14 [i_6 + 1] [i_1] [i_3 + 1])), (arr_5 [i_1] [i_3 - 1] [i_0] [i_1]))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_10)))) ? (arr_22 [i_3] [i_3] [i_3 + 1] [i_6 - 2] [i_3] [i_1]) : (min((((/* implicit */unsigned int) var_8)), (arr_22 [i_0] [i_1] [i_6] [i_4] [i_6] [i_1])))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_34 [i_1] [i_1] [i_3] [i_4] [i_1] [i_7] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) min((arr_16 [(signed char)3] [i_4] [i_1] [i_0]), (((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_3 - 1]))))) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_3] [i_4] [3] [i_1]))))), (((min((3568434754494665003ULL), (((/* implicit */unsigned long long int) (unsigned short)36956)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) : (-8852219538711194682LL))))))));
                            arr_35 [i_0] [8LL] [i_1] [i_4] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 402653184U))))), (var_9)));
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_19 ^= ((/* implicit */short) arr_22 [i_0] [i_3] [i_3] [4LL] [i_0] [i_0]);
                        var_20 = ((/* implicit */short) (~(max((arr_13 [i_3 + 1]), (arr_13 [i_3 - 1])))));
                        arr_39 [i_1] [i_1] [i_8] = ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)65527))));
                    }
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_1] [3LL] [(unsigned short)5] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [(unsigned char)8] [i_3] [i_3] [i_3]))) : (arr_13 [i_3 + 1]))))));
                }
                /* vectorizable */
                for (short i_9 = 2; i_9 < 7; i_9 += 1) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (arr_21 [i_1] [i_1] [i_9 - 2] [i_9] [i_9 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_9 - 2] [i_9 - 2] [i_9])))));
                    var_23 = arr_36 [i_0] [i_0] [i_0] [i_0] [i_0];
                    var_24 = var_9;
                    arr_44 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_1] [i_9]) : (arr_2 [i_0] [i_1])));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((((/* implicit */unsigned long long int) min((min((var_2), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3)))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1825272856U)), (9223372036854775800LL)))), (min((var_3), (((/* implicit */unsigned long long int) var_9)))))))))));
}
