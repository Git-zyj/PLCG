/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230597
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
    var_15 = ((/* implicit */signed char) (-(((((/* implicit */int) var_12)) / (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_4)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_0] [i_0])) >= (arr_1 [i_0]))))));
        var_17 += ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)3]))) + (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            arr_7 [6] [i_1] [6] &= arr_5 [i_0] [i_1 - 1] [6];
            var_18 = ((/* implicit */signed char) ((((2055868598U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))))) > (((/* implicit */unsigned int) ((arr_2 [(signed char)8] [i_0]) + (((/* implicit */int) arr_6 [i_0])))))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))) < (((/* implicit */int) arr_3 [i_0])))))));
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */int) arr_6 [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)7] [i_1])))))));
        }
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_6 [(signed char)2]))))) ? (((/* implicit */int) arr_6 [4U])) : (((/* implicit */int) ((signed char) (signed char)25)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) arr_9 [i_2]);
        arr_11 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [8U]))));
        arr_12 [i_2 + 3] = ((/* implicit */unsigned char) arr_8 [i_2] [i_2]);
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) arr_2 [i_3] [i_3]);
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    var_22 = arr_3 [(signed char)5];
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min(((!((!(((/* implicit */_Bool) (unsigned char)47)))))), ((!(((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_5] [(signed char)1])), (arr_19 [(signed char)5] [i_4 + 2] [(signed char)4] [i_5])))))))))));
                    arr_20 [(unsigned char)5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_3 [i_5]), (arr_17 [(unsigned char)3] [i_3]))))))) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : ((~(((/* implicit */int) min((arr_6 [i_5]), (((/* implicit */unsigned char) arr_17 [i_4 - 1] [i_5])))))))));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_24 = ((/* implicit */int) min((var_24), ((-(((/* implicit */int) ((signed char) ((((/* implicit */int) arr_21 [i_6])) * (((/* implicit */int) arr_22 [i_6]))))))))));
        var_25 += ((/* implicit */signed char) (((~(((/* implicit */int) arr_21 [i_6])))) < (min(((-(-4))), (((/* implicit */int) arr_22 [i_6]))))));
        var_26 &= ((/* implicit */unsigned int) arr_22 [i_6]);
    }
    var_27 = ((/* implicit */signed char) ((unsigned int) var_5));
}
