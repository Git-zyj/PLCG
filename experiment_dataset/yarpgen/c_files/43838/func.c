/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43838
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (max((arr_3 [i_0]), (((/* implicit */long long int) arr_1 [6ULL] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (arr_1 [i_0] [i_0])))) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_8)))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_0 [(unsigned char)10] [(unsigned char)10])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) << (((arr_1 [i_0] [i_0]) + (1394933357))))))));
        var_21 = ((/* implicit */short) min((var_21), (((short) arr_3 [6ULL]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_22 -= ((/* implicit */unsigned char) ((var_5) * (arr_7 [i_2] [i_2])));
            arr_8 [i_1] = arr_6 [(short)3] [i_1] [i_1];
        }
        for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_3 + 4] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10615))) : (9223372036854775807LL)));
            arr_11 [0ULL] [i_3 + 1] [0ULL] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) != (3153673671396883312ULL));
            var_24 = ((/* implicit */_Bool) arr_4 [i_3 + 4]);
            arr_12 [i_1] = ((/* implicit */unsigned short) var_7);
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_25 = (!(((/* implicit */_Bool) (+(arr_5 [i_4] [15])))));
            arr_17 [i_1] [i_4] = ((/* implicit */signed char) 3026712511U);
        }
        var_26 -= ((/* implicit */unsigned long long int) var_11);
    }
    var_27 = var_12;
}
