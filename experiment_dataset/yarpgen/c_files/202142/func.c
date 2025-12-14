/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202142
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [13] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))) || (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_0 [(short)8])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_2 [i_0]))))))))));
                var_18 = ((/* implicit */long long int) (+(((((/* implicit */int) var_17)) + (((/* implicit */int) arr_1 [i_0] [(unsigned char)12]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))))))) >> (((var_12) - (10904762673008815520ULL)))));
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)-3870), (((/* implicit */short) var_6))))) || (var_0)))), ((unsigned short)55843)));
}
