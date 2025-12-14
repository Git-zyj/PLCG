/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213406
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
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 *= ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (min((arr_1 [i_0] [5U]), (((/* implicit */unsigned long long int) var_10)))))) && (((/* implicit */_Bool) max((arr_0 [i_1 + 2]), (arr_0 [i_1 + 2])))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) max((min((((/* implicit */long long int) (!((_Bool)1)))), (arr_2 [i_1 + 1] [i_1 - 2]))), (((/* implicit */long long int) min(((+(var_10))), (((/* implicit */unsigned int) min((((/* implicit */short) var_16)), ((short)11806)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((short) var_16))))) <= (((((/* implicit */int) (short)2047)) * (((/* implicit */int) (short)21182))))));
        var_21 = ((/* implicit */_Bool) 7324612109635584056ULL);
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max(((_Bool)1), (arr_7 [i_3] [i_3])))), (16109952987396445723ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)2047)), (2336791086313105907ULL)))) ? (((arr_2 [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21184)))))))))));
        var_23 = ((/* implicit */unsigned long long int) (short)-19618);
        var_24 *= ((_Bool) ((arr_11 [i_3]) ? (var_3) : (((/* implicit */unsigned long long int) var_10))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
    {
        var_25 = ((/* implicit */long long int) ((arr_1 [1ULL] [i_4 + 1]) > (arr_1 [i_4 + 1] [i_4 - 2])));
        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
    }
}
