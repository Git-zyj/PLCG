/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228648
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((-8242016027865061072LL) + (9223372036854775807LL))) << (((((arr_1 [i_0] [15ULL]) + (1800459055))) - (43))))) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((min((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_0] [i_0]))) | (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))) : (((/* implicit */long long int) 1238625665))));
        var_11 = min((max((arr_1 [i_0 + 3] [i_0 + 3]), (-1238625688))), (((((/* implicit */_Bool) ((int) 8242016027865061059LL))) ? (((/* implicit */int) arr_2 [i_0])) : (1238625665))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) arr_2 [i_0 + 1]);
                        var_13 = ((/* implicit */long long int) min(((+((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1])))))), (((((/* implicit */int) arr_10 [i_2] [i_2 - 3] [i_2 + 3] [i_2 - 4])) * (((/* implicit */int) arr_4 [i_2 - 1]))))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_3)), (var_1))), (((/* implicit */long long int) var_6))))) ? ((+(var_1))) : (((/* implicit */long long int) ((int) max((((/* implicit */int) var_6)), (var_8))))));
}
