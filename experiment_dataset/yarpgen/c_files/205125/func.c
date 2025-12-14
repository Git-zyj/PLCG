/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205125
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
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 += (~((-(((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 3])))));
                arr_5 [i_0 - 2] [i_0 - 2] |= ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned short)53229))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(arr_8 [i_1] [(short)5] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_0 - 1] [i_1] [i_2] [i_4]), (((/* implicit */signed char) arr_2 [i_0])))))) : (arr_7 [i_2] [i_2] [i_2 + 1] [i_3]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)53229)), ((-(((/* implicit */int) var_12)))))))));
                                var_16 = ((/* implicit */short) (+(((int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (((signed char) (_Bool)0))));
            }
        } 
    } 
    var_18 -= ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) (unsigned short)29542)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12306))) : (1269863270919507064LL))))), (((/* implicit */long long int) var_6))));
}
