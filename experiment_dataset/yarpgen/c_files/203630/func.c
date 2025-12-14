/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203630
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [(short)12] = ((/* implicit */signed char) (unsigned char)59);
                    arr_9 [(unsigned short)10] [(unsigned short)10] [i_2] = ((/* implicit */short) (_Bool)1);
                    arr_10 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) (signed char)0);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_9);
    var_20 = ((/* implicit */long long int) ((var_3) != (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
    var_21 = ((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) var_6)) > (((((/* implicit */_Bool) (signed char)12)) ? (799430886273349726LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)10))))))))));
}
