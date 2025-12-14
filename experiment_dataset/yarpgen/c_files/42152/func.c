/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42152
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
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 2]), (arr_4 [i_0 - 1])))) && (((/* implicit */_Bool) ((arr_4 [i_0 - 2]) + (arr_4 [i_0 + 1]))))));
            arr_7 [1] [1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_6) % (((/* implicit */int) var_10))))) ? (((long long int) 3525308726U)) : (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) -1)))))), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))))));
        }
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (arr_1 [i_0] [i_0])))) + (((/* implicit */int) var_18))))), (max((8775149817368580971LL), (((/* implicit */long long int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))) : (var_0))))))));
    }
    var_21 = ((/* implicit */long long int) var_13);
}
