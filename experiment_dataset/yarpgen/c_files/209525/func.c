/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209525
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_6 [i_0] [i_1] [i_1]) >= (arr_6 [i_0] [i_1] [i_1]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (arr_6 [i_0] [i_1] [i_0])))) ? (((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [(signed char)8] [i_1] [i_0]))) : (((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [i_0]))));
                    var_13 &= (+(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [i_0])) ? (-2059840732) : (((/* implicit */int) var_10)))) + (2147483647))) << (((/* implicit */int) arr_3 [i_1]))))) ? (((min(((_Bool)1), ((_Bool)0))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_5), (arr_1 [i_0])))))) : (((int) var_10))));
                    var_15 -= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_0 [(signed char)4] [i_1]))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (7026220122471932522ULL))));
}
