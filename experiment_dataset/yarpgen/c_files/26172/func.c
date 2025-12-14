/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26172
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
    var_19 &= var_2;
    var_20 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_1 [(short)8] [i_0]), (arr_1 [i_0] [(short)3])))), (((((/* implicit */int) arr_1 [i_0] [i_0])) | (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */short) min((min((((((/* implicit */_Bool) 6668775799339892258LL)) ? (6668775799339892285LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24232))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) var_2))))))), (((/* implicit */long long int) var_9))));
    }
    var_22 -= ((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)));
}
