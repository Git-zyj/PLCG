/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244379
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((unsigned short) (~(-705246130065561372LL)));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [16LL] [16LL] = ((/* implicit */signed char) (+((-((+(((/* implicit */int) (unsigned short)0))))))));
        var_15 = ((long long int) (-(arr_4 [i_1] [i_1])));
        arr_7 [i_1] [i_1] &= ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (signed char)124)))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                for (signed char i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) (~(var_0)));
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6019020327242322741LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)60589))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */signed char) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    var_17 = var_8;
    var_18 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_8)), (var_12)))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) + (6019020327242322726LL)))))));
}
