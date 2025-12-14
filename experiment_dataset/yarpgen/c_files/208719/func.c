/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208719
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
    var_14 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (unsigned short)47518)), (min((((/* implicit */unsigned int) (_Bool)1)), (1373264608U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] |= ((/* implicit */short) arr_5 [i_0] [i_0] [i_3]);
                                var_15 = ((/* implicit */int) (unsigned short)4834);
                                arr_17 [i_2] = ((long long int) (~(var_10)));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (signed char)-125))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) 7482797514842976052ULL);
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_10))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_8)), (-6649417501425869074LL))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 16452336729565516042ULL)) && (((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2])))), (((var_10) >= (((/* implicit */unsigned long long int) arr_8 [i_5] [i_0])))))))));
                                arr_24 [i_6] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_10 [i_6] [i_1] [i_2] [i_1] [i_0]))) ? (max((((/* implicit */int) var_7)), (577805596))) : (max((var_9), (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
