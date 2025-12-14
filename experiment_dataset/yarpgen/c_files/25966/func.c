/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25966
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) (unsigned char)126);
        arr_4 [i_0] = -283899660;
        arr_5 [i_0] = ((/* implicit */unsigned short) (+((-(arr_2 [i_0])))));
        var_13 = ((/* implicit */signed char) var_5);
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) -1472725602))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_15 *= ((/* implicit */unsigned short) (signed char)75);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_16 = (unsigned char)19;
                    var_17 = (-(((/* implicit */int) arr_6 [i_1] [i_3])));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) (_Bool)0);
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */int) var_9);
        var_20 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned char)175))))));
        arr_15 [i_4] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 283899660)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((-1472725606) * (((/* implicit */int) (unsigned char)0))))))));
        var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) / (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) min(((unsigned short)7), (((/* implicit */unsigned short) arr_14 [i_4] [i_4]))))) : (((/* implicit */int) (_Bool)1))));
        var_22 ^= min((((/* implicit */signed char) ((((((/* implicit */int) (short)-22646)) | (((/* implicit */int) arr_14 [i_4] [(unsigned short)9])))) > (((/* implicit */int) ((arr_1 [(short)17]) != (((/* implicit */int) arr_14 [i_4] [i_4])))))))), (min((((/* implicit */signed char) (_Bool)1)), (arr_14 [i_4] [i_4]))));
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        arr_18 [0] [0] &= ((/* implicit */signed char) (!((_Bool)1)));
        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) (-((-(arr_2 [i_5])))))), (min((arr_12 [i_5]), (((/* implicit */long long int) arr_2 [(short)2]))))));
        arr_19 [i_5] = ((/* implicit */signed char) arr_1 [i_5]);
        arr_20 [(unsigned char)8] |= ((/* implicit */unsigned short) arr_13 [i_5]);
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))), (9317984152992790699ULL))), (((/* implicit */unsigned long long int) (unsigned short)8913)))))));
    }
    var_25 += var_3;
}
