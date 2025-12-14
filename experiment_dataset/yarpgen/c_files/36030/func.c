/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36030
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-5705433790789404743LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24789)))))) ? (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) 1048575)))) : (max((((/* implicit */unsigned long long int) 2147483647)), (arr_0 [i_1 + 1]))))), (((/* implicit */unsigned long long int) 299798212)))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((5369880228200234682ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (4670012671285669931LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)159))))))))));
                arr_5 [i_0] [i_1] [i_1 - 2] = max((((/* implicit */unsigned int) (unsigned char)97)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32336))) % (var_11))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((/* implicit */int) var_12)), (((int) var_11)))))));
}
