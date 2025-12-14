/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38936
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
    var_13 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1045419393)) ? (var_12) : (((/* implicit */int) ((((((/* implicit */_Bool) -1045419383)) ? (((/* implicit */int) (signed char)76)) : (1045419375))) != (-1669547924))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_10))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_6 [i_1] [i_0 + 1] [i_1]);
                }
            } 
        } 
        arr_8 [i_0 + 2] = ((/* implicit */unsigned short) var_5);
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) | (min((((/* implicit */unsigned int) -1045419383)), (var_1))))))))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_16 ^= ((/* implicit */signed char) 1045419382);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_6 [i_3] [i_3] [(unsigned char)4])) || (((/* implicit */_Bool) arr_5 [i_3] [i_3])))))))));
        arr_11 [6] &= ((/* implicit */int) arr_4 [i_3]);
    }
    var_18 ^= ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_1))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
    var_19 = ((/* implicit */unsigned short) var_6);
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_7))));
}
