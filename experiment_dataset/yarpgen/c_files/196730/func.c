/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196730
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [(short)2] = ((/* implicit */long long int) ((signed char) ((max((((/* implicit */long long int) var_16)), (67108863LL))) | (min((8954767574025107683LL), (((/* implicit */long long int) var_5)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_2 [i_0] [5LL])))), ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [i_3]))))))) ? (((long long int) ((((/* implicit */_Bool) arr_3 [7LL])) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) arr_2 [i_2] [3]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) -67108869LL)) | (var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_4 [i_1 + 4] [i_2] [i_3]))))) : ((+(((/* implicit */int) (unsigned short)57318))))));
                            var_20 = ((/* implicit */unsigned long long int) (short)15604);
                            var_21 = arr_9 [i_2];
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (signed char)124);
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) ((18446744073709551607ULL) <= (((/* implicit */unsigned long long int) var_8)))))))) > (var_12))))));
    var_24 = ((/* implicit */signed char) var_12);
}
