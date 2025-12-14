/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36014
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
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) || (((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_4 [(unsigned char)7] [i_1])))) < ((~(((/* implicit */int) (unsigned char)17))))))));
                var_14 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1]))) & (16393544738162620804ULL)))))));
                arr_6 [i_1] [i_1 + 2] |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) -1345135424)), (16393544738162620782ULL))), (max((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), (var_12)))));
            }
        } 
    } 
}
