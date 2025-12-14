/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31052
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
    var_18 = var_3;
    var_19 = 4360485855179800214ULL;
    var_20 = ((/* implicit */unsigned int) max((max((max((((/* implicit */long long int) var_2)), (9223372036854775807LL))), (min((((/* implicit */long long int) 740078223U)), (var_15))))), (((var_8) & (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */int) (short)24281)) : (((/* implicit */int) var_2)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) ((-8893232423268095681LL) < (((/* implicit */long long int) ((2147483642) - (((/* implicit */int) (short)24281))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = -8642624700791738170LL;
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-25335))))) | (((/* implicit */int) ((2342747280872682490LL) != (8642624700791738168LL))))));
        }
        arr_7 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */short) (((-(var_12))) ^ (arr_9 [i_2])));
        var_22 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) arr_8 [i_2])))));
    }
    for (int i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) ((-8642624700791738159LL) > (((/* implicit */long long int) ((/* implicit */int) ((min((arr_10 [i_3]), (((/* implicit */long long int) (unsigned short)65525)))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)66))) != (var_11)))))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 7342421222023335116LL))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) (unsigned char)255))))) : (((/* implicit */int) arr_11 [i_3] [i_3]))));
        arr_14 [i_3] [14LL] = ((/* implicit */short) ((long long int) min((((((/* implicit */long long int) ((/* implicit */int) (short)24281))) / (8642624700791738155LL))), (((/* implicit */long long int) arr_11 [i_3] [i_3])))));
        arr_15 [i_3] = ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3 + 2]))) | (var_12))) & (((((var_15) == (((/* implicit */long long int) 842438150)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))) : (min((1453414726741698529LL), (((/* implicit */long long int) arr_8 [i_3])))))));
    }
}
