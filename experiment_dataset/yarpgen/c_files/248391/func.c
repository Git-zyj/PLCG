/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248391
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)11);
                    arr_10 [0ULL] [(unsigned char)12] [i_1] [i_1] |= ((/* implicit */short) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            {
                arr_17 [i_4] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)34))))));
                arr_18 [12ULL] = min(((unsigned char)177), (((/* implicit */unsigned char) min((var_13), (arr_1 [i_4 - 1] [i_3])))));
                arr_19 [i_4] = ((/* implicit */unsigned char) (~(arr_16 [i_3])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_17);
}
