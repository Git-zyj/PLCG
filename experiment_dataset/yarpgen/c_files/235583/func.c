/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235583
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) % (((/* implicit */int) (signed char)78))))) ? (((((/* implicit */_Bool) var_16)) ? (var_6) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned int) (+(arr_1 [i_1])))))));
                var_22 = ((/* implicit */long long int) (-((~(var_16)))));
                var_23 = ((unsigned int) arr_2 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned int) (signed char)0)))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_15 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 0LL))) ? (((min((((/* implicit */long long int) (signed char)-1)), (8388607LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))))) : (((/* implicit */long long int) ((1751877950U) / (1138455020U))))));
                    var_25 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_14)) : (arr_6 [i_3] [i_4]))) > (((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */long long int) arr_10 [i_2] [i_2])))))) ? (((arr_6 [i_2] [i_4]) ^ (arr_6 [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_8 [i_2]) : (var_7))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_18))))))))));
                }
                arr_16 [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((long long int) ((_Bool) -7062470570626766631LL)))));
                var_26 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) var_12))) == (((arr_0 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))))))), ((!(((((/* implicit */long long int) arr_1 [i_3])) == (var_11)))))));
            }
        } 
    } 
}
