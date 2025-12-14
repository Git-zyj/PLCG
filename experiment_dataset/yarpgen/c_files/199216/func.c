/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199216
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2))))))) : (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_1 [i_0])))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0 - 1] [i_0] = (~(((/* implicit */int) arr_7 [i_0] [i_0])));
            var_21 = ((/* implicit */signed char) var_10);
        }
        arr_9 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), (min((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])), (var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0])), (var_7)))) ? (((/* implicit */int) ((signed char) 3079283261U))) : (((/* implicit */int) (short)2681))))) : ((~(4611668426241343488LL))));
    }
}
