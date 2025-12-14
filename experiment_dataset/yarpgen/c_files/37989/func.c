/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37989
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
    var_14 += ((/* implicit */_Bool) ((long long int) ((unsigned char) ((unsigned long long int) 3954055059U))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]))) ? ((~((~(var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [4U] [i_3] [7ULL] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) * (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [2ULL] [i_1] [i_2 + 1] [(signed char)6] [i_4])))))))));
                                var_16 = ((/* implicit */signed char) (~(((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))) % (((long long int) arr_0 [i_0]))))));
                                var_17 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)53))));
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))))) * (((long long int) (signed char)101)))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2] [i_3] [i_1])))))))));
                                var_19 = ((/* implicit */unsigned long long int) (~(arr_7 [i_1] [i_1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
