/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54452
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24)))) : (((/* implicit */int) ((-1485520592) != (1485520603)))));
                var_17 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                var_18 = ((/* implicit */short) ((unsigned char) ((unsigned long long int) -1485520605)));
                var_19 = ((/* implicit */signed char) (-((~(min((var_8), (((/* implicit */long long int) var_9))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)76))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                arr_12 [i_2] = ((/* implicit */unsigned char) max((((unsigned long long int) ((var_6) | (((/* implicit */unsigned long long int) 0U))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) : (3943770586U))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_20 [i_2] [i_2 + 2] [i_5] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_1))))) || (((/* implicit */_Bool) -1485520566)))))));
                            var_21 = ((/* implicit */unsigned long long int) 1485520630);
                        }
                    } 
                } 
            }
        } 
    } 
}
