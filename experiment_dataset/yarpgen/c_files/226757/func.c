/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226757
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 2059627633)) ? (min((((/* implicit */int) (_Bool)0)), (var_4))) : (((var_14) ? (((/* implicit */int) (_Bool)1)) : (1517706041)))))));
        arr_2 [i_0] = max((((/* implicit */long long int) -1882239916)), (7901218352913749781LL));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = max(((-2147483647 - 1)), (((/* implicit */int) arr_3 [i_1 + 1] [i_1])));
        var_19 = min((max((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) 8357743433096119802ULL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [7LL] [i_1])))))), (((/* implicit */int) min((arr_3 [i_1 - 1] [i_1 + 1]), (arr_3 [7ULL] [i_1])))));
        var_20 = arr_4 [i_1 - 1];
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */int) (_Bool)1))))) ? (max((var_17), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)15)))))))) ? (((long long int) var_16)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            {
                var_22 *= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 7085457764934827420ULL)) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [i_2])))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_3] [i_2] [i_2])), (11821672548372892753ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                arr_12 [i_2] = ((/* implicit */int) arr_0 [i_2]);
            }
        } 
    } 
}
