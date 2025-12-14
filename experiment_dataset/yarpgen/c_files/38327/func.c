/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38327
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
    var_19 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) var_13);
                                var_22 = ((/* implicit */unsigned short) var_18);
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) var_1);
                    arr_14 [10ULL] [i_1] [i_1] [i_1] = var_3;
                    var_24 = ((/* implicit */signed char) var_0);
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) var_14);
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) var_14);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) var_13);
                    arr_22 [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) var_18);
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_7))));
                }
            } 
        } 
    }
}
