/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228331
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */_Bool) ((((max((6921059061339763719ULL), (((/* implicit */unsigned long long int) -917327414)))) / (min((6921059061339763719ULL), (((/* implicit */unsigned long long int) -2063613620)))))) * (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    arr_8 [i_2] [i_0] = ((/* implicit */_Bool) max((11525685012369787890ULL), (min((((/* implicit */unsigned long long int) ((_Bool) 11525685012369787896ULL))), (6921059061339763748ULL)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23429))) : (-1518846190856097631LL)))) || (((/* implicit */_Bool) min((var_10), (var_2))))))), (((unsigned int) ((unsigned int) 2669673063U)))));
    var_15 += ((/* implicit */unsigned long long int) var_7);
}
