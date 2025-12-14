/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47077
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
    var_19 = var_9;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)0)))) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_6 [i_2] [i_2] [8U]))))));
                            arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) 1735861220484928703LL)) * (((/* implicit */unsigned long long int) ((unsigned int) ((int) var_1))))));
                            arr_10 [i_0] [i_1] [(_Bool)0] [i_3] = ((/* implicit */unsigned char) (short)27379);
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min(((~((~(arr_4 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned short) (-(var_8)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (unsigned short)58618);
}
