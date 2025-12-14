/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207549
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
    var_18 = ((/* implicit */unsigned int) var_14);
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((((((-(var_5))) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) + (29462))))) * (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) 3442972234U));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (+(arr_5 [i_0] [i_0])));
            var_22 = ((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) ? (((/* implicit */int) ((var_0) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_17))));
            arr_8 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(1853311130U))))));
        }
    }
}
