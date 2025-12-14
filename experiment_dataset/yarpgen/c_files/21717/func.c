/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21717
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)45133)) : (((/* implicit */int) (unsigned short)62114))))), (max((((/* implicit */unsigned long long int) var_13)), (7723863932245007949ULL))))) < (((/* implicit */unsigned long long int) var_14))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_3 [8ULL] [8ULL] [i_1]), (((/* implicit */unsigned int) (unsigned char)211))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (_Bool)1)))) * ((((+(var_5))) >> (((/* implicit */int) (_Bool)1))))));
                var_18 += ((/* implicit */unsigned char) ((((((((/* implicit */long long int) var_0)) & (var_2))) & (max((var_2), (((/* implicit */long long int) (_Bool)1)))))) >> (((/* implicit */int) (unsigned char)16))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
}
