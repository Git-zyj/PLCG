/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233902
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)47193))))), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) -1)) > (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (5902814512534460320ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) <= (2542812932744763454ULL)));
                            arr_13 [i_3] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) -9)) || (((/* implicit */_Bool) (unsigned short)65535))))))) < (((/* implicit */int) arr_3 [(unsigned char)12]))));
                            arr_14 [i_2] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                            /* LoopSeq 2 */
                            for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_6 [i_2]))));
                                arr_19 [i_2] [i_3] [i_3] [i_2 - 1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_2]);
                                var_15 -= ((/* implicit */signed char) arr_10 [i_1] [i_2]);
                                arr_20 [i_3] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) min((((var_5) && (((/* implicit */_Bool) (short)-20883)))), ((!(((/* implicit */_Bool) (short)-32351))))))), (var_9)));
                            }
                            for (int i_5 = 1; i_5 < 20; i_5 += 2) 
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_11 [i_1] [i_1]))));
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_3] [i_5] &= ((/* implicit */signed char) (-((+(279223176896970752LL)))));
                                arr_24 [i_2] = ((/* implicit */short) ((((/* implicit */int) var_6)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1])))))));
                            }
                        }
                    } 
                } 
                arr_25 [13ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)41)) != (-1)));
            }
        } 
    } 
}
