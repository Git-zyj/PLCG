/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206718
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_19 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(536870911U)))), (((unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]))));
                            var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) 8023602302631757544LL)) ? (((/* implicit */unsigned long long int) 2145420022)) : (16514226314881404494ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2])))))));
                        }
                    } 
                } 
                arr_8 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0 - 2] [i_0 + 1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(min(((~(-227526277))), (((((/* implicit */int) var_9)) | (((/* implicit */int) var_5))))))));
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
}
