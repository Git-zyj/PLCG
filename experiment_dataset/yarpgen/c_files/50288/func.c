/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50288
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (min(((((_Bool)1) ? (((/* implicit */int) var_6)) : (arr_4 [i_0] [3LL] [i_2] [i_2]))), (((/* implicit */int) min((arr_1 [(unsigned short)5] [(signed char)10]), ((_Bool)1))))))));
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((min((arr_3 [(unsigned char)8] [(unsigned char)4]), (arr_3 [i_0 - 1] [i_1]))) == (((/* implicit */int) (!(((/* implicit */_Bool) (+(-709757063))))))))))));
                    var_13 = ((/* implicit */signed char) min((arr_4 [i_0] [i_1] [i_1] [(signed char)0]), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        arr_7 [12ULL] [8LL] = ((/* implicit */signed char) var_5);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                {
                    var_14 -= (((-(max((1071601424), (((/* implicit */int) (signed char)-44)))))) > (((/* implicit */int) arr_0 [i_0])));
                    var_15 = arr_10 [4ULL] [(_Bool)1] [(signed char)16] [i_0];
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((var_2) ? (((/* implicit */int) arr_14 [i_0] [(unsigned char)5] [i_3] [i_4])) : (1071601431)))))), (max((arr_11 [i_0] [i_4] [(unsigned short)1]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        var_17 = var_1;
                        var_18 = ((/* implicit */unsigned char) arr_14 [i_4] [i_5] [i_0] [i_4]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 4; i_6 < 16; i_6 += 4) 
                    {
                        arr_17 [i_4] [i_3] [i_4] = ((/* implicit */_Bool) arr_0 [i_3]);
                        var_19 = ((/* implicit */unsigned char) arr_14 [i_0 - 1] [i_3] [i_4 - 1] [i_4]);
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_20 -= ((/* implicit */unsigned char) arr_21 [i_0 - 1] [(unsigned short)10] [i_0 - 1] [(_Bool)1] [i_7]);
                            var_21 = ((((/* implicit */long long int) arr_9 [i_0 - 1] [i_6 - 3])) == (var_9));
                        }
                        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            arr_24 [i_0 - 1] [i_4] [(unsigned char)2] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_9) / (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))))))) || (((/* implicit */_Bool) var_9))));
                            var_22 = ((/* implicit */unsigned char) arr_9 [i_4] [i_4]);
                            arr_25 [i_0 - 1] [i_0 - 1] [i_4] [i_6 - 2] [i_6] [i_4] = ((/* implicit */long long int) arr_19 [i_0] [i_3] [i_4 + 2] [(_Bool)0] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_5 [(unsigned char)11] [i_6 + 1] [i_9]);
                            arr_30 [3LL] [3LL] [(unsigned char)9] [i_4] [i_4] [i_6] [(_Bool)1] = ((/* implicit */int) var_9);
                        }
                        arr_31 [(signed char)3] [(unsigned char)16] [i_3] [(unsigned char)5] [i_4] [(_Bool)1] = ((((/* implicit */_Bool) 1071601438)) ? (((/* implicit */int) arr_0 [(signed char)6])) : (((/* implicit */int) (signed char)-48)));
                        arr_32 [i_4] [i_4] [(_Bool)0] [7] [(signed char)5] = arr_21 [i_0] [i_0] [(_Bool)1] [i_4 + 2] [(_Bool)1];
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_4))))))) ? (((arr_16 [12]) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0 - 1] [(signed char)3])), (2761225609824476926LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_0 [i_0]))));
    }
    /* LoopSeq 2 */
    for (int i_10 = 1; i_10 < 18; i_10 += 4) 
    {
        arr_36 [i_10] = ((/* implicit */signed char) (+(min(((+(((/* implicit */int) arr_35 [i_10 + 1])))), (((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_35 [(_Bool)1]))))))));
        arr_37 [i_10] = ((min((arr_33 [(_Bool)1] [i_10 + 1]), ((_Bool)1))) ? ((+(((/* implicit */int) arr_33 [i_10 - 1] [i_10 - 1])))) : ((~(((/* implicit */int) arr_33 [i_10 - 1] [i_10 + 1])))));
    }
    for (unsigned char i_11 = 4; i_11 < 20; i_11 += 4) 
    {
        var_26 = min((((/* implicit */unsigned char) (signed char)-98)), (arr_38 [i_11]));
        var_27 += ((/* implicit */_Bool) ((14) >> (((-1796680675) + (1796680678)))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_9), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (((-(((/* implicit */int) var_2)))) == (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_6)))))))));
}
