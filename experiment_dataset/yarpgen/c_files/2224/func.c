/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2224
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
    var_10 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = var_0;
                    arr_9 [i_0] [17ULL] [(_Bool)1] [i_2] = ((/* implicit */long long int) var_6);
                }
            } 
        } 
        var_11 += 2878182580U;
    }
    var_12 = ((/* implicit */unsigned long long int) (unsigned char)146);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) arr_14 [i_4]);
                var_14 += ((unsigned long long int) ((arr_14 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97))))))));
            }
        } 
    } 
}
