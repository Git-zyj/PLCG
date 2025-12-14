/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25366
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) max(((+(((/* implicit */int) arr_3 [5LL])))), (((/* implicit */int) ((_Bool) var_5))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_2] = ((/* implicit */long long int) min((min((max((arr_10 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_1] [(short)21] [i_1])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4096))))))), (((/* implicit */unsigned long long int) ((int) arr_8 [i_3] [i_1] [i_2])))));
                                var_15 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned int) var_7)), ((-(1U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min(((-(min((-1), (((/* implicit */int) (unsigned short)4121)))))), (((int) min((var_3), (((/* implicit */short) var_11)))))));
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((int) min((1520578440), (((/* implicit */int) (_Bool)0))));
    var_19 = ((/* implicit */unsigned char) var_10);
}
