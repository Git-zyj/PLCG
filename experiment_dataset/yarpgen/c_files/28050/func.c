/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28050
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = (-(((((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(arr_0 [i_1])));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (unsigned short)44758)) : (((/* implicit */int) (signed char)63)))))) - (((/* implicit */int) ((unsigned short) arr_0 [(signed char)12])))));
                    arr_13 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_10 [i_0]), (((unsigned int) var_0)))))));
                    var_18 += ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        arr_16 [i_3] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3 + 4])) ? (min((arr_15 [i_3 + 1] [i_3 + 3]), (arr_15 [i_3 + 3] [i_3 + 3]))) : (((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1])) ? (arr_15 [i_3 - 1] [i_3 + 4]) : (arr_15 [i_3 + 1] [i_3 + 1])))));
        var_20 = max((max((((/* implicit */int) var_3)), (var_16))), (((((/* implicit */int) (signed char)-117)) % (((/* implicit */int) (_Bool)1)))));
        var_21 -= ((/* implicit */unsigned long long int) arr_14 [i_3 + 2] [i_3]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        var_22 = var_10;
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_15))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 1] [i_4])) || (((/* implicit */_Bool) arr_2 [i_4] [i_4]))))))))));
        var_24 = ((/* implicit */_Bool) arr_3 [i_4]);
    }
}
