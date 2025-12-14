/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194407
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
    for (short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), ((~(((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_12)))) ? (min((3655776832726118784LL), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_4))))))))));
                                var_18 = ((/* implicit */unsigned char) -1663136739);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) (+(3655776832726118784LL))))) : ((~(((/* implicit */int) max((arr_0 [i_2]), (arr_15 [i_0] [i_1] [i_2] [i_0] [i_5] [i_6] [i_6]))))))));
                                var_20 = ((/* implicit */signed char) ((long long int) 3655776832726118812LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - (min((((/* implicit */long long int) (+(((/* implicit */int) var_15))))), ((+(var_5)))))));
}
