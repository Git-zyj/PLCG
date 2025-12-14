/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40878
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
    var_12 = ((/* implicit */unsigned long long int) 1730722129U);
    var_13 = ((/* implicit */signed char) ((unsigned int) (signed char)31));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_3 - 1] = ((/* implicit */unsigned char) ((unsigned short) 1730722129U));
                                arr_15 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = ((/* implicit */_Bool) ((long long int) ((unsigned int) (_Bool)1)));
                                arr_16 [i_0] [6] [(signed char)8] [6] [i_0] = ((/* implicit */signed char) ((_Bool) min(((signed char)-82), ((signed char)-109))));
                                var_14 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */short) (signed char)-109);
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)127))))) & (min((((/* implicit */long long int) (_Bool)1)), (-1616816521492188945LL)))));
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) 607563803491306265LL);
}
