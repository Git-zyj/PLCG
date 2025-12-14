/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46920
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [(short)11] [i_0] [i_1 - 2] [i_1 - 2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_5 [i_0] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (0LL))))) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3])))));
                            arr_10 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)121)) / (-253414231)))) ? ((-(2007432849U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [21LL] [i_1] [(_Bool)1])) - (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [1U] [i_3]))))))) * (((/* implicit */unsigned int) 182629348))));
                            arr_11 [5ULL] [i_0] [i_0] = ((/* implicit */unsigned int) max((max((min((((/* implicit */unsigned long long int) 1594264056U)), (arr_5 [i_0] [i_1] [i_0] [i_3]))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2])))), (arr_1 [(unsigned short)17])));
                        }
                    } 
                } 
                arr_12 [i_1 - 1] [19LL] [i_0] = ((/* implicit */unsigned short) (signed char)50);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (+(((var_6) ^ (((/* implicit */unsigned long long int) var_13))))));
    var_18 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
