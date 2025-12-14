/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36553
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6930)) ? (((/* implicit */int) var_3)) : (49152)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) (unsigned short)57658))))), (((/* implicit */int) (unsigned char)22))));
                                arr_12 [(unsigned char)8] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned short) max((arr_3 [i_1] [i_2] [i_3]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)58611)) <= (((/* implicit */int) (_Bool)1)))))))), (arr_5 [i_0 - 1] [i_0 - 1])));
                                arr_13 [10ULL] [i_0] [8] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) (_Bool)0);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) (+(var_7)));
                var_21 = ((/* implicit */unsigned char) ((var_6) ? (min((((/* implicit */int) max(((signed char)3), (((/* implicit */signed char) (_Bool)1))))), (max((((/* implicit */int) (_Bool)1)), (var_14))))) : (((/* implicit */int) arr_5 [i_1 - 1] [(short)15]))));
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (1953610803727295354ULL)));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned short) var_0);
}
