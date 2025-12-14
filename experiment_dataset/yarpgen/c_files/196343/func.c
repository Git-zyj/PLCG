/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196343
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 - 1])) - (((/* implicit */int) arr_4 [i_2 - 1]))))) ? ((+(((/* implicit */int) arr_4 [i_2 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5054)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 = ((((arr_14 [i_0 - 1] [(signed char)5] [i_0 + 1] [i_0] [i_0 + 1]) ? (((/* implicit */long long int) 1009894522U)) : (max((-7624095878582058596LL), (((/* implicit */long long int) (unsigned short)29398)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_5 [i_4 + 1] [(short)3] [i_4] [i_4 - 1]))))))));
                                var_18 = arr_4 [i_1];
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29398)))))));
                                arr_15 [i_0] [i_3] [i_2 + 2] [(unsigned char)4] [i_0] = ((/* implicit */long long int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((((var_12) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7482923567230383095ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2));
}
