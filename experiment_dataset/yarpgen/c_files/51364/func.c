/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51364
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
    var_20 = ((/* implicit */signed char) var_2);
    var_21 |= ((/* implicit */unsigned short) 2096230063505949741ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                                var_23 ^= arr_9 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0];
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_0])), (var_11)))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_25 |= ((/* implicit */signed char) -4415872732923545945LL);
                                arr_24 [i_0] [i_1] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */short) -4415872732923545945LL);
                                var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) 4978115292766562140ULL))), (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_20 [i_0] [i_1] [i_5] [i_1] [i_7]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_27 = ((/* implicit */long long int) ((unsigned long long int) 1029813083U));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) min((var_18), (((/* implicit */unsigned long long int) var_6))));
}
