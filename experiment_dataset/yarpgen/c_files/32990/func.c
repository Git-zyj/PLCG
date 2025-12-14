/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32990
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */int) (unsigned char)233)), ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))))));
                    arr_10 [i_2] = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [8ULL] [(_Bool)1] [i_2])), (min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2])), (264241152LL)))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -264241152LL)) ? (-264241152LL) : (-264241152LL))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)58))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned short)15567)) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))))))))));
                    arr_11 [i_2] [i_1] = ((/* implicit */short) max(((((_Bool)0) ? (((((/* implicit */int) (signed char)0)) << (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (_Bool)1)) - (var_6))))), (min((((/* implicit */int) arr_7 [i_0] [i_1])), (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) | (((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_9)))) : (((/* implicit */int) var_2))));
}
