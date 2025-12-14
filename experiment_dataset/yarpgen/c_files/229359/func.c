/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229359
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7894569161572063566ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) : (0LL)))) ? (((unsigned long long int) 7894569161572063566ULL)) : (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_14 [(short)20] [i_0] [i_2] [(short)19] [i_4] [i_4] = ((((/* implicit */_Bool) 10552174912137488045ULL)) ? (arr_10 [i_0] [i_1 - 1] [i_2] [16U] [i_0]) : ((+(376311000U))));
                            arr_15 [i_0] [i_0] [(short)2] [17LL] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (signed char)87));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 4294967295U))));
                            arr_16 [i_0 + 2] [10LL] [10LL] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */int) 0LL);
                            arr_17 [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [17U] = ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_0] [i_0] [i_3])))) ? (((/* implicit */long long int) ((int) -557411528))) : (7693547990528388067LL));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 7693547990528388067LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 2]))) : (2882561873U))))));
            var_22 = ((((/* implicit */_Bool) ((int) (unsigned short)11998))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [20] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 1]))) : (((((/* implicit */_Bool) (unsigned char)95)) ? (7693547990528388067LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [(signed char)17]))))));
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_22 [i_0 - 1] [i_0] = ((/* implicit */long long int) (-(4294967295U)));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31189)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1934888462U)))) ? (0U) : (arr_10 [i_0] [i_5] [i_0] [i_0 - 1] [i_0 + 4])));
        }
        var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -268435456)) ? (0) : (((/* implicit */int) (short)-29293))))));
    }
    var_25 = ((/* implicit */unsigned long long int) (unsigned char)124);
    var_26 = ((((/* implicit */_Bool) var_0)) ? (max((((unsigned int) var_12)), (((/* implicit */unsigned int) ((short) var_15))))) : (var_15));
    var_27 = ((/* implicit */signed char) (short)31188);
}
