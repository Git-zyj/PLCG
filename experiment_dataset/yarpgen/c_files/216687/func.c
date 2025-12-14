/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216687
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_2)))) - (((((/* implicit */_Bool) (signed char)-61)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)123), ((signed char)-107)))))))));
    var_11 ^= ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)107))));
        var_13 = ((/* implicit */int) (-(var_8)));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_14 ^= ((/* implicit */short) (-(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_1]))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) var_5);
        }
        arr_7 [i_0] = ((/* implicit */int) ((signed char) min(((signed char)123), ((signed char)123))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_15 = ((/* implicit */short) var_9);
        var_16 ^= ((/* implicit */unsigned long long int) var_9);
        var_17 = var_8;
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_18 -= ((short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_1 [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3] [i_3])))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_8 [i_3] [i_3])))) << (((((/* implicit */int) var_3)) + (90)))));
    }
}
