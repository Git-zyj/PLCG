/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229669
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) (+(arr_0 [i_0])));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-16788))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_2]))) ? (((int) arr_5 [i_0])) : (((/* implicit */int) ((unsigned short) (unsigned char)127)))));
                    var_19 = ((/* implicit */signed char) arr_7 [(unsigned char)9]);
                    var_20 = ((/* implicit */short) (~(arr_0 [i_0])));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0])));
    }
    var_21 = ((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))));
}
