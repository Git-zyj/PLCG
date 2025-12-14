/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36636
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
    var_19 = ((/* implicit */unsigned char) var_8);
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)-114))))), (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (var_11))) : (((/* implicit */long long int) ((var_13) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))))))));
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(-1992649629)))) ? ((-(var_1))) : (((/* implicit */long long int) max((1381613580U), (((/* implicit */unsigned int) 1681779902))))))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [5] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_2 [i_2]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) 3101874433U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)16] [i_0]))) : (var_16))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [17ULL]) : (-1681779902)))))));
                    var_22 = ((/* implicit */signed char) ((((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) == (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (signed char)115)))))))));
                    var_23 += var_13;
                }
            } 
        } 
    } 
}
