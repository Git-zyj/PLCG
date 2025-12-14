/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35059
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 += ((unsigned char) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */long long int) -2120509525)) : (-7486606239415950734LL)));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_0]))) ? (((((/* implicit */int) (short)-16830)) | (((/* implicit */int) (short)-16841)))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)-16830))))))));
        var_13 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) var_5)) ? (13236583619252627531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16841)))))));
    }
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)104)) : ((+(((/* implicit */int) (short)-1147)))))), (((/* implicit */int) min(((unsigned short)40579), (((/* implicit */unsigned short) var_2)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 24; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) arr_9 [i_3 - 3] [i_3] [i_3])), (var_6)))));
                    arr_12 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2 - 1] [i_3 - 3]))))), (var_7)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) min((18446744073709551597ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
}
