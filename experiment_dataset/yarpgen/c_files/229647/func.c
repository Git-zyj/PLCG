/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229647
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
    var_12 = ((/* implicit */signed char) ((_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */int) ((((((var_10) ? (var_7) : (((/* implicit */int) var_1)))) | (((/* implicit */int) var_0)))) < (var_8)));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))), (((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_4 [i_1 + 1] [i_1 + 1]), (arr_4 [i_1] [i_1 + 1])))), (arr_0 [i_1 + 1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_1 + 1]))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : ((-(arr_0 [i_1])))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((~(min((arr_0 [i_3]), (((/* implicit */unsigned long long int) -1787055845)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_1 [i_3] [i_3])) : (arr_0 [i_3])))) ? (((((/* implicit */_Bool) arr_9 [i_3] [9])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3])))) : (((/* implicit */int) arr_12 [i_3] [i_3])))) + (17252))))))));
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)49523)))))) ? (max((min((((/* implicit */unsigned long long int) arr_2 [i_3])), (arr_0 [11U]))), (((/* implicit */unsigned long long int) ((signed char) (signed char)58))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_3] [i_3])), (arr_1 [i_3] [i_3]))))));
    }
}
