/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236037
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) % (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) 6860600302646513274LL)) | (min((var_9), (((/* implicit */unsigned long long int) (unsigned short)30163)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) 3107756583U))))) ? (((/* implicit */int) (short)923)) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << ((((+((-(((/* implicit */int) var_0)))))) + (106)))));
    var_14 += var_9;
    var_15 = (unsigned char)0;
}
