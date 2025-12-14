/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221358
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
    var_10 = ((/* implicit */unsigned short) (~(((long long int) var_3))));
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) == (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65512)) ? (((/* implicit */int) (short)-24359)) : (((/* implicit */int) var_9))))), (var_2)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] = (~(((/* implicit */int) (unsigned short)47865)));
                    var_12 = ((/* implicit */unsigned long long int) (unsigned short)17663);
                    var_13 = ((/* implicit */long long int) var_4);
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_2])) ^ (((/* implicit */int) (_Bool)0))));
                    arr_12 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) (unsigned short)47873);
                }
            } 
        } 
    } 
}
