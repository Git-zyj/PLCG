/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225217
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) != ((~(((/* implicit */int) (signed char)-125))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                arr_15 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_13 [i_3]) >= (arr_13 [i_2])))), (max((arr_13 [i_2]), (arr_13 [i_3])))));
                var_15 ^= arr_12 [i_2];
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (12276744389055534710ULL)));
                arr_16 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_23 [i_4 - 4] [i_4 - 4] = ((/* implicit */unsigned int) arr_19 [i_5] [i_4] [i_3] [(short)6]);
                            var_17 = ((/* implicit */int) arr_21 [i_4 + 1]);
                            arr_24 [7LL] [i_4] [i_3] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_13 [i_3]), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_5])))), (((/* implicit */int) (short)32766))));
                            arr_25 [i_5] [i_4] = var_7;
                            arr_26 [6ULL] [(_Bool)1] [(short)9] [i_2] = ((/* implicit */int) min((((/* implicit */short) arr_11 [i_3])), (min((arr_18 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 1]), (((/* implicit */short) arr_9 [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
