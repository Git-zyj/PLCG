/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26918
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) -1180427537)), (5U)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */unsigned long long int) 694128798U)) < (arr_1 [i_0])))) >> (((((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)10])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) - (75)))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)43951)) ^ (((/* implicit */int) (unsigned char)228))));
        var_17 |= ((/* implicit */short) var_15);
        var_18 -= min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)43928)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    var_19 = ((/* implicit */unsigned int) var_3);
}
