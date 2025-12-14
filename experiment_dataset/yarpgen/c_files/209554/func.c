/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209554
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (unsigned short)65535)));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) arr_8 [i_2] [i_3] [i_2]);
                        arr_16 [i_1] [i_1] [i_2] = (~(arr_8 [i_2] [i_2] [i_3]));
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */long long int) ((short) (+(arr_8 [(_Bool)1] [i_1] [i_1]))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_24 [i_5] = ((/* implicit */unsigned int) -298515379);
                    arr_25 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */short) (unsigned short)39973);
                }
            } 
        } 
    }
}
