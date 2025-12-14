/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200377
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
    var_14 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1871910712)))) ? (((((/* implicit */_Bool) 54559068813920916LL)) ? (-1871910712) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((15360) >= (((/* implicit */int) (signed char)-33)))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -1871910712)) : (54559068813920916LL))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (var_0)))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (var_1)))))))))));
                var_16 = ((/* implicit */unsigned char) max((max((var_9), (-1871910712))), ((~(((/* implicit */int) var_8))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) (!(((min((((/* implicit */unsigned long long int) var_3)), (var_11))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
}
