/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20225
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
    var_10 = ((/* implicit */int) ((unsigned char) var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((max((var_0), (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2])))) - (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_4 [(unsigned char)4] [i_1] [i_2]))))))))));
                    var_12 = ((((/* implicit */_Bool) (-((~(4288308340685475130LL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 2] [i_2] [i_0])) <= (((/* implicit */int) arr_4 [i_1 - 1] [4LL] [(signed char)3]))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) > (((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [(short)2] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) 278449116));
                                arr_15 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_9);
                                var_13 = ((/* implicit */unsigned int) ((unsigned short) (-(2954055330905138117LL))));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((arr_5 [i_0] [i_0] [i_0]) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) -695463251)) ? (((/* implicit */unsigned long long int) var_7)) : (15463383601954148126ULL)))) ? (-787107684853826216LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16380))))))))));
                                var_15 = arr_1 [i_1];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
