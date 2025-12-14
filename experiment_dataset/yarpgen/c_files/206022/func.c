/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206022
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
    var_19 |= 2147084300;
    var_20 = var_18;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_8 [i_1] [(unsigned char)3] [i_2] [i_1] = var_13;
                    arr_9 [i_1] [i_1] [(unsigned char)19] = max((var_11), (((/* implicit */int) arr_4 [i_0] [(unsigned char)17])));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_21 = (((!(((/* implicit */_Bool) 688179301)))) ? (((/* implicit */int) (unsigned char)79)) : ((+(((/* implicit */int) arr_1 [i_0])))));
                    arr_13 [i_1] = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) ((unsigned char) var_11))))));
                }
                for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_22 = ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_5 [11] [11] [i_4]) >= (var_16)))), (arr_6 [i_1])))) ? (arr_11 [i_4] [10] [i_0]) : (((max((((/* implicit */int) arr_12 [(unsigned char)12] [(unsigned char)24] [3])), (arr_5 [i_4] [i_1] [(unsigned char)10]))) % ((+(((/* implicit */int) arr_0 [i_0])))))));
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0]);
                }
                arr_18 [i_1] = (+(arr_5 [i_0] [i_1] [i_1]));
            }
        } 
    } 
}
