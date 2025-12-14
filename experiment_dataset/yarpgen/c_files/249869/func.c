/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249869
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
    var_14 += ((/* implicit */short) var_4);
    var_15 = ((/* implicit */short) max((var_2), (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 += ((max((((/* implicit */long long int) arr_1 [i_1] [i_0])), (arr_2 [i_1]))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) > (arr_2 [i_1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((17473158352720886826ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    var_18 += ((/* implicit */short) 17473158352720886829ULL);
                }
                var_19 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
}
