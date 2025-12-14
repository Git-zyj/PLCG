/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53940
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(short)22] &= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)19470))))) + (max((((/* implicit */unsigned long long int) (short)-19478)), (arr_1 [(short)8]))));
        arr_3 [i_0] [i_0] = ((short) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_16 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_14))))))), (arr_0 [(short)14])));
        var_17 = ((/* implicit */unsigned long long int) max(((short)12511), ((short)5714)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? ((~(arr_0 [i_0]))) : ((+(arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) min((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)19475)))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */short) max(((-(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_9 [i_1]))))), ((-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13743))) : (arr_6 [i_1] [(short)11])))))));
            var_18 ^= ((/* implicit */short) (~((+(arr_0 [i_2])))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))) ^ (((/* implicit */int) ((_Bool) min((arr_1 [i_1]), (var_5)))))));
        }
    }
    var_19 = ((/* implicit */short) (~((~(((/* implicit */int) ((short) var_10)))))));
}
