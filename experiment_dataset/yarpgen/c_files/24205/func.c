/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24205
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
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_15)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_18))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((34359738368ULL), (17450172193920602144ULL))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_0 - 2] [i_1]))) > (arr_0 [(unsigned char)14])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */long long int) min((((((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_3 + 2])) / (((/* implicit */int) arr_4 [i_2 + 1] [15ULL] [i_3 + 1])))), (((/* implicit */int) (short)(-32767 - 1)))));
                                var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_4 [(unsigned char)9] [(unsigned char)9] [i_4])) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(signed char)14] [(_Bool)1])))) || (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_2 [i_0] [(short)3])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_5 [i_3 + 1] [0])) ? (((/* implicit */int) arr_10 [6ULL] [i_1] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_5 [(unsigned short)9] [(short)10])))) : (((/* implicit */int) arr_8 [i_0] [i_2 - 2] [i_3 + 1])))))));
                                var_24 = ((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_4]);
                                var_25 = ((((/* implicit */_Bool) arr_10 [i_0] [21U] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((arr_3 [i_3] [i_3 + 2]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3])) : (((/* implicit */int) var_14)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned short) (short)(-32767 - 1)));
                }
            } 
        } 
    } 
}
