/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27838
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 287104476244869120LL))));
    var_12 = (unsigned char)167;
    var_13 = (+((-(((/* implicit */int) ((signed char) var_6))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) var_3))), (((unsigned short) (unsigned char)81))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) arr_0 [i_0])))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)84)) ^ (((/* implicit */int) (unsigned short)16)))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (-(var_8)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) var_2);
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16))))), ((~(((/* implicit */int) (unsigned short)32)))))))));
                var_18 = ((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)81))))));
            }
        } 
    } 
}
