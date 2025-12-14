/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244757
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
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (short)-31743)), (var_13))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))));
                    arr_7 [3U] [i_0] = ((/* implicit */unsigned long long int) var_16);
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */signed char) ((long long int) var_0));
    var_21 = (-(((/* implicit */int) (unsigned short)13187)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (signed char i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (signed char)38)))));
                    arr_15 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
