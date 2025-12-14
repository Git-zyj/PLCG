/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30956
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [6] [i_1] |= arr_0 [i_1] [i_0 - 1];
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) var_1)) : (arr_3 [i_0] [1ULL] [i_1])))), (min((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0]))))))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        }
        arr_6 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (((+(var_13))) + (((/* implicit */long long int) ((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) % (arr_3 [i_0 - 1] [i_0] [i_0 - 1]))))));
    }
    var_19 = ((/* implicit */unsigned short) var_11);
    var_20 = ((/* implicit */_Bool) (-((~(34359672832LL)))));
}
