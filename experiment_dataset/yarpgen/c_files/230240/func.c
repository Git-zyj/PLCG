/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230240
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (14562925455319689604ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)87))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (arr_2 [i_0])))) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0])), (var_12)))) | (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_2 - 1] [i_2 - 1]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) (signed char)97))))) ? (((/* implicit */unsigned long long int) 3248751010817193259LL)) : ((+(10242047213227216454ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (min((var_4), (((/* implicit */long long int) (signed char)67)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)12)))))))));
    var_19 = ((/* implicit */_Bool) var_10);
}
