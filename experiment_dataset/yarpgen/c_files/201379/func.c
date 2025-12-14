/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201379
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = min((((/* implicit */unsigned long long int) max((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))), (min((((/* implicit */int) arr_1 [i_0] [i_0])), (var_0)))))), (((max((var_10), (((/* implicit */unsigned long long int) 9145215887071981760LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (4604984602598848323ULL))))))));
                var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (_Bool)0))))) || ((((_Bool)1) || ((_Bool)1))))))) % (max((max((18446744073709551607ULL), (17350856548151858971ULL))), (12ULL))));
                var_13 = ((/* implicit */unsigned int) max((18446744073709551610ULL), (18446744073709551609ULL)));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) min((var_6), (var_6)))) % (max((((/* implicit */unsigned long long int) var_0)), (var_2))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) max((-1), (((/* implicit */int) (_Bool)1)))))))))));
}
