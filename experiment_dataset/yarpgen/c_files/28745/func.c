/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28745
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)39394)), (var_3))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((arr_4 [i_0] [i_0] [i_2 - 2]) << (((((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_2 - 1])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [21LL] [i_1 - 1] [i_0]))) - (2514419474U))))))));
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1 - 3] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2 - 1])) ? (var_14) : (((/* implicit */unsigned long long int) 231571816U))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */int) (-(((arr_1 [i_0] [i_0]) ? (arr_7 [i_0] [(unsigned short)3] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        var_21 += ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_1 [i_3 - 1] [i_3 - 1]), (arr_1 [i_3 - 1] [i_3 - 1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            arr_14 [i_4] = ((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39379)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_9 [i_3 - 2])));
            var_23 |= ((((/* implicit */_Bool) arr_11 [(signed char)16])) ? (((((/* implicit */_Bool) arr_11 [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4063395467U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)26142)) : (((/* implicit */int) (unsigned char)10))))));
            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)17060))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
            var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39394))));
        }
    }
    var_26 = ((/* implicit */unsigned int) var_12);
}
