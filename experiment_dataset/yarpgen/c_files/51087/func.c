/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51087
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) min((((unsigned long long int) 1505830803U)), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)17447)), (((((/* implicit */_Bool) 13298458415919509387ULL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (short)12583)))))))));
                var_19 *= ((unsigned long long int) arr_3 [i_1 + 1] [i_1 - 1]);
                var_20 += ((/* implicit */int) arr_3 [i_0] [(_Bool)1]);
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((((((/* implicit */_Bool) min((var_14), (((/* implicit */short) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -237276983)) || (((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) ((411035131U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) - (((/* implicit */int) var_11))))));
}
