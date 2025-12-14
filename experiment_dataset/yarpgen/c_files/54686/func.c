/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54686
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
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 = ((short) (!(((/* implicit */_Bool) var_8))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)6400)))), (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)6196)) : (((/* implicit */int) ((((((/* implicit */int) (short)-32760)) >= (((/* implicit */int) (short)15454)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31233)) ? (((/* implicit */int) (short)-13272)) : (((/* implicit */int) (short)-32754))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-13250))))) | (((/* implicit */int) ((short) (short)1086))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) (short)20158))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) max((var_1), (var_0))))))));
    var_19 = ((/* implicit */short) (((-((-(((/* implicit */int) (short)24691)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-3934)) || (((/* implicit */_Bool) (short)8)))))))));
}
