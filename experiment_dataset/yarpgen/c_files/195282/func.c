/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195282
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) ((arr_0 [i_0]) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (1312174774) : (((/* implicit */int) (short)-16990))))) ? ((~(1767098635))) : (((/* implicit */int) (short)14326))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58074)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0] [(unsigned short)11] [i_2 + 3]))))) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_2 + 2] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 2])))) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_1] [i_2 + 2])), (arr_8 [i_0] [i_2 - 2] [i_2 + 2] [i_2 + 2])))))))));
                    arr_9 [2LL] [i_1] [i_2 - 3] = ((/* implicit */long long int) ((min(((~(((/* implicit */int) var_8)))), (arr_0 [i_2]))) - ((~((~(((/* implicit */int) var_5))))))));
                    arr_10 [(short)1] = ((/* implicit */long long int) ((((unsigned int) arr_2 [i_2 - 2] [i_2 - 2])) == (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_1)), (arr_8 [i_0] [i_1] [2U] [i_2])))) ^ (((((/* implicit */int) (short)-16182)) - (((/* implicit */int) (_Bool)1)))))))));
                }
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_1);
}
