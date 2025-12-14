/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194727
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
    var_18 = ((/* implicit */unsigned short) (+((+(var_7)))));
    var_19 = ((/* implicit */unsigned int) 6884041974744327667ULL);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = arr_4 [i_2] [i_0] [(short)3];
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) arr_12 [i_1] [6ULL] [6]);
                                arr_13 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned short) ((long long int) min(((-(((/* implicit */int) (unsigned short)28)))), (((/* implicit */int) min(((unsigned short)3), ((unsigned short)65532)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_14);
    var_23 = ((/* implicit */unsigned int) var_5);
}
