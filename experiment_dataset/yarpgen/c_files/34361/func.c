/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34361
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((unsigned short) var_8)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((-2147483638) - (((/* implicit */int) (unsigned short)4))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_7 [21])), ((short)32752)))) % ((~(var_2)))));
                                arr_11 [(unsigned short)18] [i_1] [i_1] [i_3] [(unsigned short)18] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) max((arr_4 [i_1] [i_1]), (var_4))))))) / (((((/* implicit */_Bool) ((var_5) + (2147483647)))) ? (((arr_9 [i_4] [i_3] [i_1] [i_1] [4ULL] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) : (arr_9 [(short)5] [(short)5] [i_1] [i_0 + 1] [i_4] [i_1])))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((int) arr_5 [i_4] [i_3]))) ? (((((/* implicit */_Bool) arr_6 [(short)16] [i_3] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
