/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215091
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = var_13;
        var_17 = ((/* implicit */signed char) max((((long long int) ((long long int) arr_2 [i_0]))), (((arr_2 [i_0]) / (arr_2 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) >= (((/* implicit */int) arr_5 [i_1])))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) min((arr_5 [i_1]), (arr_4 [i_1] [i_1])))) << (((((long long int) var_14)) - (192LL)))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (signed char)-27))) / (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_10))), (arr_4 [i_1] [i_1]))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 4; i_5 < 21; i_5 += 2) 
                        {
                            var_20 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [i_4 + 2] [i_4 + 3] [i_3 - 1] [i_2 + 2] [i_2 - 1])) && (((/* implicit */_Bool) arr_8 [i_2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_5]))))) : (max((((/* implicit */int) ((((/* implicit */int) arr_13 [i_2 - 2] [i_5] [i_4 + 3] [(unsigned char)8])) > (((/* implicit */int) arr_14 [14LL] [19LL] [(unsigned char)7] [14LL] [i_5]))))), (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_2]))))))));
                            arr_17 [i_1] [i_1] [(signed char)5] [i_1] [i_1] = ((/* implicit */signed char) ((((arr_8 [i_1] [i_1]) ^ (arr_8 [i_4 + 4] [i_1]))) * (min((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_14 [2LL] [i_4 + 1] [i_3] [i_2] [i_1])), (arr_11 [i_5] [(signed char)17] [i_1])))), (((((/* implicit */_Bool) arr_16 [i_5 - 2] [i_4 - 1] [i_1] [i_2] [i_1])) ? (var_11) : (1898747614777129317LL)))))));
                        }
                        var_21 = ((/* implicit */unsigned char) 1898747614777129317LL);
                        arr_18 [(signed char)6] [i_1] [i_3] [i_4] [(signed char)6] = ((/* implicit */long long int) max((min((arr_5 [i_1]), (arr_5 [i_1]))), (max((arr_5 [i_1]), (arr_5 [i_1])))));
                        var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_15 [i_3 + 1] [16LL] [i_3 - 1] [16LL] [(unsigned char)14])) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_15 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 1]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 3; i_6 < 12; i_6 += 3) 
    {
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_6 - 1]))))) ? (((((/* implicit */_Bool) -1898747614777129317LL)) ? (((/* implicit */int) arr_0 [i_6 - 3])) : (((/* implicit */int) arr_0 [i_6 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6 + 1])))))));
        var_24 = ((/* implicit */signed char) arr_19 [i_6]);
    }
    var_25 = var_5;
    var_26 ^= ((/* implicit */unsigned char) min(((~(max((6960473052882622925LL), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) var_1))));
}
