/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206461
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
    var_11 -= ((/* implicit */unsigned int) (-(((((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((_Bool) var_9)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (2656552605U)));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3893190174924910485LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-2412293280007218599LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (max((1638414715U), (((/* implicit */unsigned int) (signed char)-54))))))) ? (((/* implicit */unsigned int) max((-706663121), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [(_Bool)1])))))))) : (((((var_8) >= (((/* implicit */int) (unsigned short)34670)))) ? (2656552603U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 533442250)) && (((/* implicit */_Bool) var_3))))))))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-66))))))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~((~(arr_3 [i_0] [i_1]))))))));
                }
            } 
        } 
        arr_8 [i_0 - 1] = ((/* implicit */long long int) var_2);
        var_16 = ((/* implicit */unsigned int) (short)16475);
        arr_9 [(unsigned short)8] [i_0 + 1] = (~(((/* implicit */int) (signed char)-40)));
    }
    var_17 -= ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) var_10)))) : (-1540032326))) + (((/* implicit */int) var_2)));
}
