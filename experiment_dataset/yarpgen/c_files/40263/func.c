/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40263
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
    var_11 = var_10;
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((var_6) & (var_5)))) : (min((((((/* implicit */_Bool) (unsigned short)33718)) ? (var_9) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((8310839772570798LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31806))))))))));
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) max((var_1), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 1]))))));
                    }
                    for (short i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_16 -= ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)31787)) % (((/* implicit */int) arr_6 [i_0])))), ((-(((/* implicit */int) arr_6 [i_2]))))));
                        var_17 ^= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2] [i_4 + 2])) : (((/* implicit */int) arr_1 [i_2])))));
                    }
                    for (short i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) min((arr_6 [i_5]), (((/* implicit */short) arr_2 [i_0]))))) : (((/* implicit */int) arr_7 [i_1 + 2] [i_0] [i_2] [i_2] [i_5 + 3] [i_5])))), (min(((-(((/* implicit */int) (unsigned short)31817)))), (((/* implicit */int) var_1))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 419278245)) ? ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [0ULL] [i_5])) ? (((/* implicit */unsigned long long int) 2238041853U)) : (var_8))))) : (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_5])));
                    }
                    var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                    var_21 = min((min((((/* implicit */unsigned int) (_Bool)0)), (12U))), (((/* implicit */unsigned int) arr_9 [i_1 + 3] [i_1 - 1] [i_1 + 3] [1])));
                    arr_13 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */short) 56);
                    var_22 -= ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) ((unsigned long long int) 1661993312866522761LL))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (+(var_6)));
}
