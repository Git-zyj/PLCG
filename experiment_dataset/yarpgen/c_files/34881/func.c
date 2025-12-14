/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34881
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [5LL] [(unsigned short)13] = ((/* implicit */unsigned short) arr_2 [i_2 + 1]);
                    var_20 = ((/* implicit */short) arr_3 [(short)3] [i_1] [9U]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_3 + 1])), (arr_10 [(unsigned short)10]))))))), (arr_11 [i_3])));
                var_22 = ((/* implicit */short) (((+(((/* implicit */int) arr_9 [i_3])))) == (((/* implicit */int) arr_12 [12] [i_4]))));
            }
        } 
    } 
}
