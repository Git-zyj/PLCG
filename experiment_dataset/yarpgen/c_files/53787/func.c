/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53787
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
    var_10 = ((unsigned long long int) var_8);
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = min((4294967286U), (((/* implicit */unsigned int) (_Bool)0)));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(min(((+(var_2))), (max((var_7), (var_5)))))));
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_8)), (min((0ULL), (((/* implicit */unsigned long long int) 4294967275U)))))), (((/* implicit */unsigned long long int) max((max((arr_1 [(_Bool)0]), (((/* implicit */unsigned int) var_3)))), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_1 [i_0]))))))));
        arr_5 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))), (max((27ULL), (((/* implicit */unsigned long long int) 2008823217U)))));
        arr_6 [i_0] = ((((/* implicit */_Bool) max((171788466U), (3231659780U)))) ? (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_11 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) min((arr_1 [i_1 - 1]), ((+(arr_9 [i_1 - 1])))));
        arr_12 [i_1 - 1] = ((/* implicit */unsigned int) 8279044666766984966ULL);
        arr_13 [i_1 - 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 785716872U)) ? (4294967283U) : (4294967294U))), ((+(max((171788460U), (4123178836U)))))));
    }
    var_12 = ((/* implicit */unsigned int) (~(max((min((24704689643554166ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((1935446055U), (13U))))))));
}
