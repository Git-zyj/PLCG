/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19771
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2 + 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 1])) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0])), ((unsigned short)0))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 1] [i_1 - 1]))) : (max((((/* implicit */unsigned int) (signed char)33)), (2775256110U)))))));
                    arr_9 [i_0] [i_2 - 1] = ((/* implicit */_Bool) min((max(((unsigned short)17890), (min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 1] [i_2])))))), (((/* implicit */unsigned short) arr_7 [i_0] [i_2 - 2] [i_2 - 2]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551596ULL), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_14)), (var_9))))) : (((((/* implicit */_Bool) (unsigned short)57904)) ? (15265047570434646531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230)))))))) ? (min((((/* implicit */unsigned long long int) 3142199008U)), (max((10702587929408048577ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (var_13))))));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8960525800527826199ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) : (1909217478U)))), (max((((/* implicit */unsigned long long int) (unsigned short)2186)), (var_6)))));
}
