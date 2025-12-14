/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215887
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
    var_10 |= (unsigned char)133;
    var_11 = var_7;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = max(((unsigned char)109), (max(((unsigned char)45), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)66)) > (((/* implicit */int) (unsigned char)184))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_9 [i_1] [i_3] [i_2] [i_1])) | (((/* implicit */int) var_8))))));
                            arr_12 [i_3] [i_2] [i_1] [i_0] = arr_1 [i_2];
                        }
                    } 
                } 
                arr_13 [i_1] = var_7;
                arr_14 [i_1] [i_0] = var_2;
            }
        } 
    } 
}
