/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20671
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((min((4502885913085599582ULL), (((/* implicit */unsigned long long int) var_17)))) << (((((var_19) >> (((/* implicit */int) var_3)))) - (1656733360924863117ULL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [10] = ((/* implicit */int) min((((/* implicit */unsigned char) ((4502885913085599582ULL) != (13943858160623952026ULL)))), (((unsigned char) min((13943858160623952044ULL), (arr_0 [i_0]))))));
                var_21 = ((/* implicit */long long int) ((3414278105U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)27384)))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (4502885913085599596ULL))))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32054))))), (arr_2 [i_1] [i_1 - 1] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) ((3414278095U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))) | (((/* implicit */int) (unsigned short)0)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((unsigned char) min(((~(((/* implicit */int) (short)12)))), (((1534103614) - (((/* implicit */int) var_7)))))));
    var_24 = ((/* implicit */long long int) var_7);
}
