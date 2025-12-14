/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239665
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0 + 2]))) : (max(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 3]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)1))));
        var_14 = ((/* implicit */short) ((unsigned short) ((short) (signed char)-15)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
        var_16 = ((/* implicit */int) ((unsigned int) (signed char)25));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 2]))) / (var_6)));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) <= (((((/* implicit */int) (signed char)-28)) / (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((-(((/* implicit */int) (signed char)-15)))) / (((((/* implicit */int) (signed char)-28)) + (((/* implicit */int) (_Bool)1)))))))));
    }
    var_19 = ((/* implicit */signed char) var_10);
}
