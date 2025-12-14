/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197883
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
    var_11 -= ((/* implicit */int) (short)12);
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)5848)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-6)))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) 2048U);
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2))))))))))));
    }
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
}
