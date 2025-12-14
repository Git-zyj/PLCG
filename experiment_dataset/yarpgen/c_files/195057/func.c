/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195057
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) & (min((((/* implicit */unsigned long long int) 260096)), (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((long long int) var_10)))) >> (((10909237417341244896ULL) - (10909237417341244869ULL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_2 - 3] [i_1]);
                    var_14 ^= (unsigned short)59003;
                }
            } 
        } 
        var_15 ^= min((min((arr_2 [i_0]), ((~(15964870602591056490ULL))))), (max((arr_7 [i_0] [(unsigned short)18] [i_0] [i_0]), (arr_7 [6U] [i_0] [(unsigned short)16] [i_0]))));
        var_16 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        var_17 |= ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
        arr_11 [i_3] = ((/* implicit */signed char) arr_3 [(unsigned short)7]);
    }
    var_18 ^= ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) ((short) ((int) (signed char)-8))))));
}
