/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205037
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
    var_13 ^= ((/* implicit */long long int) var_0);
    var_14 = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) 1691742106)) ? (((/* implicit */int) (short)0)) : (var_3))), (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)94))))))) | (-5138533031852301343LL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_15 = max((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (short)0)))), (((((/* implicit */_Bool) (+(var_6)))) ? (((-1531766366) - (((/* implicit */int) arr_1 [i_0])))) : ((+(-1531766386))))));
        var_16 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */long long int) (_Bool)1)), (5541012996880259765LL))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (~(max((-1531766366), (((/* implicit */int) (short)-24626)))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))) ^ (((((/* implicit */_Bool) -1LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)4))))))))))));
                }
            } 
        } 
    }
}
