/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202436
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))), (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [(signed char)8] [i_1] = ((/* implicit */unsigned int) (-(arr_1 [i_0])));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_7 [i_2] = ((/* implicit */signed char) ((var_1) + (((((562949953421311LL) / (var_1))) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)1])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        arr_10 [3U] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-93))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((signed char) ((arr_1 [i_2]) < (arr_1 [i_1]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 *= ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_14 [i_4] = ((/* implicit */signed char) min((min(((~(arr_0 [i_4] [i_0]))), (((/* implicit */long long int) min(((_Bool)0), ((_Bool)0)))))), (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) ^ (var_3))))))));
                    }
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_1);
    var_16 = var_7;
    var_17 = ((/* implicit */signed char) var_8);
}
