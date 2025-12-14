/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4778
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
    var_19 = ((/* implicit */short) var_9);
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) min((var_13), (var_14))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [(_Bool)1])))) < (((/* implicit */int) arr_5 [i_1]))));
                var_23 -= ((/* implicit */unsigned char) var_1);
                var_24 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)240)) == ((-(((/* implicit */int) (unsigned char)240))))));
                var_25 = var_6;
            }
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1] [i_1] [i_0]))) * (((/* implicit */int) arr_5 [i_0]))));
        }
        var_27 = ((/* implicit */unsigned short) var_13);
    }
}
