/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247040
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((((((/* implicit */int) var_3)) | (((/* implicit */int) ((short) (_Bool)0))))) > (((/* implicit */int) var_1))))));
    var_14 ^= ((/* implicit */unsigned int) var_8);
    var_15 = ((/* implicit */long long int) max((var_1), (max((var_3), (var_5)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) <= (arr_1 [i_1])));
            arr_5 [i_0] = ((/* implicit */long long int) ((signed char) arr_2 [i_0]));
            var_16 = ((/* implicit */signed char) ((arr_2 [i_0]) | (arr_2 [i_0])));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            arr_10 [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) var_10);
            var_17 = ((/* implicit */unsigned int) (-(var_7)));
            var_18 += ((/* implicit */long long int) arr_0 [i_0]);
            var_19 = ((/* implicit */_Bool) (+(var_2)));
        }
        arr_11 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
    }
}
