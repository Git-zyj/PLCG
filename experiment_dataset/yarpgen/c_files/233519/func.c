/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233519
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)-71))) && (((/* implicit */_Bool) ((long long int) var_15)))))) : ((~(((/* implicit */int) (signed char)-84)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */unsigned short) 8626012301344007963ULL);
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_3 [i_0]))));
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned long long int) arr_2 [i_0] [i_0]))))) ? (min((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) (signed char)-74)))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)70)))) - (((/* implicit */int) ((signed char) (unsigned short)38230))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(unsigned short)9] [i_2 - 1] [i_2 + 1]))))) ? ((~(arr_6 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_3 - 2]))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1] [i_2])) ? (8388607) : (arr_6 [i_1] [i_2 + 1] [i_2] [i_3 + 1])))));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -2424031395265105618LL))) ? (2424031395265105610LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2424031395265105617LL)) || (((/* implicit */_Bool) 2935593244U))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_8 [i_3 + 1])))) | (((/* implicit */int) (signed char)70))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
