/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225439
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (!((_Bool)1)));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((signed char) (+(var_3))));
        arr_3 [(unsigned short)16] &= ((/* implicit */int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) ((10118940038289973783ULL) == (8327804035419577830ULL))))))) ? (((var_11) % (((8327804035419577831ULL) & (8327804035419577825ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */int) (signed char)12)) * (((/* implicit */int) arr_1 [(signed char)0]))))))))));
    }
    var_21 &= ((/* implicit */short) var_1);
    var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (8327804035419577830ULL)))) || ((!(((/* implicit */_Bool) var_17)))))));
}
