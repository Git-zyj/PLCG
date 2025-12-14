/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230697
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (var_0)));
    var_11 = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | ((~(9489430740086576669ULL))))));
    var_12 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18437726865477061343ULL))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) -587983379)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((signed char) 8957313333622974947ULL))))))));
    }
}
