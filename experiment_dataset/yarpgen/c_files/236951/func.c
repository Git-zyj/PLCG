/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236951
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
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) 2558695847U));
        var_13 += ((/* implicit */unsigned short) (signed char)-114);
    }
    for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_8);
        var_14 = ((/* implicit */short) arr_1 [i_1 - 3]);
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (_Bool)1)))))) ^ (min((arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2]), (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2])))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 1736271448U)) ? (arr_7 [i_1] [i_2] [i_2]) : (arr_0 [i_1])))));
        }
        arr_10 [i_1] &= ((/* implicit */signed char) ((int) ((short) arr_4 [i_1 - 2])));
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_18 [i_3] [(signed char)11] [i_3] = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5] [i_3] [i_3]))))), (arr_4 [i_1 + 4]))));
                        arr_19 [i_1] [i_1] [i_1] [15LL] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_4]);
                        var_16 -= ((/* implicit */long long int) (+((~(arr_0 [i_5])))));
                        var_17 = ((/* implicit */unsigned short) 1736271453U);
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((((/* implicit */int) arr_11 [i_6])) / ((+(((/* implicit */int) arr_11 [i_6])))));
        arr_23 [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 130023424ULL)))));
        arr_24 [i_6] |= ((/* implicit */short) var_6);
        var_18 |= ((/* implicit */unsigned long long int) arr_11 [(short)5]);
    }
    var_19 |= ((/* implicit */long long int) max((min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((short) 18446744073579528191ULL))))), (((/* implicit */unsigned long long int) var_0))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18446744073579528191ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (130023411ULL)))))));
}
