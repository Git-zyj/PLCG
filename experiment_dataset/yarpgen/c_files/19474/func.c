/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19474
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10315))) / (min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])), (var_3)))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_12 -= ((/* implicit */long long int) max(((((-(((/* implicit */int) (unsigned char)204)))) - (-807010700))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))))));
                    arr_7 [(_Bool)1] [5] [i_2] = ((/* implicit */long long int) arr_0 [i_2]);
                    arr_8 [i_2] [4] [i_0] = ((/* implicit */unsigned char) (+(((var_3) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (short)10315)) : (var_9))))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)2047)) & (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) arr_6 [(signed char)4] [i_0]))))) ? (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(arr_5 [i_2]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), ((+(((/* implicit */int) arr_0 [i_2]))))))))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned char) var_7);
                            var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3 - 2] [i_3] [i_0]))) <= (var_5))))));
                            arr_14 [i_0] [i_1] [i_3] [i_4] [(short)5] = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) arr_9 [i_3] [i_0] [i_3 - 1] [i_0])), ((+(arr_5 [i_0]))))));
                            arr_15 [i_0] [i_1 - 1] [i_3 - 1] [i_4] = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)27306))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((long long int) var_5));
}
