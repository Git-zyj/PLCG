/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223557
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((int) ((unsigned int) arr_2 [i_1 - 1] [i_1 - 3])));
                    var_11 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))) > (max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_1 - 1] [i_3] [i_3])), (var_4))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2]))) : (-1315000161479502448LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
                                var_12 += ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((unsigned int) var_9))), (arr_7 [i_1] [i_1] [i_4] [i_1] [i_1 - 3]))) << (((11175914952387966471ULL) - (11175914952387966430ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
    var_14 *= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))));
}
