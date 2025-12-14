/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195233
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [i_3] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-20))))) ? ((~(arr_2 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)20)) < (((/* implicit */int) (short)-4932))))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))) ? (min((1125899906840576ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_4])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-20))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0])))));
                                var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(0U)))) ? (min((18446744073709551597ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))), (((/* implicit */unsigned long long int) min((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_0 [i_2 - 1] [i_2 - 1]))))));
                                arr_11 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((short) (~(45ULL))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_7 [i_4] [(unsigned char)7] [i_4] [i_4])))) * (((/* implicit */int) (_Bool)1))))) : (((((_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(6176671118695018315LL)))) : (((((/* implicit */_Bool) (unsigned short)3157)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))))));
                                var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_4])) & (((/* implicit */int) (short)0)))))))) ^ ((~((~(var_11))))));
                                var_16 = ((/* implicit */long long int) (short)960);
                            }
                        } 
                    } 
                } 
                var_17 |= ((/* implicit */signed char) ((short) var_9));
            }
        } 
    } 
    var_18 += ((/* implicit */_Bool) var_0);
    var_19 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
}
