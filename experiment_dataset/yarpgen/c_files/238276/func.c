/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238276
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
    var_19 -= ((/* implicit */int) ((var_10) ? (((((/* implicit */_Bool) 1265215063U)) ? (((/* implicit */long long int) 1265215061U)) : (-8250337418646752969LL))) : (((/* implicit */long long int) (+(((int) var_10)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3029752232U)) != (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_15)))));
                                var_20 = ((/* implicit */int) var_1);
                                var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) min((3272029804754802080ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((var_5) + (var_17)))) : (((((/* implicit */_Bool) (unsigned short)14547)) ? (((/* implicit */long long int) 1118451135U)) : (-7403042465755628979LL)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), ((+(min((((/* implicit */unsigned int) 1789828235)), (var_8))))))))));
                }
            } 
        } 
    } 
}
