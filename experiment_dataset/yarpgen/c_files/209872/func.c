/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209872
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
    var_11 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240))))) >= (var_8)))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)146)) ? (0U) : (4224258805U)));
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_2)), (var_0)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)7] [i_0] [(unsigned short)7] = ((min((max((-574902799), (var_8))), (((/* implicit */int) (short)-2253)))) < (((/* implicit */int) var_2)));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((/* implicit */int) ((arr_4 [i_0 + 1]) >= (((/* implicit */long long int) min((3286156326U), (((/* implicit */unsigned int) arr_2 [i_0])))))))), (((((/* implicit */int) ((unsigned short) var_5))) << (((((((/* implicit */_Bool) 9973640933924766239ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) - (18443))))))))));
            }
        } 
    } 
}
