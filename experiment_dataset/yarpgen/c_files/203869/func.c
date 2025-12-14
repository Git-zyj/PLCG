/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203869
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
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (max((13406792490796912585ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1] [i_0])) && ((_Bool)1)))))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))) - (((((/* implicit */long long int) 775768669U)) + (((arr_2 [i_0] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1])))))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) != (3519198626U))))))) ? ((-(((8339194953079165254ULL) << (((((/* implicit */int) var_0)) - (36672))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max(((-((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) var_8)))))));
}
