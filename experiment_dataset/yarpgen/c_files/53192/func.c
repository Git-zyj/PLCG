/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53192
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 2082825601)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10865))) < (arr_0 [i_0]))))))));
        var_17 = ((/* implicit */unsigned short) -982260061);
        var_18 = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (var_13))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_10))) ? (((((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1])) / (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_1] [i_1 + 1] [i_1]))))));
                        arr_10 [i_0] [i_1 - 1] [i_1] [i_3] [i_1 - 1] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) 432812221U)) : (18446744073709551589ULL)))));
                        arr_11 [i_3] [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2]))))) ? (((2851659302U) % (((/* implicit */unsigned int) -1357111688)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
    }
    var_21 &= ((/* implicit */unsigned int) ((_Bool) ((_Bool) (unsigned char)245)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (-(4294967289U))))) || (((/* implicit */_Bool) ((((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))))))));
    var_23 &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) (short)7552)))));
}
