/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40006
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_1 [i_0 + 1])))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            var_14 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_2 [i_1]))))));
            arr_5 [i_0] [i_1] = ((/* implicit */int) arr_4 [(signed char)17]);
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (arr_4 [i_0 - 2])))) ? (arr_4 [i_1 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((-2135919062) >= (((/* implicit */int) var_4))));
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) -1621150344392736075LL));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) (short)-21588)) <= (((/* implicit */int) var_6)))))));
        }
    }
    var_18 = ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((((((/* implicit */_Bool) (short)-25912)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))) < (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
}
