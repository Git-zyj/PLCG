/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4909
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
    var_17 -= ((/* implicit */long long int) var_0);
    var_18 = ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_19 = (~(((/* implicit */int) var_8)));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_3 [i_0 + 2] [i_0 - 2]), (arr_3 [i_0 + 2] [i_0 - 2]))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((arr_1 [i_0 + 2]) + (9223372036854775807LL))) >> (((arr_1 [i_0 + 3]) + (2356415055819172200LL)))))));
    }
    for (signed char i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] [i_1 - 2] = ((/* implicit */int) arr_4 [(unsigned short)2]);
        var_22 = ((/* implicit */signed char) arr_5 [i_1]);
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_7 [i_2] [i_2 + 3])))), (((((/* implicit */int) var_15)) * (((/* implicit */int) arr_7 [i_2] [i_2 + 3]))))));
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) arr_11 [i_1] [i_2])), (var_3))))));
                    var_24 *= ((/* implicit */signed char) (-(arr_10 [(unsigned char)4] [i_3] [i_3] [i_3])));
                }
            } 
        } 
        var_25 |= ((/* implicit */unsigned short) ((arr_4 [i_1 - 1]) ? (((/* implicit */int) max((arr_4 [i_1 + 1]), (arr_4 [i_1 - 3])))) : (((((((/* implicit */int) var_10)) + (2147483647))) << (((/* implicit */int) arr_4 [i_1 - 4]))))));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_13)))) & (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) : ((+(var_16))));
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */long long int) (+(arr_10 [i_4] [i_4] [i_4] [0])))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
        var_27 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) arr_12 [(_Bool)0] [i_4] [i_4])) : ((-(((/* implicit */int) var_3)))));
    }
}
