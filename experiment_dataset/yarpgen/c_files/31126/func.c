/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31126
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
    var_12 = max((((/* implicit */int) ((_Bool) ((int) var_3)))), (((((/* implicit */int) ((((/* implicit */long long int) 570622491)) > (var_5)))) >> (((var_7) + (6993434796362231590LL))))));
    var_13 = ((/* implicit */_Bool) -1438001519);
    var_14 |= (!(((/* implicit */_Bool) var_6)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((min((arr_2 [(_Bool)0] [i_1 - 1]), (((/* implicit */int) arr_4 [i_2] [i_1] [i_0 + 1])))) - (((/* implicit */int) (!(((/* implicit */_Bool) -570622492)))))));
                    var_16 = (!(((/* implicit */_Bool) ((((var_11) ? (-570622509) : (570622508))) >> (min((((/* implicit */int) var_11)), (570622471)))))));
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) 570622509)), (var_8)))))) ? (((var_9) ? (((/* implicit */long long int) (((_Bool)0) ? (-123178740) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) -570622510)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (-570622468))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = ((_Bool) (!(((/* implicit */_Bool) var_7))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((/* implicit */long long int) (~(1504593197)))), (((arr_0 [i_4]) ? (arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]) : (9223372036854775807LL))))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
