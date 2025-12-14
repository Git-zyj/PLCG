/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23163
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)158)) ? (2192630885U) : ((~(2102336411U)))));
        var_13 = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((3573036912U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))))));
            arr_5 [2LL] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_0 [i_1]);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])) / ((+(arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((arr_0 [i_1]) <= (arr_0 [i_0]))))));
        }
        var_15 |= (~(2102336410U));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_10 [8U] |= (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65532)));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned short)65535)))))));
    }
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (var_11) : (((/* implicit */unsigned int) (+(var_5))))))) ? (max((10010168765703367038ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) var_10)))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((min((2192630891U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) var_7)) : (((var_11) | (var_3))))))));
}
