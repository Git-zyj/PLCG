/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45248
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_2)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) max((((/* implicit */short) var_6)), (var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */int) var_3)), (var_2))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)40869)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1])) : (((/* implicit */int) arr_5 [12] [i_1])))) : (((((/* implicit */int) arr_3 [3LL] [i_1])) - (((/* implicit */int) arr_4 [2] [i_0] [i_1])))))) - (((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)39921)) : (((/* implicit */int) arr_5 [20LL] [20LL]))))))))));
                var_14 = (-(var_5));
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned short) max((((((_Bool) var_6)) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */long long int) 1073741826)) : (-3617368998650031802LL))))), (((/* implicit */long long int) (((_Bool)1) ? (1073741849) : (-852337192))))));
    var_16 *= ((/* implicit */unsigned short) var_8);
}
