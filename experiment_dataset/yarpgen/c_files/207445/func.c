/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207445
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
    var_10 = ((/* implicit */unsigned char) (~(((max((var_9), (((/* implicit */int) var_7)))) << (((/* implicit */int) ((var_4) != (var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] = arr_7 [i_0] [i_0] [i_0] [i_0];
                    var_11 += ((/* implicit */unsigned char) arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]);
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        var_12 += ((/* implicit */_Bool) var_2);
                        var_13 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) * (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_6 [7] [i_1 + 1] [i_0])) ? (arr_12 [i_3] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2]))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)61)) ^ (arr_1 [i_4])))))))))));
                        arr_15 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_7)) + (((((/* implicit */int) (unsigned char)143)) << (((((/* implicit */int) (unsigned char)181)) - (160)))))))));
                    }
                    /* LoopSeq 4 */
                    for (int i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        arr_19 [(unsigned short)13] [i_0] [i_0] [i_2] [i_5] [i_5] = ((int) ((unsigned char) min((1318786977), (((/* implicit */int) (unsigned char)61)))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_5 - 2])) - (min((arr_16 [i_0] [i_1 - 1] [i_5 + 1] [i_5 - 3] [i_1 - 1] [i_5 - 1]), (((/* implicit */int) var_0))))));
                    }
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((min((((((/* implicit */int) (unsigned char)195)) * (((/* implicit */int) (unsigned char)197)))), (((int) var_5)))), (((/* implicit */int) ((((int) 1569774285)) != (((/* implicit */int) (unsigned char)104))))))))));
                        var_17 |= ((((/* implicit */int) arr_14 [(unsigned char)7])) % (arr_0 [(unsigned short)18]));
                        var_18 *= ((/* implicit */unsigned char) ((arr_3 [i_0] [i_1] [i_6]) && (((/* implicit */_Bool) ((var_4) >> (((((int) arr_6 [i_0] [i_1] [i_1])) - (90))))))));
                        var_19 |= ((/* implicit */_Bool) (unsigned char)59);
                        arr_22 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) arr_4 [9] [i_1] [i_2]);
                    }
                    for (int i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            var_20 += (((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)52)) || (((/* implicit */_Bool) (unsigned char)196))))))) <= (((/* implicit */int) (((-(((/* implicit */int) var_6)))) > (max((-1569774296), (arr_25 [i_0] [i_8] [i_2] [i_7 + 1] [i_7 + 1])))))));
                            arr_29 [i_0] [i_2] [i_2] [i_2] [i_1 + 1] [i_1] [i_0] = ((/* implicit */int) arr_18 [i_7] [(unsigned char)3] [i_2]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((_Bool) arr_3 [(unsigned char)10] [(unsigned char)11] [i_7 - 1]));
                            var_22 = ((/* implicit */unsigned short) arr_18 [i_2] [i_2] [(unsigned char)8]);
                            var_23 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (unsigned char)59)))));
                        }
                        for (int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_9), (((var_9) ^ (((/* implicit */int) ((_Bool) arr_31 [i_0] [i_1] [i_2] [i_2] [i_10])))))));
                            arr_34 [i_0] [i_2] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((+(((/* implicit */int) (unsigned char)197))))))));
                            arr_35 [i_0] [i_0] [i_2] [i_7] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_4) << (((arr_7 [i_0] [i_2] [i_7] [i_10]) - (730014983)))))) || (((/* implicit */_Bool) arr_26 [i_7 - 2] [i_10] [(unsigned short)1] [i_7 - 1] [i_10] [i_1 - 2])))), (((((/* implicit */int) ((unsigned char) (unsigned char)59))) <= (arr_16 [(_Bool)1] [i_0] [i_0] [i_2] [i_2] [i_2])))));
                            arr_36 [i_0] [i_0] [i_0] [0] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) == (((/* implicit */int) arr_17 [i_0] [(unsigned char)7]))))) ^ (min((arr_2 [i_1]), (((/* implicit */int) var_8)))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_7 - 1] [i_1 - 1] = ((/* implicit */unsigned char) arr_28 [i_1 + 1] [i_2] [4]);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((unsigned char) var_6)), (((/* implicit */unsigned char) (_Bool)1))))) ^ (((((/* implicit */int) arr_23 [i_1] [i_1])) - (((/* implicit */int) var_7))))));
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_8 [i_1 - 2] [i_1 - 2] [i_7]), (arr_8 [i_0] [(unsigned char)3] [(unsigned short)17])))), (((((/* implicit */int) var_7)) >> (((var_9) - (834764114)))))));
                        }
                        var_27 = ((/* implicit */_Bool) (+(max((((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_2] [i_7 - 1])) - (var_5)))))));
                        var_28 -= ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) arr_6 [i_0] [12] [i_2])) && (((/* implicit */_Bool) arr_26 [i_0] [i_0] [(unsigned char)15] [8] [i_0] [(_Bool)1])))) && (((/* implicit */_Bool) arr_16 [i_1 - 2] [i_1] [i_1 - 1] [i_7 + 1] [(unsigned short)0] [i_7 + 1])))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_43 [(unsigned short)5] [i_0] [i_2] = ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)95)) * (((/* implicit */int) (unsigned char)37)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 268402688)))))))));
                        var_29 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_2] [i_2] [i_12] [i_2])) || (((/* implicit */_Bool) var_5))))))));
                        arr_44 [i_0] [i_12] [10] [i_12] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (arr_27 [i_1 + 1] [i_1]) : (((int) (unsigned char)185)))) << (((((/* implicit */int) arr_14 [i_0])) & (max((((/* implicit */int) (unsigned short)12232)), (var_5)))))));
                    }
                }
                var_30 = ((/* implicit */int) min((var_30), (((int) (unsigned char)246))));
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)50914)))), ((-(((/* implicit */int) arr_11 [i_0] [1] [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [10] [i_1 - 1])) || (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) var_3)))))))) : (min((((arr_37 [i_0] [(unsigned short)6] [i_1 - 1] [(unsigned char)3]) ? (arr_2 [i_0]) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [8] [(_Bool)1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
            }
        } 
    } 
}
