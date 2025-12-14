/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49158
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */short) min((((/* implicit */int) var_9)), (((((/* implicit */int) var_5)) << (((arr_5 [i_0] [i_1 - 2] [i_1 + 1]) - (2070135446230283858LL)))))));
                    var_11 = (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57185))) / (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */long long int) (_Bool)1)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) ((((/* implicit */int) (unsigned short)28187)) > (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) -1736629602)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) var_8)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 9243486699402305276ULL)) ? (((/* implicit */int) var_1)) : (499651374)))))))));
}
