/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217171
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
    var_11 = var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((240317837U) & (((/* implicit */unsigned int) 157543723)))) <= (arr_3 [i_0] [i_1] [i_1]))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_3 [i_0] [i_1] [4LL]))))))) != (((/* implicit */int) arr_4 [i_1] [i_0]))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [(signed char)10] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((-2855132520287340796LL), (((/* implicit */long long int) 433811321))));
                    var_12 -= ((/* implicit */_Bool) -675144476);
                }
                arr_10 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) 675144476))), (((long long int) arr_8 [i_0]))));
                arr_11 [i_0] = ((/* implicit */_Bool) -675144477);
            }
        } 
    } 
}
