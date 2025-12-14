/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235560
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16320))) | (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        var_17 = ((/* implicit */unsigned long long int) var_0);
        var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16320)) ? (arr_0 [i_0 + 1]) : (var_10))));
    }
    var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 933244263)) ? (3010189568U) : (((/* implicit */unsigned int) var_11))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_4)))) | (((/* implicit */long long int) max((var_0), (((((/* implicit */int) var_5)) << (((var_0) + (408562663)))))))))))));
}
