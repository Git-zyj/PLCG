/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53576
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
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((-(3240395695613045853LL))) : (arr_0 [i_0 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [(unsigned short)8] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_0))), (max((((/* implicit */unsigned short) arr_7 [i_0 - 2] [i_1] [i_1] [i_2])), (var_9))))))) - (max((-4656361858101394871LL), (((long long int) arr_3 [i_1] [i_1]))))));
                    arr_10 [i_1] = ((/* implicit */short) (!((_Bool)1)));
                }
            }
        } 
    } 
}
