/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205053
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) 98892344U);
                    var_16 = ((/* implicit */unsigned int) (unsigned short)63);
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) 0);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))));
                                arr_14 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) var_3);
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_12))));
                                var_18 = ((/* implicit */_Bool) var_0);
                                arr_15 [i_4] [5ULL] [i_1] [i_1] [i_0] = (+(var_10));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (var_1)));
}
