/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3782
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
    var_15 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))));
    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -5520459514402349869LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) : (var_11))), ((~(((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) -1))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) ((signed char) min((arr_4 [i_2 + 1] [i_1]), (arr_4 [i_0] [i_1]))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_2] [(unsigned char)3] [(unsigned char)3])), (-5520459514402349863LL)))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)94)) ? (1259834584) : (((/* implicit */int) (short)-1))));
                    arr_9 [i_1] [i_1] [i_1] [i_0] = ((signed char) min((max((-566865477), (((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) arr_0 [i_2 - 1]))));
                }
            } 
        } 
    } 
}
