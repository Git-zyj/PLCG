/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234881
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
    var_14 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((+(((/* implicit */int) var_1)))))) & ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_4)))) ? ((~(arr_11 [i_0] [i_0] [i_1] [i_1] [i_0 - 1] [i_1] [i_3 + 1]))) : (min((arr_11 [i_0] [i_0] [i_1] [i_0] [i_0 - 1] [i_0] [i_3 - 1]), (((/* implicit */unsigned long long int) var_3))))));
                                arr_13 [i_1] = ((/* implicit */unsigned long long int) ((short) (signed char)-7));
                                arr_14 [i_4] [i_1] [i_0] [i_3] = (-(min(((+(var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)20]))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (short)-13687)) : (((/* implicit */int) (unsigned char)2)))))));
                                arr_15 [i_0] [(short)2] [i_0] [i_3] [i_4] [(short)2] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1982600456U)) ? (arr_5 [i_3] [2] [i_3 + 1]) : (arr_5 [i_0 + 2] [(_Bool)1] [(_Bool)1])))));
                            }
                        } 
                    } 
                    arr_16 [(unsigned short)7] [i_1] [i_2 + 2] = ((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
