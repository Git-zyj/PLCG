/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235140
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((-7701773331948058253LL) % (7701773331948058252LL)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) & (min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0])), (arr_2 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) >= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)1))) : (7701773331948058268LL))))))) : (min((((/* implicit */unsigned long long int) 961499121U)), (0ULL))));
                                var_13 = ((/* implicit */_Bool) (signed char)-4);
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-37))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (var_7) : (var_2)))))));
                            }
                        } 
                    } 
                    var_14 *= ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) arr_1 [i_0])) + (7701773331948058268LL))));
                    arr_17 [i_0] [i_1] [i_1] [(short)2] = ((/* implicit */short) ((var_0) - (((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)-37)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) -7701773331948058244LL);
}
