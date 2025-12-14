/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19826
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(max((2367016941988744083ULL), (((/* implicit */unsigned long long int) -8573963021373049305LL)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)2] [i_1] = ((/* implicit */signed char) min((-1034600020758898710LL), (-1034600020758898710LL)));
                var_16 = arr_3 [i_0];
                var_17 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) (unsigned short)41930)));
                var_18 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((min((var_10), (arr_2 [(_Bool)1] [(_Bool)1]))), (((/* implicit */long long int) (signed char)-26))))) & ((((-(arr_3 [i_1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_7))));
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14139)) ? (-684324884592217986LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-111))))))));
    var_21 = ((/* implicit */unsigned short) 1034600020758898705LL);
}
