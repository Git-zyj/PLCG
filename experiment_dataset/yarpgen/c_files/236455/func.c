/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236455
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (5474601714833362137ULL) : (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_10 [i_1] [i_3] [i_0] = ((/* implicit */short) 13LL);
                                arr_11 [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_0] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)245)) && (((/* implicit */_Bool) (signed char)2))))) : ((-(((/* implicit */int) (signed char)-64)))))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
