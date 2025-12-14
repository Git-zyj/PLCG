/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48994
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (~((~((((_Bool)0) ? (6200572328821812659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                            var_19 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_12)))));
                            var_20 ^= ((/* implicit */unsigned short) (~(min((arr_7 [i_3 - 1] [i_1 - 4] [i_1 - 4] [i_0]), ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                            var_21 = var_4;
                        }
                    } 
                } 
                arr_9 [i_0] = ((/* implicit */long long int) max((((unsigned long long int) arr_6 [i_1 - 4] [(_Bool)1] [i_1 - 3] [i_1 + 2] [(_Bool)1] [i_1 - 4])), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_8)))) - (((/* implicit */int) var_11)))))));
                var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((var_16) - (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)38304))))) : (((unsigned long long int) arr_2 [i_1] [6LL])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((((/* implicit */_Bool) 0U)) ? (var_5) : (arr_7 [i_1 - 3] [i_1 + 2] [i_1] [i_0]))))))));
                var_23 = min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (4172165453U) : (arr_8 [3U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0 + 1] [13LL] [i_0] [i_1])) >= (((/* implicit */int) (_Bool)1)))))) : (min((var_12), (((/* implicit */unsigned long long int) var_2)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((var_7) <= (((/* implicit */unsigned long long int) var_16))));
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned long long int) 1670124211U))))) ? (var_1) : (((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), ((!(((/* implicit */_Bool) 2624843084U)))))))))))));
    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_15)));
}
