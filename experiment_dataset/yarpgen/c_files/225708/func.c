/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225708
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
    var_13 ^= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [4U] [i_2] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) ((_Bool) var_2))))) + (2147483647))) << (((long long int) arr_3 [i_1 + 2] [i_2 + 1]))));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)243);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))));
    var_15 = ((/* implicit */unsigned char) var_4);
}
