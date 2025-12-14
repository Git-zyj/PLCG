/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206968
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
    var_12 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = max((arr_5 [i_2] [i_2]), (((/* implicit */long long int) var_4)));
                                arr_13 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) var_5);
                                var_14 = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) ((((-6LL) > (((((/* implicit */_Bool) -6LL)) ? (arr_10 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6588))))))) ? ((-(((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31306))) : (var_9))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_0] [4] [i_0] [4] [i_5] [i_5] [i_5])) ? (-6LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                            var_16 = (((-(arr_8 [i_0] [i_0] [i_0] [(unsigned short)1]))) - ((-(0U))));
                            var_17 = ((/* implicit */unsigned long long int) -1588159047545099231LL);
                            var_18 = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
}
