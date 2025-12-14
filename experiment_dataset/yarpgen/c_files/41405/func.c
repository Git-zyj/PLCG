/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41405
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
    var_14 -= ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((arr_3 [(unsigned short)12] [(unsigned short)12]) - (((min((arr_5 [i_0] [(_Bool)1] [i_0] [(unsigned char)3]), (((/* implicit */unsigned int) var_13)))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) var_11))))))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [(signed char)5] = var_4;
                                var_15 *= ((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_0] [i_4]);
                            }
                        } 
                    } 
                    arr_12 [(unsigned short)18] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */int) arr_2 [5] [i_1] [i_2])) >> (((((/* implicit */int) arr_6 [i_2] [i_2] [(signed char)18] [i_2] [i_0])) + (42))))), (max((((((((/* implicit */int) arr_6 [i_2] [i_2] [i_0] [i_2] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0] [(unsigned char)15] [i_0])) - (193))))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
}
