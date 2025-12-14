/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32552
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (+((((-(((/* implicit */int) var_3)))) - (((((/* implicit */int) var_7)) - (((/* implicit */int) (short)15)))))))))));
    var_12 = var_10;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) var_7)), (var_8))), (((/* implicit */unsigned short) var_2))));
                    var_13 = ((/* implicit */short) ((unsigned int) max((((/* implicit */long long int) (short)15)), (-9133974465580056547LL))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) min((var_14), ((!((_Bool)1)))));
                        var_15 *= ((/* implicit */_Bool) (short)32767);
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_14 [i_4] [i_4] [(unsigned char)4] [i_1] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [i_0] [(_Bool)1] [(short)11] [11LL] [i_4] [i_2]), ((short)32767)))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) (signed char)96))));
                        var_16 = ((/* implicit */unsigned char) (!((!((_Bool)1)))));
                    }
                }
            } 
        } 
    } 
}
