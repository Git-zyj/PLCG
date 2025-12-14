/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229146
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) max(((-(-6893204501131962555LL))), (arr_3 [i_1] [(unsigned short)13])));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_4 [i_1] [i_1 + 1]), (((/* implicit */signed char) max((arr_0 [i_0]), (var_3)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((var_3) || (((/* implicit */_Bool) min((min(((signed char)2), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (_Bool)1)))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))), (max((arr_3 [i_0] [i_0]), (7968234153350325923LL))))), (min((-9192989058443311360LL), (((/* implicit */long long int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */_Bool) var_16);
}
