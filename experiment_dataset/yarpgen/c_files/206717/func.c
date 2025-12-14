/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206717
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((signed char) (_Bool)1)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((((6564344251663041191ULL) >> (((((/* implicit */int) (short)-1710)) + (1756))))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))));
                    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)74))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
            {
                {
                    var_13 &= ((/* implicit */short) var_5);
                    arr_17 [(unsigned char)3] [i_4] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
}
