/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36169
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_3] [i_4] [2ULL] [2ULL] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_3]);
                                arr_14 [i_1] = ((/* implicit */unsigned char) max((max((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_1 [i_4]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) arr_7 [i_0] [i_1] [i_2] [i_2]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (var_12) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)63854)) ? (var_8) : (((/* implicit */long long int) var_10))))))) ? (((/* implicit */int) (unsigned short)1681)) : (((/* implicit */int) var_11))))));
}
