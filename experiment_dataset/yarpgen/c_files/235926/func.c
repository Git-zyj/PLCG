/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235926
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
    var_10 = ((/* implicit */short) ((-1021810112) - (var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */int) (~(arr_4 [i_0] [i_0])));
                    var_12 = ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]));
                    var_13 = ((/* implicit */short) (~(var_3)));
                    var_14 ^= ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_2 [i_0 + 1] [i_1] [16]) : (arr_2 [(short)7] [i_1] [i_1]));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */long long int) ((((var_0) + (2147483647))) << (((arr_0 [7LL] [7LL]) - (10398659)))));
        arr_8 [i_0] = ((int) ((((/* implicit */_Bool) var_3)) ? (1947492464) : (392583366)));
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0 - 3]))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((arr_12 [8LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [8LL]))))))));
        arr_13 [i_3] = ((/* implicit */_Bool) ((((int) 1021810133)) | (((/* implicit */int) arr_5 [i_3 - 2]))));
    }
    /* LoopSeq 4 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) 384568110)) || (((/* implicit */_Bool) arr_1 [6LL] [(short)6])))) && (((_Bool) min((((/* implicit */int) arr_9 [16LL])), (arr_10 [1LL] [i_4]))))));
        var_17 ^= ((/* implicit */signed char) max((arr_4 [i_4] [16]), (((/* implicit */long long int) (-(arr_0 [i_4] [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_5 - 1])), (9223372036854775792LL))))));
        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 633728841)) ? (arr_18 [i_5] [i_5 + 1]) : (arr_18 [(short)5] [i_5 + 1]))), (((arr_18 [i_5 + 2] [i_5 + 1]) & (arr_18 [i_5] [i_5 - 1])))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        var_20 = ((/* implicit */short) ((-1) + (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775792LL)))))));
        arr_24 [i_6] = ((/* implicit */short) var_3);
    }
    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        arr_27 [(signed char)14] = min((min((max((var_2), (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_7])) : (((/* implicit */int) (short)25116)))))), (-1021810087));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (~((+(var_5)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (1021810087)))));
        arr_28 [i_7] = min(((+(min((((/* implicit */int) arr_17 [i_7])), (1021810111))))), (((/* implicit */int) arr_19 [i_7])));
    }
    var_22 = ((/* implicit */int) ((long long int) -1021810105));
}
