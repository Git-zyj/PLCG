/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220321
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~((+(((/* implicit */int) max((arr_3 [i_0 - 1]), ((unsigned char)77)))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_4] [(unsigned char)4] [i_3] [(unsigned char)10] = ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)4), (min((arr_15 [i_0] [i_0] [i_4 + 2] [i_0] [i_4 + 3]), ((unsigned char)247)))))), ((+(((/* implicit */int) var_11))))));
                            var_16 = min((min((var_13), ((unsigned char)236))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))));
                            arr_18 [i_0 + 2] [i_4] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((min((var_13), ((unsigned char)28))), (max(((unsigned char)248), (arr_4 [i_0] [i_1 + 1] [(unsigned char)5]))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) max((var_13), ((unsigned char)247)))))), (((/* implicit */int) min((arr_15 [i_0] [i_1 + 2] [i_2] [i_3] [i_5 - 1]), ((unsigned char)4))))));
                            var_18 |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_0]))))));
                        }
                        var_19 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) max((var_6), ((unsigned char)8)))), ((-(((/* implicit */int) (unsigned char)4))))))));
                        var_20 = min(((unsigned char)100), ((unsigned char)100));
                    }
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned char)5)))), (((/* implicit */int) min(((unsigned char)251), (min((var_10), (arr_12 [i_0 + 1] [i_1]))))))));
                        arr_23 [i_6] [i_1] [(unsigned char)9] [i_6] = ((/* implicit */unsigned char) min((max((((/* implicit */int) min(((unsigned char)250), ((unsigned char)167)))), ((~(((/* implicit */int) arr_12 [i_0] [i_0])))))), (((/* implicit */int) min((arr_6 [i_1 - 2] [i_0 + 1]), (arr_6 [i_1 + 3] [i_0 + 2]))))));
                        var_22 *= ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_1 [i_0 - 1]), ((unsigned char)220)))), ((-(((/* implicit */int) (unsigned char)0))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            arr_26 [i_6] [i_6] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)252)))), ((-(((/* implicit */int) (unsigned char)90))))));
                            var_23 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)11))))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)180), ((unsigned char)250))))));
                            arr_27 [i_2] &= min((max((var_0), (var_5))), (max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_7 + 2] [i_0] [i_0 + 2]), (var_11))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)5))));
                        }
                        var_26 = min((min((min((var_14), ((unsigned char)232))), (min((var_7), ((unsigned char)74))))), (min((min(((unsigned char)185), ((unsigned char)186))), ((unsigned char)8))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)120)))), (((/* implicit */int) min((var_9), (max((arr_5 [i_0] [i_1] [i_1]), (arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] [i_8]))))))));
                        arr_30 [i_8] [i_1] [i_2] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)8)))), ((+(((/* implicit */int) (unsigned char)203))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_9 [i_9 + 1] [i_1 + 4] [i_1 + 2] [i_0 + 1]), (var_11))))));
                            var_29 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)6))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) min(((unsigned char)254), (arr_25 [i_1 + 2] [i_8] [(unsigned char)10] [(unsigned char)10] [i_8] [i_8]))))));
                            arr_35 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_1 + 4] [i_1] [i_1 + 4])))), (((/* implicit */int) max((arr_15 [i_0] [i_0 + 2] [i_1 - 2] [(unsigned char)16] [i_1 - 1]), (var_11))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                            var_32 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) max(((unsigned char)155), ((unsigned char)253))))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            var_33 = min(((unsigned char)67), ((unsigned char)124));
                            var_34 = max(((unsigned char)27), ((unsigned char)0));
                        }
                        var_35 *= ((/* implicit */unsigned char) min((((/* implicit */int) max((var_6), (var_9)))), ((+(((/* implicit */int) arr_11 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_0]))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 19; i_13 += 2) 
                    {
                        var_36 ^= max(((unsigned char)245), ((unsigned char)145));
                        var_37 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)167), (var_13)))), ((~(((/* implicit */int) var_3))))));
                        arr_44 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_6)))), ((~(((/* implicit */int) (unsigned char)111))))));
                        arr_45 [i_0 + 2] [i_1 + 4] [i_2] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */int) max((min((arr_1 [i_0]), ((unsigned char)156))), ((unsigned char)127)))), (min((((/* implicit */int) var_5)), ((+(((/* implicit */int) (unsigned char)0))))))));
                    }
                    var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((var_5), (arr_22 [i_0 + 1] [i_0 + 1]))))));
                    arr_46 [i_0] [(unsigned char)21] [i_0] [i_2] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_5 [(unsigned char)21] [i_0 + 2] [i_2]))))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) max(((unsigned char)216), (var_11))))))));
}
