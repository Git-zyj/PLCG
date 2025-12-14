/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238345
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
    var_17 = ((/* implicit */unsigned int) 18446744073709551593ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) -7773144579471776529LL)) ? (127696339U) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (((((+(8809920186010274044LL))) / (min((1926163094972854862LL), (((/* implicit */long long int) 127696339U)))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))));
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) -1422826330057061537LL);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1422826330057061551LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (5370684767584470063LL)))))))));
    var_21 = ((/* implicit */unsigned int) (-(var_11)));
}
