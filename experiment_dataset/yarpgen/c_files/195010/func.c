/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195010
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
    var_10 = ((/* implicit */short) ((_Bool) var_5));
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (((((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) < (var_9)))))) + (2147483647))) >> (((/* implicit */int) ((_Bool) var_8))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)12288))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [(_Bool)0]), (var_3))))) : (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) var_7)))) & (min((var_6), (((/* implicit */int) arr_0 [i_1] [i_0]))))));
                arr_8 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) - (-744130534975780830LL)))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) 3064824592197669526ULL)) || ((_Bool)1)))), (min((((/* implicit */int) var_3)), (var_6))))) : (((/* implicit */int) (_Bool)1)));
                arr_9 [i_1] = ((/* implicit */_Bool) (+(6480529075237803250LL)));
            }
        } 
    } 
    var_13 = min((-1064726778), (-1064726778));
}
