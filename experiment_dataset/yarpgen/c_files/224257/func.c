/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224257
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
    var_11 = (+(var_9));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_1])) & (-788209395))) % (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_2 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((arr_4 [i_0] [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) -28682033936192914LL)) : (var_5))))) * (((/* implicit */unsigned long long int) var_7)))))));
                }
            }
        } 
    } 
}
