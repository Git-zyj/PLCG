/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41200
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
    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))) : (var_0)));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)17214)) ? (((/* implicit */int) (unsigned short)39659)) : (((/* implicit */int) (unsigned short)48307)))) != (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1])) == (min((((/* implicit */int) var_14)), (arr_5 [i_2 + 2] [i_2 - 3] [i_2 - 3])))));
                    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max(((unsigned short)48321), (((/* implicit */unsigned short) ((short) var_11)))))) : (((/* implicit */int) max((arr_4 [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned short) ((unsigned char) (signed char)-91))))))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
                    var_22 = ((/* implicit */int) arr_3 [i_1]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (var_0)))) : (var_5)));
}
