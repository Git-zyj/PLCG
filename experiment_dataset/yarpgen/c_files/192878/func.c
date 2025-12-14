/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192878
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
    var_12 = ((/* implicit */int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (var_6) : ((+(var_0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)65523))))) : (((/* implicit */int) ((var_11) != (var_0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (8796093022207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (arr_2 [i_0])))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) ((short) arr_2 [i_0])))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) % (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */long long int) ((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(short)4] [i_0]))))) : (max((arr_0 [i_1]), (arr_0 [i_0]))))))));
                var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) min((arr_3 [i_0]), (arr_1 [i_0] [i_0])))) > (((/* implicit */int) ((unsigned short) 18446735277616529409ULL))))))));
            }
        } 
    } 
}
