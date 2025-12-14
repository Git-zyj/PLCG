/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236326
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
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_3)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */int) (unsigned short)64221);
                    var_16 = ((/* implicit */unsigned long long int) var_7);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_6 [i_3]))));
                                var_18 |= ((/* implicit */signed char) 2147483647);
                                var_19 = ((/* implicit */long long int) (short)32747);
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_0)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) (+((+(((/* implicit */int) arr_0 [i_1 - 1]))))));
                                arr_17 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [(_Bool)1] [i_2] [i_0] [i_6] [i_6]))))) == (((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) (unsigned char)4))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_5] [i_0] [i_1] [i_2]))) ^ (((unsigned long long int) (unsigned char)251))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1170599229490503091LL)) / (min((var_9), (((/* implicit */unsigned long long int) var_3)))))))));
    var_23 = ((/* implicit */short) var_5);
}
