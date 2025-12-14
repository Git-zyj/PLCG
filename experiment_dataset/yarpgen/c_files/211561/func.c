/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211561
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_3))));
    var_21 = ((/* implicit */int) var_8);
    var_22 = ((/* implicit */signed char) var_19);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_4 [i_0] [i_1 - 1]))))));
                var_23 = ((/* implicit */_Bool) (((-(min((((/* implicit */long long int) var_13)), (arr_4 [i_0] [(_Bool)1]))))) * ((((!(((/* implicit */_Bool) 2940375386126040233LL)))) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
            }
        } 
    } 
}
