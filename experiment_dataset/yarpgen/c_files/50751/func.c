/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50751
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((-1711711756), (((/* implicit */int) (unsigned char)63))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) min((arr_3 [i_0] [i_0]), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (arr_1 [i_0])))), ((-(8921250391601987310LL)))))));
            var_20 = ((/* implicit */unsigned int) ((min((min((var_12), (((/* implicit */long long int) (unsigned char)138)))), (arr_3 [i_1 + 3] [i_1 + 3]))) & (((long long int) arr_6 [i_0] [(unsigned char)11]))));
            arr_10 [i_0] [1ULL] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) -8921250391601987311LL)))));
        }
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */int) arr_13 [i_2] [i_2])), (var_10))))) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) max((arr_8 [i_2] [i_2] [i_2]), (arr_8 [i_2] [i_2] [i_2]))))));
        arr_14 [i_2] [i_2] = min((-2062152590), (((/* implicit */int) (unsigned char)193)));
        var_22 = ((/* implicit */unsigned long long int) arr_3 [i_2] [(unsigned char)7]);
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) / (8921250391601987310LL)));
        var_24 *= ((/* implicit */signed char) arr_1 [i_3]);
    }
    var_25 = ((/* implicit */signed char) var_11);
    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)72))));
    var_27 *= ((/* implicit */signed char) var_3);
}
