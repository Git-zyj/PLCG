/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2412
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [4LL])) / (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_0)))));
        arr_2 [i_0] = ((/* implicit */short) var_10);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)14455)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_14 = 0U;
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) 16503080858178603478ULL);
                    arr_11 [i_1] [i_3] = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 1023U)) ? (1943663215530948137ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16382))))) : (((/* implicit */unsigned long long int) var_0)));
                    var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [i_1] [3ULL] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_1]))))));
                    arr_12 [i_1] [i_3] [i_3] = ((/* implicit */int) 1004U);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_2)), (10259530194260704283ULL))))));
}
