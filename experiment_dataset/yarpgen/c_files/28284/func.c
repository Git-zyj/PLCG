/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28284
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
    var_16 = var_6;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [(short)14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) (short)-23034))))) ? (max((arr_0 [(unsigned char)15] [i_0]), (((/* implicit */long long int) (unsigned char)0)))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (3752220432293164644ULL))) & ((+(16ULL)))))));
                var_18 *= ((/* implicit */unsigned char) arr_1 [i_0] [18LL]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_4 [i_2] [i_3] [i_4])))) < (min((((/* implicit */int) ((((/* implicit */int) arr_3 [6] [i_3])) >= (((/* implicit */int) arr_6 [i_4] [i_4]))))), ((+(((/* implicit */int) arr_7 [i_2])))))))))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63883))) : (arr_10 [i_2] [i_4]))) * (((arr_8 [i_2] [i_3] [i_3]) / (arr_9 [i_2] [i_2] [i_2])))))) ? (((((arr_1 [i_3] [i_3]) ? (arr_8 [i_2] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4]))))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_3]), (arr_3 [i_3] [i_3]))))))) : (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (_Bool)0))))))))))));
                }
            } 
        } 
    } 
}
