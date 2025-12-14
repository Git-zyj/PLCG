/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19957
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
    var_10 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-978823898) : (((/* implicit */int) (unsigned char)255))))) ? (max((var_2), (((/* implicit */long long int) var_6)))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1 + 3] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : ((-(arr_1 [i_0])))));
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */short) (-((~(arr_1 [i_0])))));
                            var_14 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_3 [i_1] [i_1] [i_2]))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_10 [i_0] [i_1] [i_0] [i_4]) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 3] [i_2])) : (arr_1 [i_0])))));
                        }
                    } 
                } 
            } 
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) (~(((arr_4 [i_0] [(signed char)4] [i_1]) ? (arr_8 [i_0] [i_1] [i_1] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
            var_16 = ((((((/* implicit */int) arr_7 [i_0] [i_1 + 4] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_5 [i_0] [i_1] [1LL] [i_0])))) > ((+(((/* implicit */int) arr_9 [i_0] [(signed char)2] [i_0] [i_0] [i_1] [i_1])))));
        }
    }
}
