/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22086
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_10 -= (~((~((-(((/* implicit */int) arr_13 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_3] [i_4 + 2])))))));
                                var_11 ^= ((/* implicit */int) var_8);
                                var_12 += ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 + 2] [(_Bool)1])), (arr_12 [(signed char)0] [i_1] [i_2] [i_3] [i_4])))) != (((((/* implicit */int) arr_12 [i_1 - 3] [(unsigned char)12] [(unsigned short)12] [i_4 + 1] [i_4])) * (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1] [(_Bool)1] [i_2]))))));
                                var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_0] [i_0] [i_0 + 2] [i_1 + 2] [i_4 + 2] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_4 - 2]))))))))) : (((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 3] [i_1 + 3] [i_1 + 3] [i_4 - 1] [i_4 + 2]))) : (((arr_5 [(_Bool)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [(_Bool)1] [i_4]))) : (arr_6 [i_1] [i_2] [(unsigned char)4] [i_4 + 1])))))));
                                arr_14 [i_0 - 1] [i_0 + 2] [i_0] [i_2] [(unsigned short)13] [(signed char)13] [(short)6] = ((_Bool) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_14 = (+(((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) arr_12 [i_0] [i_0] [(unsigned char)9] [i_0] [(_Bool)1]))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0] [(_Bool)1] [i_1] [i_1] [i_1]))) : (arr_9 [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((int) arr_10 [i_0 + 1] [i_0 + 1] [(unsigned char)4] [i_1] [i_1] [i_1 - 1]))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */_Bool) var_3);
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */_Bool) var_2);
}
