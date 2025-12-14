/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198447
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [(unsigned short)6] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_2 [i_0 + 1] [i_1])))) * (((/* implicit */int) (((+(((/* implicit */int) var_7)))) != (((arr_3 [i_0 + 1] [i_0] [10ULL]) | (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)4579))));
                var_12 = ((/* implicit */unsigned int) arr_0 [i_0 - 1]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 3930918880U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-((+(var_6))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) (signed char)10)) != (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)149))))))))) | (((((long long int) var_3)) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
}
