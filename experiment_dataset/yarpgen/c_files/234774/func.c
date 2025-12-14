/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234774
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
    var_15 = min((((/* implicit */unsigned long long int) var_6)), (min((max((((/* implicit */unsigned long long int) var_9)), (8056976314657156166ULL))), (((((/* implicit */unsigned long long int) var_5)) ^ (18446744073709551604ULL))))));
    var_16 = ((/* implicit */long long int) ((min((((unsigned long long int) 908979878)), (min((((/* implicit */unsigned long long int) var_12)), (12ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((long long int) 10621192357954838802ULL)) == (((/* implicit */long long int) ((int) 858569604143795555ULL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [12] = max(((((~(arr_0 [i_1]))) & (arr_3 [i_0] [i_1] [i_1 + 1]))), (((/* implicit */unsigned long long int) -908979878)));
                var_17 = ((/* implicit */long long int) max((((unsigned long long int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 2])), (((/* implicit */unsigned long long int) ((int) arr_2 [i_0])))));
            }
        } 
    } 
}
