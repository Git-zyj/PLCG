/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20424
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((min(((unsigned char)240), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (signed char)34))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_4 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) var_6);
                                var_16 = ((/* implicit */unsigned short) (+((((_Bool)1) ? (((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 1])) : (((/* implicit */int) arr_13 [i_2] [i_3 - 3] [i_3]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (unsigned short)65535);
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) < (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) || (((/* implicit */_Bool) (+(2147483647)))))))));
}
