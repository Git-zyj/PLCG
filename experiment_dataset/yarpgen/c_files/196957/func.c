/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196957
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
    var_18 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))));
        var_20 = ((/* implicit */signed char) arr_0 [i_0 - 2]);
        arr_2 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2])))), (((/* implicit */int) min((arr_0 [i_0 + 2]), (var_4))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_21 -= ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_17)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_4)))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1])) : (var_16))) << (((arr_4 [i_1]) - (606844719574445002LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_0)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((arr_8 [i_2]) & (arr_8 [(signed char)10]))))));
        var_24 = ((arr_6 [i_2]) & (((/* implicit */int) var_12)));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        arr_17 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_4] = ((((/* implicit */_Bool) arr_7 [i_5] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_2]))) : (var_9));
                        var_25 += ((/* implicit */signed char) ((((arr_8 [i_2]) + (2147483647))) << (((((/* implicit */_Bool) arr_16 [9] [i_3])) ? (((/* implicit */int) arr_11 [i_5] [i_2])) : (((/* implicit */int) var_11))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2]))));
    }
    var_27 = ((/* implicit */int) var_10);
}
