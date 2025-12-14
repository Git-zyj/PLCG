/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230941
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)84)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_10 = ((/* implicit */short) ((((/* implicit */int) var_2)) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (short)14))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) (~(min((((/* implicit */int) (signed char)-62)), ((-(((/* implicit */int) arr_4 [i_2] [i_1]))))))));
                arr_11 [i_1] [i_2] = min((((/* implicit */int) arr_10 [i_2] [i_2 + 4])), ((+(((/* implicit */int) max((((/* implicit */short) var_2)), (arr_4 [i_1] [(short)2])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) 7897923455682596834ULL);
}
