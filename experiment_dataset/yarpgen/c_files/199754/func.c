/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199754
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
    var_10 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                arr_7 [i_0] [(unsigned short)21] = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_1 [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_11 = arr_4 [i_2] [i_2];
                            arr_16 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((unsigned int) arr_10 [i_2])))) > (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > ((-9223372036854775807LL - 1LL)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((((/* implicit */int) (unsigned char)64)) >> (((((/* implicit */int) (short)-27480)) + (27497)))))));
    var_13 = ((/* implicit */unsigned short) max((1588257736U), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_5)))))));
}
