/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239963
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1699561302)) | (var_2)))) ? (((((/* implicit */_Bool) (unsigned short)51995)) ? (((/* implicit */int) var_5)) : (var_4))) : (((/* implicit */int) min((var_11), ((unsigned short)51993)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = arr_0 [i_0 + 1] [i_1 + 2];
                var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) max((var_15), (arr_3 [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31206)) ? (arr_2 [(unsigned short)20]) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((-(arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51990))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13528)) + (((/* implicit */int) (unsigned short)52005)))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_1 [(unsigned short)18]))));
                var_23 = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_4);
    var_25 = ((/* implicit */int) ((((var_18) != (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)13757)) != (((/* implicit */int) (unsigned short)52005))))) * (((/* implicit */int) ((var_1) >= (var_13))))))) : (min((((/* implicit */long long int) ((int) var_8))), (4792901030784332298LL)))));
    var_26 = var_11;
}
