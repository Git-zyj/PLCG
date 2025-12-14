/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27662
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
    var_16 = ((/* implicit */unsigned char) ((unsigned int) (short)-13728));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)68))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (unsigned char)135))))))));
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 + 2] [i_2] [i_1] [i_0]))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_2] [i_3] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_5] [i_0] [i_0])))) ? (((((/* implicit */_Bool) 1520328191)) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_3] [i_3] [i_2]))) : (((/* implicit */unsigned int) ((int) (signed char)120)))));
                                var_20 ^= ((/* implicit */short) max((((long long int) (unsigned char)68)), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1573416078)))))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_21 *= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_2] [i_3 + 1] [i_6] [i_6])), (arr_3 [i_0] [i_3 - 1] [i_3 - 1]))), (((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) arr_12 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_1])) : (((/* implicit */int) (short)-4520)))), (((/* implicit */int) ((unsigned short) (signed char)72))))))));
                                var_22 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) 2523466792U)))), ((!(((/* implicit */_Bool) min((-1781808649), (-266344027))))))));
                            }
                            var_23 = 0U;
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */long long int) 2084677789)), (arr_6 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_5);
    var_25 = ((/* implicit */unsigned char) var_8);
}
