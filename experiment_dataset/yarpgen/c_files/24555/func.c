/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24555
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
    var_11 &= ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 &= ((/* implicit */unsigned char) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((long long int) (unsigned char)130));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                var_13 = ((/* implicit */unsigned char) var_10);
                                arr_16 [i_4] [i_1] [i_2] [i_4] &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) 7068527336985023398LL)) : (arr_0 [i_3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)204)))))));
                                var_14 *= ((/* implicit */signed char) max(((~(-7221687732455974742LL))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) & (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                            }
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2284)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-90))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7068527336985023398LL)) ? (-7068527336985023398LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
