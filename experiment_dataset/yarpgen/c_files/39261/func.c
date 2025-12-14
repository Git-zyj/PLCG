/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39261
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) var_7))), (((arr_5 [(unsigned char)3] [i_1] [20]) << (((((/* implicit */int) var_4)) - (48)))))))));
                var_17 = ((/* implicit */short) (-2147483647 - 1));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [(unsigned short)5] = ((max((var_11), (arr_3 [i_2] [i_2 + 1]))) - (max((((/* implicit */int) var_1)), (((((/* implicit */int) var_13)) / (((/* implicit */int) (short)-21191)))))));
                    arr_10 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (((~((~(((/* implicit */int) var_15)))))) % (((/* implicit */int) min((((/* implicit */short) (signed char)108)), ((short)24142))))));
                }
                for (unsigned short i_3 = 3; i_3 < 24; i_3 += 2) 
                {
                    arr_13 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) 9223372036854775807LL);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 3; i_4 < 24; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_12 [i_3]);
                        arr_16 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-112)), (4595863565024284934ULL)))) ? (((/* implicit */int) (unsigned char)79)) : (((int) var_9))))));
                    }
                    arr_17 [i_0] [i_3] = ((/* implicit */long long int) (~((+(arr_3 [i_3 - 2] [i_0])))));
                    arr_18 [i_0] [(short)13] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_8 [i_0] [i_1] [(unsigned char)9])), (arr_5 [i_0] [i_1] [i_3]))))) << ((((((-(((/* implicit */int) arr_15 [i_0] [i_0])))) + (72))) - (23)))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_10))) > (((/* implicit */int) (signed char)-65))))))));
}
