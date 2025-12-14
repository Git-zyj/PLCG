/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32570
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
    var_10 *= ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) ((_Bool) var_3))))));
    var_11 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((142140876U) < (4152826420U))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))))) | (var_8)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
        arr_3 [4U] = ((/* implicit */short) var_6);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (3166188906U)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 142140864U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_11 [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 1] [i_3 + 2])))) : (((unsigned int) var_2))));
                            arr_13 [i_1] = ((/* implicit */unsigned int) var_1);
                        }
                        var_14 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) var_1))) : (((1592262001) / (((/* implicit */int) (unsigned char)106)))))), (((/* implicit */int) (short)29136))));
                        var_15 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_6 [2LL] [i_2 - 1] [i_3 + 2])))))));
                        arr_14 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) var_0));
                        var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) var_1)), (((((unsigned int) var_0)) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [9LL])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_1] [(short)3] [i_1])))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        var_17 = ((/* implicit */int) ((unsigned char) arr_17 [i_5 + 3]));
        var_18 *= ((/* implicit */unsigned char) arr_16 [i_5 - 1]);
    }
}
