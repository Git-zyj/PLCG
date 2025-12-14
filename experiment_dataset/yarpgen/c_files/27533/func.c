/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27533
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [6LL] [i_1 - 1] [i_0 + 2])) ^ (-381878023))))));
                    var_18 &= ((/* implicit */short) ((unsigned int) -381878042));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_1 + 1]))) * (255ULL)))) ? (((/* implicit */int) ((_Bool) var_0))) : (((int) arr_5 [i_0 + 1] [i_1 + 1] [i_1 - 4]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (short i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((signed char) (((-(var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226)))))))));
                    var_21 = var_14;
                }
            } 
        } 
        var_22 = ((short) ((unsigned short) ((unsigned long long int) 4294967295U)));
    }
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 381878043))));
}
