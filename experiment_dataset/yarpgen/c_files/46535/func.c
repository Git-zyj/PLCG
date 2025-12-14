/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46535
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((unsigned char) 1402343529U)), (((/* implicit */unsigned char) var_11)))))));
    var_16 ^= ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */int) (+(((min((arr_4 [i_1]), (((/* implicit */unsigned long long int) (unsigned char)255)))) + (((/* implicit */unsigned long long int) (-(arr_1 [i_1] [18U]))))))));
                    var_17 -= ((/* implicit */unsigned int) arr_6 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 2; i_3 < 13; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */short) max((((int) arr_3 [i_3] [i_3 + 1])), (((((/* implicit */int) var_8)) << (((/* implicit */int) arr_3 [15LL] [i_3 - 2]))))));
        var_18 = ((/* implicit */_Bool) (unsigned char)0);
    }
    var_19 = ((/* implicit */_Bool) var_10);
}
