/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226874
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
    var_11 = ((/* implicit */int) var_3);
    var_12 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) 5076461053419886856ULL)) ? (942301375820365754ULL) : (942301375820365741ULL)))) > (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (var_1)))) & (((((/* implicit */_Bool) var_8)) ? (var_2) : (10489059591714331907ULL)))))));
    var_13 = ((int) (+(var_9)));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((max((var_7), (var_5))), ((+(var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) var_6)) ? (8338506259618429605ULL) : (var_9))) : (((((/* implicit */_Bool) 8338506259618429605ULL)) ? (10108237814091122011ULL) : (8338506259618429605ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_2 [i_0] [i_1] [i_1]), (arr_2 [i_0] [i_0] [2ULL]))) * (var_10)))) ? (((((/* implicit */_Bool) ((int) 1151029458))) ? (942301375820365751ULL) : (arr_2 [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) 16368)), (18446744073709551605ULL)))));
                var_16 = max((7583597888395812616ULL), (arr_3 [i_0] [i_1]));
                var_17 = ((((/* implicit */_Bool) -1151029455)) ? (max((max((arr_2 [i_0] [i_0] [i_0]), (var_8))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) >= (arr_0 [i_0])))))) : ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
}
