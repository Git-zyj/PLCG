/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229552
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
    var_17 = var_16;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 -= arr_2 [(_Bool)1];
                var_19 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [(unsigned short)4] [i_0] [i_0])))) > (((long long int) (short)-8059))))) ^ (((/* implicit */int) var_3))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_5 [i_1 - 1] [(short)8] [i_0]) ? (((/* implicit */int) arr_1 [(short)6])) : (((/* implicit */int) (unsigned short)1297))))), (max((7263603142051784366LL), (((/* implicit */long long int) arr_1 [(unsigned short)0]))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [2LL]))) * (((long long int) arr_2 [10LL])))) : (2399485322295237646LL))))));
                arr_6 [i_0] [i_1 - 1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0]), ((short)-15873)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 1]))))) ? ((+(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) max((arr_4 [i_0] [i_0]), (var_12))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0]), ((short)-15873)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 1]))))) ? ((+(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) max((arr_4 [i_0] [i_0]), (var_12)))))))));
                var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) min(((short)15873), (((/* implicit */short) (_Bool)0))))), ((unsigned short)0)));
            }
        } 
    } 
}
