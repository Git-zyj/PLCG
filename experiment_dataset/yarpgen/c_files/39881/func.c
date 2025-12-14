/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39881
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
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned int) min((((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) / (((/* implicit */int) ((short) arr_5 [(short)0] [2U]))))), ((+(((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((min((arr_0 [i_0 - 3]), ((_Bool)1))), (arr_1 [i_0]))))));
                var_19 = 2170926600U;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((_Bool)1), (((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned short)65521)))))))));
    var_21 = ((/* implicit */unsigned short) max((((-4630836349100418147LL) - (((/* implicit */long long int) ((var_4) >> (((/* implicit */int) var_11))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_7)))))))));
    var_22 = ((/* implicit */long long int) (+(min((((/* implicit */int) var_9)), ((~(((/* implicit */int) (unsigned short)43308))))))));
}
