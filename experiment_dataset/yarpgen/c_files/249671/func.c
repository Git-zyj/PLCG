/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249671
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
    var_19 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) (short)-1)) ? (0LL) : (((/* implicit */long long int) 17U)))))) - (((/* implicit */long long int) ((unsigned int) max((var_1), ((short)24455)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) 6086628314581656283LL);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_21 += ((/* implicit */short) var_4);
            var_22 = ((/* implicit */unsigned int) arr_1 [i_1] [i_0]);
            arr_5 [i_0] = ((/* implicit */unsigned short) 0LL);
            arr_6 [i_0] [i_1] = ((/* implicit */short) 0LL);
        }
    }
    var_23 = ((/* implicit */unsigned short) ((-5LL) != (max((((/* implicit */long long int) var_12)), (var_18)))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) ((23LL) > (((/* implicit */long long int) 1720577206U))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6086628314581656283LL)) ? ((-(-6086628314581656283LL))) : (((/* implicit */long long int) arr_4 [i_2] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_2] [i_2])))))) : (((/* implicit */int) ((((/* implicit */int) max(((short)11295), ((short)16352)))) >= (((/* implicit */int) (unsigned short)65525)))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-3360), (arr_7 [i_2]))))) >= (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (6086628314581656283LL)))));
        var_26 = ((/* implicit */unsigned int) arr_7 [i_2]);
    }
    var_27 += var_9;
}
