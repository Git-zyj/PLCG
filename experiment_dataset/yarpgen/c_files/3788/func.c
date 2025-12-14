/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3788
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) | (6779098512315485194LL)));
    var_18 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_12)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_13) == (((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_4 [i_1]))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_3 - 1] [i_3 - 1])) ? (arr_10 [i_4] [i_4] [i_3 - 1] [i_3]) : (arr_10 [i_4 + 3] [i_3 + 1] [i_3 - 1] [i_2])));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) ((6779098512315485186LL) != (6779098512315485187LL)))))));
                        var_24 |= ((/* implicit */int) arr_10 [i_1] [i_2] [i_3 - 1] [i_4]);
                    }
                } 
            } 
        } 
        var_25 = (-(arr_8 [i_1] [i_1]));
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) * (var_11)))))) + ((+(var_8)))));
}
