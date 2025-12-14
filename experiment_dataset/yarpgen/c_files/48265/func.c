/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48265
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
    var_13 ^= ((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
    var_14 += ((/* implicit */short) ((min(((~(var_10))), (max((var_10), (((/* implicit */unsigned long long int) var_8)))))) < (((unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((int) (~(max((((/* implicit */long long int) (short)31265)), (arr_5 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [(unsigned short)21] [(unsigned short)21] [i_3] = max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) ((unsigned short) arr_1 [11LL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_10 [i_0] [i_0] [i_3] [i_3]))));
                            var_15 = ((/* implicit */short) arr_0 [(_Bool)1] [i_1]);
                            var_16 = (~(min((((unsigned long long int) var_11)), (arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 - 2]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
