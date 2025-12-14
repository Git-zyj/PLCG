/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210951
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
    var_19 = var_18;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3637802680U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)14340))))) : (((4607003884375228400LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-16139))))))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)246)), ((~(((/* implicit */int) (short)16139)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) (-(max((arr_3 [i_3]), (arr_3 [i_0])))));
                            arr_15 [i_2] [i_1] [i_1] [i_3] = ((/* implicit */short) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_1)));
}
