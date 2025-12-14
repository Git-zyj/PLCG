/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229608
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
    for (long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5233076551383058060LL))));
                        var_12 ^= ((/* implicit */int) var_3);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */long long int) 1268270718U);
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) arr_0 [i_4])))));
        var_14 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    }
}
