/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212779
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
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((unsigned int) (!((!(((/* implicit */_Bool) 0)))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (min((var_7), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)226)))))));
                var_17 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 562941363486720LL)) ? (max((2453303503587297781LL), (((/* implicit */long long int) arr_3 [18U])))) : (((/* implicit */long long int) ((unsigned int) var_4))))), (((/* implicit */long long int) ((short) min((((/* implicit */long long int) var_9)), (-2453303503587297762LL)))))));
                var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) ((unsigned short) var_11)))), (max((min((-2453303503587297774LL), (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) (~(var_5))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_6 [i_2] = ((/* implicit */long long int) var_0);
        arr_7 [i_2] = ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (var_4));
        /* LoopNest 3 */
        for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_19 = ((signed char) arr_2 [i_5]);
                        arr_17 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) var_6);
                        var_20 |= ((/* implicit */short) var_1);
                        /* LoopSeq 2 */
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            arr_21 [i_2] [i_3 - 2] [i_4 - 1] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((arr_14 [i_6 + 1] [i_4] [i_4 - 1] [i_2]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7835))))))));
                            var_21 -= ((int) (unsigned char)255);
                        }
                        for (long long int i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            arr_25 [i_3 + 1] [i_2] = ((/* implicit */int) ((unsigned int) ((unsigned int) var_7)));
                            arr_26 [i_2] [i_2] [i_4 - 1] [i_3] [i_2] = ((/* implicit */long long int) ((unsigned long long int) 949943583));
                            arr_27 [9ULL] [i_5 + 1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_12);
                            var_22 = ((/* implicit */unsigned int) (unsigned short)0);
                        }
                        var_23 += ((/* implicit */int) (unsigned char)216);
                    }
                } 
            } 
        } 
        arr_28 [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) var_6)) & (var_11)));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((int) arr_2 [i_2])))));
    }
}
