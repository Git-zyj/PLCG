/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32846
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (short)32767);
                var_20 = 1677745492;
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) 6376051754214149240ULL);
                    var_21 = ((/* implicit */_Bool) (short)30226);
                    var_22 += ((/* implicit */signed char) 2147483647);
                }
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    arr_15 [i_3] [i_3] = 1879851131;
                    arr_16 [i_3] [i_3] [i_0] = -239610654;
                    var_23 = ((/* implicit */int) 855113419U);
                    var_24 *= ((/* implicit */unsigned short) 7133419061991273099LL);
                }
                for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    var_25 = ((/* implicit */signed char) (_Bool)0);
                    arr_20 [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-26);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_8))));
}
