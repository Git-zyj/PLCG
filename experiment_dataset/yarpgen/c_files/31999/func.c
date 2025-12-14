/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31999
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
    var_12 ^= ((/* implicit */_Bool) ((unsigned int) 1500803448U));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (!(((var_4) || (((/* implicit */_Bool) arr_2 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_2] [i_2] [i_0] [6U] = ((/* implicit */signed char) max((var_8), (max((((/* implicit */unsigned short) arr_4 [(_Bool)1] [i_1] [i_3])), (max((var_1), (var_8)))))));
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)25788))));
                                var_14 ^= ((/* implicit */unsigned int) ((unsigned long long int) min((max((var_11), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (unsigned short)39746)))));
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned int) arr_11 [(unsigned char)12] [i_1] [i_1] [(unsigned char)12]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)39746)) <= (((/* implicit */int) (unsigned short)25788))))), (var_8)))))))));
    var_17 = ((/* implicit */_Bool) var_8);
}
