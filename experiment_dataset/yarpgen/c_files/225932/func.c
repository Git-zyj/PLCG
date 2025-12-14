/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225932
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 506834145)) : (var_13)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))))), (((/* implicit */long long int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = min((((/* implicit */long long int) (-((+(((/* implicit */int) var_12))))))), (min((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_10);
    }
    var_16 = ((/* implicit */short) max((var_13), (7664708247755136985LL)));
}
