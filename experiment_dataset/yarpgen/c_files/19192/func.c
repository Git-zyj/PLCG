/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19192
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
    var_13 |= ((/* implicit */short) ((unsigned char) var_12));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((_Bool) ((((/* implicit */int) (unsigned char)245)) > (((/* implicit */int) (short)32764))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_2 - 1] &= ((/* implicit */unsigned char) ((max((arr_0 [i_2 + 1] [i_0 + 4]), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0 + 2] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_2 - 2] [i_1] [i_0 - 1])))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (short)32760)) - (32736))))), ((+(((/* implicit */int) ((904145471U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0]))))))))));
                            arr_11 [i_0] [i_1] [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)62930)) < (((/* implicit */int) (unsigned short)52743))))) >= (((/* implicit */int) (short)4356))));
                            var_15 = ((/* implicit */_Bool) (unsigned char)17);
                        }
                    } 
                } 
            }
        } 
    } 
}
