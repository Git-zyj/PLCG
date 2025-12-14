/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36764
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 1340716685)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27931))) : (var_0))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((short) (unsigned short)37577))), (min((var_13), (((/* implicit */unsigned short) (unsigned char)31)))))))));
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) 0U);
                arr_5 [i_1] = ((/* implicit */short) min((1369000722), (((/* implicit */int) (unsigned short)37577))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_0] [(signed char)5])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (-1))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11))))))), (((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) var_12)), (var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)43)))))))))));
}
