/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192974
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_11 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)0)) << (((4251591938U) - (4251591928U))))) ^ (var_1)))), (((((/* implicit */_Bool) ((3747220097428914692ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58)))))) ? (((/* implicit */unsigned long long int) min((4251591938U), (((/* implicit */unsigned int) (_Bool)0))))) : (4349196038105760516ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) arr_1 [i_0]))))) - (min((9223372036854775807LL), (9223372036854775807LL)))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) 4251591938U)))))));
        var_13 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1]))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) max((arr_0 [i_2]), (((/* implicit */short) (unsigned char)0)))))))) && (((/* implicit */_Bool) 4349196038105760519ULL)));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1])))), (arr_4 [i_2 - 1] [i_2]))))));
    }
    var_15 = ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) var_6)), (13817192488763354887ULL))))));
}
