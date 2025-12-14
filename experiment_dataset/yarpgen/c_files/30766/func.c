/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30766
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) arr_7 [i_0]))));
                                arr_17 [i_0] [i_1 + 1] [i_2] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) < ((-(0LL)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_2] = ((((/* implicit */_Bool) 1777718975280398734LL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (_Bool)1)));
                    var_12 = ((/* implicit */long long int) min((((/* implicit */int) max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))), ((+(((/* implicit */int) arr_1 [i_1]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), ((unsigned char)231)));
    var_14 = ((((/* implicit */int) (unsigned char)250)) & (((/* implicit */int) (unsigned char)201)));
    var_15 *= ((/* implicit */signed char) var_0);
}
