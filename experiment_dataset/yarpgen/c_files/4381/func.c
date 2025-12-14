/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4381
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
    var_10 = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))), (min((((/* implicit */long long int) var_8)), (-1526324936572490244LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) min(((unsigned char)128), (arr_1 [i_0] [7U])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (1978691054U)))) : (max((-5727378006703740948LL), (arr_5 [8LL] [i_1]))))));
                var_12 = min((max((((/* implicit */long long int) 2316276233U)), (5727378006703740948LL))), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) var_4))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            {
                arr_10 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)252)), (4290772992U)));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_17 [i_2] [i_2 - 2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) ((unsigned int) (unsigned char)120)));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            var_13 = ((/* implicit */long long int) max((var_13), (((long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_3 + 1] [i_4] [i_5] [i_4] [i_6])) ? (var_1) : (-3415231807684632594LL))))));
                            arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] [i_6] = ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4] [i_3])) ? (((/* implicit */int) arr_12 [i_2] [(unsigned char)8] [i_5])) : (((/* implicit */int) (unsigned char)120))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        arr_23 [5U] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) (unsigned char)127))), (min((5727378006703740966LL), (((/* implicit */long long int) arr_9 [i_2] [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) ((unsigned char) 1213212408U))) ? (((long long int) var_6)) : (min((-5727378006703740949LL), (((/* implicit */long long int) 206985421U)))))) : (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */long long int) ((unsigned int) arr_8 [i_2]))) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)10])))))))));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((long long int) max((var_2), (((/* implicit */long long int) arr_21 [i_7] [i_3] [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870912U)) ? (var_5) : (-2406477180278434249LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 240755621U)))) : (((((/* implicit */_Bool) 2406477180278434260LL)) ? (((/* implicit */long long int) arr_9 [i_4] [(unsigned char)16] [i_4])) : (var_1))))))))));
                        arr_24 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_7 [(unsigned char)11])) ? (-2048LL) : (var_2))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (5727378006703740948LL) : (((/* implicit */long long int) 1463858762U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) : (((long long int) (unsigned char)135))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_27 [i_2] [i_2] [11U] [i_8] [i_2] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) ((unsigned char) var_6))), (((long long int) arr_22 [16LL] [i_2] [i_2] [i_2])))));
                        arr_28 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_4]), (arr_26 [i_8] [i_3] [i_3 - 2] [i_4])))) ? (((/* implicit */int) max((var_0), (arr_16 [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) ((unsigned char) arr_9 [i_3] [i_3] [i_2])))))), (max((((((/* implicit */_Bool) 7282073322060313560LL)) ? (1978691050U) : (1978691051U))), (((((/* implicit */_Bool) var_8)) ? (arr_13 [i_2] [2LL] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        /* LoopSeq 4 */
                        for (long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            arr_31 [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) min((288230376151707648LL), (var_5)))));
                            var_15 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_29 [(unsigned char)0] [i_3] [i_4]))), (((((/* implicit */_Bool) var_8)) ? (arr_15 [i_9 + 1] [i_2] [i_4] [(unsigned char)3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-2406477180278434249LL)))) ? (min((var_3), (((/* implicit */long long int) (unsigned char)153)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7282073322060313562LL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (4256244996131854675LL) : (2406477180278434260LL))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_34 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2 - 3] [(unsigned char)11]))) : (var_2)))) ? (min((((/* implicit */long long int) arr_11 [i_2] [15U] [(unsigned char)9] [i_2 - 2])), (-7282073322060313556LL))) : (((/* implicit */long long int) max((arr_33 [i_2 + 1]), (((/* implicit */unsigned int) (unsigned char)108))))))));
                            var_16 = min((((/* implicit */long long int) min((((unsigned int) var_1)), (((/* implicit */unsigned int) max((var_6), (arr_8 [i_2 + 1]))))))), (((((/* implicit */_Bool) min((var_1), (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_3 + 3] [i_3] [i_3] [14LL] [i_10])) ? (((/* implicit */int) arr_32 [i_2] [i_2] [i_3 + 1] [i_2] [i_8] [i_8] [i_10])) : (((/* implicit */int) var_9))))) : (min((var_4), (((/* implicit */long long int) arr_6 [i_2])))))));
                            arr_35 [19LL] [i_3] [i_4] [i_8] [i_2] [i_3] = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */_Bool) 338535058294301238LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 + 3] [i_8] [i_10]))) : (arr_22 [i_10] [i_2] [i_2] [i_2])))), (min((((/* implicit */unsigned int) ((unsigned char) var_2))), (((unsigned int) 30U))))));
                            var_17 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_32 [i_2] [1U] [i_2] [i_2] [i_2] [12LL] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2316276245U)) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_4] [i_8])) : (((/* implicit */int) (unsigned char)32))))) : (min((((/* implicit */unsigned int) var_6)), (2316276245U))))));
                            var_18 -= ((((/* implicit */_Bool) ((unsigned int) max((-4256244996131854679LL), (((/* implicit */long long int) (unsigned char)92)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)116))))), (max((((/* implicit */long long int) arr_16 [i_10] [i_8] [i_3] [16LL])), (var_2))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_9), (var_6)))), (((unsigned int) var_1))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
                        {
                            arr_39 [i_8] [i_8] [i_4] [i_8] [i_4] [i_2] [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4222124650659840LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (min((var_5), (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 - 1] [i_2] [12LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_37 [i_2]))))))) : (min((((/* implicit */long long int) ((unsigned char) 246290604621824LL))), (((long long int) arr_33 [i_3]))))));
                            arr_40 [5U] [(unsigned char)0] [i_2] [(unsigned char)0] [i_2] [i_3 - 1] [(unsigned char)0] = ((/* implicit */unsigned int) ((unsigned char) ((long long int) ((unsigned char) (unsigned char)163))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)16)) ? (var_4) : (((/* implicit */long long int) arr_13 [i_2] [i_3] [i_2])))))) ? (((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) : (4397979402240LL)))) : (((((/* implicit */_Bool) ((long long int) -4397979402263LL))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2 - 2]))) : (var_7))) : (((/* implicit */long long int) max((98304U), (((/* implicit */unsigned int) var_6)))))))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 20; i_12 += 4) 
                        {
                            arr_43 [i_2] [i_2 - 2] [i_3] [i_4] [i_8] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned char)13] [(unsigned char)13] [i_12])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) 3030530177883115023LL)) ? (((/* implicit */int) ((unsigned char) -2357543933465034660LL))) : (((/* implicit */int) (unsigned char)43)))) : (((/* implicit */int) ((unsigned char) max((arr_36 [15U] [3LL] [(unsigned char)15] [i_8] [4LL] [(unsigned char)3] [(unsigned char)3]), (arr_7 [i_12])))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((((/* implicit */_Bool) 978341178U)) ? (var_3) : (((/* implicit */long long int) 248501358U)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9))))))) ? (max((((/* implicit */long long int) ((unsigned int) arr_36 [i_12] [i_2] [i_2] [i_4] [i_3] [i_3] [i_2]))), (max((var_2), (((/* implicit */long long int) var_9)))))) : (max((((((/* implicit */_Bool) arr_15 [18LL] [i_3] [(unsigned char)19] [i_8] [i_12])) ? (((/* implicit */long long int) 978341178U)) : (var_5))), (((/* implicit */long long int) ((unsigned char) var_2)))))));
                            var_21 = ((/* implicit */unsigned char) ((long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_2 - 2]))) : (var_2)))));
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) 3568491867U))))) ? (min((((/* implicit */long long int) arr_6 [i_2])), (var_2))) : (((((/* implicit */_Bool) var_8)) ? (-4397979402277LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_2] [3LL] [i_2] [i_2]))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_42 [i_2] [i_2] [16LL] [i_2] [i_2] [i_2] [1LL])) ? (arr_25 [i_2] [i_3] [i_4] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [(unsigned char)15] [i_4]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) arr_42 [i_4] [(unsigned char)20] [i_4] [i_8] [i_12] [i_2] [i_2])) : (((/* implicit */int) arr_19 [i_3] [i_8] [i_12]))))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            var_22 = min((((unsigned int) max((((/* implicit */long long int) var_9)), (var_2)))), (((/* implicit */unsigned int) ((unsigned char) min((2147475456U), (((/* implicit */unsigned int) arr_7 [i_2])))))));
                            arr_47 [i_2] [i_3] [i_4] [i_4] [i_2] [(unsigned char)7] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((unsigned char) arr_32 [i_13] [i_13] [i_13] [i_2] [i_13] [2LL] [i_13]))), (((long long int) 4397979402277LL)))), (((/* implicit */long long int) ((unsigned char) min(((unsigned char)124), ((unsigned char)151)))))));
                        }
                    }
                    arr_48 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_26 [14LL] [i_3] [i_3 + 1] [i_4]))))) ? (((/* implicit */int) ((unsigned char) 36028796951855104LL))) : (((/* implicit */int) ((unsigned char) 19733008U)))))), (max((min((((/* implicit */long long int) (unsigned char)240)), (71494644084506624LL))), (((/* implicit */long long int) ((unsigned char) var_9)))))));
                }
                var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((4186112U), (arr_9 [i_2 + 1] [5LL] [i_2])))) ? (max((var_5), (var_3))) : (((long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)64))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) : (2147475481U))))))));
                arr_49 [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) var_9)), (var_1))))) ? (max((max((((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2])), (100663296U))), (((((/* implicit */_Bool) var_4)) ? (arr_13 [(unsigned char)19] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned int) var_1)))))));
            }
        } 
    } 
}
