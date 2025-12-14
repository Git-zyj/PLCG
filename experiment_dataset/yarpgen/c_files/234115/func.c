/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234115
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_0 [10U]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7678981539718632700LL)) ? (min((793435809U), (((/* implicit */unsigned int) ((signed char) 1069707602U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_1 [i_0]) * (1069707607U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((min((var_9), (((/* implicit */long long int) var_1)))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
        var_13 -= ((/* implicit */unsigned short) arr_3 [2U] [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_1 [(unsigned char)14]))));
        arr_7 [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) 4173513388U);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2])) == (((/* implicit */int) arr_0 [i_2])))))));
        arr_12 [i_2] = ((/* implicit */long long int) 4173513395U);
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_4 [i_2])));
                    arr_17 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) arr_0 [i_3])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4]))) / (arr_13 [i_2] [i_2] [i_3])))));
                    var_16 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)11167));
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)150)))));
        arr_19 [i_2] = ((/* implicit */signed char) var_11);
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((-1038237193) != (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) var_2))));
    var_18 = ((/* implicit */unsigned long long int) var_4);
    var_19 = ((/* implicit */_Bool) max((((signed char) (~(var_9)))), (((/* implicit */signed char) ((_Bool) ((var_9) + (var_8)))))));
}
