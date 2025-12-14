/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37942
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
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)56)), ((unsigned short)36559)))) : (((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) ((581464124U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                var_16 -= ((/* implicit */_Bool) arr_3 [i_0]);
                var_17 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0))));
                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -1552618796)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 6)) : (var_3)))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 581464132U)) ? (arr_3 [i_1]) : (581464124U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3713503172U))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(var_12))), (((/* implicit */unsigned int) (short)-14887))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
    var_20 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) (short)-14954)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
    var_21 += ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_0)))) && ((_Bool)1))))));
}
