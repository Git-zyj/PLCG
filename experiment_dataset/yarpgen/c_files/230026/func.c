/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230026
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))) ? (3185787753949515691LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28741))))), (615550997301016146LL)));
        var_11 = ((/* implicit */signed char) (-(7455901308672856659LL)));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */int) arr_5 [i_1] [i_1]);
        var_12 = ((/* implicit */int) min((((/* implicit */long long int) min(((short)28741), ((short)28741)))), (-3185787753949515691LL)));
    }
}
