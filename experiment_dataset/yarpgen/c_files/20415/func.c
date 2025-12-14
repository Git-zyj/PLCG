/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20415
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 2] [i_0] [i_3 + 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_3)))) ? (-1LL) : (arr_7 [i_0])));
                                arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0 + 1]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((min((arr_9 [i_0] [i_1] [i_1]), (((/* implicit */long long int) (short)-9896)))) * (((((/* implicit */long long int) ((unsigned int) var_8))) * (min((((/* implicit */long long int) (unsigned short)32768)), (arr_9 [i_0] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_10 -= ((/* implicit */unsigned char) var_0);
    var_11 = (-((~(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)60386)))))));
}
