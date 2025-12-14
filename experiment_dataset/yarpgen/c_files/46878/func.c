/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46878
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((-(var_13))) < (((/* implicit */int) (unsigned char)82)))))));
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_14))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(min((arr_0 [14] [i_0]), ((+(var_10)))))));
    }
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~(max((((/* implicit */long long int) var_17)), (min((5121302609012332086LL), (((/* implicit */long long int) var_4)))))))))));
}
