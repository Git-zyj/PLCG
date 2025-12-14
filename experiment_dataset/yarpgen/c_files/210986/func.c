/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210986
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
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_19 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_15))))) > (((/* implicit */int) (!(((/* implicit */_Bool) -2249771105918402115LL)))))));
        var_20 = ((/* implicit */unsigned char) (+(((-2249771105918402115LL) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [19LL] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) 4946587650951586400LL);
    }
    var_21 = ((/* implicit */long long int) var_14);
}
