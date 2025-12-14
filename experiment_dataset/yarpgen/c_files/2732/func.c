/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2732
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (arr_2 [i_0] [i_0])));
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) 3650962362U))), (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) 1554117731700830795ULL))), (16892626342008720828ULL))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            var_20 = ((/* implicit */_Bool) ((long long int) arr_2 [12U] [i_0]));
            var_21 = ((/* implicit */unsigned short) var_10);
            var_22 += ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((int) (unsigned char)80))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_23 = ((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_6))))) ? (max((var_7), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (max((((1554117731700830799ULL) + (((/* implicit */unsigned long long int) -1031484301)))), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])))));
        arr_8 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (16892626342008720806ULL))) != (((/* implicit */unsigned long long int) 1031484308))))), (((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) max(((unsigned short)64688), (((/* implicit */unsigned short) (unsigned char)82)))))))));
        var_24 = ((/* implicit */unsigned short) ((var_7) != (((/* implicit */unsigned long long int) var_0))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(1031484320))), (((/* implicit */int) ((unsigned char) var_10)))))) || (((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (signed char)-23))))) != (((int) var_15))))));
}
