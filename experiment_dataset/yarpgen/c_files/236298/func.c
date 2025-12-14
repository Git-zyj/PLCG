/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236298
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
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), (var_0)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)98))))), (((((unsigned int) var_19)) >> (((((((/* implicit */_Bool) var_2)) ? (2222347601U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))))) - (2222347593U))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 + 1])) ? (((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19425))) : ((-(var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                var_21 |= ((/* implicit */signed char) (~(var_19)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [9ULL])))))))) ^ (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2] [i_2 - 1])))));
        var_23 = ((/* implicit */int) ((unsigned char) var_7));
        arr_9 [i_2] = ((long long int) (_Bool)1);
        arr_10 [i_2 - 1] [10LL] &= ((/* implicit */short) ((unsigned long long int) -926993545786515587LL));
        arr_11 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2 - 1]))));
    }
}
