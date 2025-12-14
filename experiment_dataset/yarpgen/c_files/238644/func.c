/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238644
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
    var_17 = ((unsigned char) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_18 = (-(((/* implicit */int) var_13)));
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1])))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1 - 1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (+(var_12)))) : ((-(-1LL))))) : (((((/* implicit */_Bool) 1792)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (25LL)))));
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            for (unsigned char i_3 = 4; i_3 < 13; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) (unsigned char)255)), (4294967295U)))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_8 [i_1 - 1] [i_1]))))));
                    var_22 = ((/* implicit */unsigned short) (!(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-28106))) != (-2LL)))) == (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */int) var_9))))))));
                }
            } 
        } 
        var_23 = ((unsigned char) arr_8 [i_1 - 1] [i_1]);
    }
    var_24 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (-265180644))))))));
    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_6)))) : (((/* implicit */int) (short)-32422))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
}
