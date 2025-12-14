/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198553
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (((((_Bool)1) ? (2186589386153852187ULL) : (((/* implicit */unsigned long long int) 1879491255U)))) <= (((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_1] [i_2]), (((/* implicit */long long int) arr_6 [i_3]))))))))));
                            arr_12 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_10)) / (arr_9 [i_2 - 1] [i_0 - 3] [i_0 - 3]))) ^ (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_0 - 2] [i_0 - 2])) ? (arr_9 [i_2 + 1] [i_2] [i_0 + 1]) : (arr_9 [i_2 + 2] [i_1] [i_0 - 3])))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1])))))))))) < (((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : (var_8))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_2);
    var_12 = ((/* implicit */unsigned char) ((unsigned int) (+((((_Bool)1) ? (((/* implicit */long long int) 4178080524U)) : (-574254465030097526LL))))));
}
