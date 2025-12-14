/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216712
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((_Bool) ((signed char) var_6));
                var_16 = ((((/* implicit */_Bool) var_3)) ? ((+((+(arr_2 [i_1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                var_17 *= ((/* implicit */long long int) ((_Bool) (_Bool)0));
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (-604000036)))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0]))) : (((((/* implicit */_Bool) ((short) arr_3 [i_1] [i_1]))) ? (((/* implicit */int) (short)26532)) : (((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((/* implicit */signed char) var_9)), (var_4))))));
    var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (4177920LL)));
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (((~(var_12))) > (((/* implicit */long long int) var_13)))))));
}
