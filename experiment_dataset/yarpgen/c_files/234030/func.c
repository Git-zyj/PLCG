/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234030
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) 6245954932983460839LL);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_18 &= ((((/* implicit */int) arr_3 [i_1] [i_0])) & (((/* implicit */int) arr_2 [i_0])));
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_2 [i_1]))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)40))));
    }
    var_20 += ((/* implicit */unsigned short) var_8);
    var_21 = ((/* implicit */signed char) max((max((((/* implicit */int) ((((/* implicit */int) var_0)) > (var_14)))), (min((1411495496), (((/* implicit */int) var_5)))))), (var_14)));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_13))));
}
