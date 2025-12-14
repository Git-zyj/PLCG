/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196800
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
    var_20 = ((/* implicit */int) 582645192276334544LL);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) (short)-2626);
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)55146)) + (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned short)10387)) : (((/* implicit */int) (unsigned char)114))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= ((-(((/* implicit */int) (unsigned char)116))))))) : (((((/* implicit */int) (unsigned char)108)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10362))) <= (582645192276334544LL))))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (((4294967274U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))))));
}
