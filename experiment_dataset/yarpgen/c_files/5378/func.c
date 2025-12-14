/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5378
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) -464722426))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) ((unsigned char) -464722426))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1])), (max(((~(2855278481286389329ULL))), (((/* implicit */unsigned long long int) max((var_10), (var_2))))))));
                var_19 += ((((/* implicit */_Bool) (-(arr_5 [i_0] [(signed char)3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */int) (short)-12291)), (1137441905)))))) : (min((((/* implicit */unsigned int) ((unsigned char) 12038975603999938783ULL))), (((unsigned int) (_Bool)1)))));
                var_20 = ((((/* implicit */_Bool) max((min(((signed char)67), (((/* implicit */signed char) var_11)))), (((/* implicit */signed char) ((_Bool) var_1)))))) ? (((arr_2 [i_1 - 1]) << (((arr_2 [i_1 - 1]) - (7366836592681487052ULL))))) : (arr_6 [i_1 + 1]));
                var_21 = ((/* implicit */int) ((long long int) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))));
            }
        } 
    } 
    var_22 += max((var_10), ((~(((((/* implicit */_Bool) 6900532512434367929ULL)) ? (var_2) : (((/* implicit */long long int) var_13)))))));
}
