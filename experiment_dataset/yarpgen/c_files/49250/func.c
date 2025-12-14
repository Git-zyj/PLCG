/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49250
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
    var_15 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_5 [i_0 + 2] [i_1 + 2] [i_2 - 1]), (arr_5 [i_0 + 2] [i_1 - 1] [i_2 - 1]))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max(((_Bool)1), (((((/* implicit */_Bool) min(((unsigned short)2672), (((/* implicit */unsigned short) arr_0 [i_0 + 4]))))) && (((/* implicit */_Bool) var_11)))))))));
                    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_0 [i_1 - 1]), (var_6))))));
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_12));
    }
    for (int i_3 = 3; i_3 < 13; i_3 += 3) 
    {
        var_21 += ((/* implicit */unsigned char) ((signed char) var_0));
        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), ((((_Bool)1) ? (arr_2 [i_3] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2691))) - (-211235172763614433LL)))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_2 [i_3 + 3] [i_3 - 1]))))));
        arr_11 [i_3 - 3] = arr_9 [i_3];
        var_24 = ((/* implicit */unsigned char) ((((_Bool) arr_0 [i_3 - 1])) ? ((+(((/* implicit */int) arr_5 [i_3] [(_Bool)1] [i_3])))) : (((/* implicit */int) var_13))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)11480)) - (11463)))));
}
