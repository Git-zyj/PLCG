/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226607
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) << (min((var_7), (((/* implicit */long long int) var_17))))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (var_6))))) : (max((((/* implicit */int) var_15)), ((+(((/* implicit */int) var_8))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [11U]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_11 [(short)3] [i_1] [(short)3] = ((((min((arr_3 [i_2]), (((/* implicit */unsigned int) var_4)))) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) >> (((max((var_16), (min((18014398492704768LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [7U])))))) - (4942LL))));
                    arr_12 [11LL] [i_1] [11LL] &= (-(max((((var_6) >> ((((((-2147483647 - 1)) - (-2147483635))) + (35))))), (((/* implicit */int) arr_7 [(_Bool)1])))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)51218)), (var_16)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)24609))))) / (-1LL)));
        arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-23924))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned char)5), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0])))))))) : (max((var_16), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        arr_17 [i_3] |= ((/* implicit */short) (~((~(((/* implicit */int) arr_15 [i_3]))))));
        arr_18 [i_3] = ((/* implicit */short) var_0);
        arr_19 [i_3] [i_3] = ((/* implicit */long long int) arr_15 [i_3]);
        arr_20 [i_3] [(unsigned short)7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5)) ? ((-((+(5))))) : (((((((/* implicit */_Bool) arr_16 [i_3] [0ULL])) ? (((/* implicit */int) var_5)) : (var_6))) + ((-(((/* implicit */int) (short)21127))))))));
        arr_21 [i_3] = ((/* implicit */int) (~((~(min((((/* implicit */unsigned long long int) arr_16 [i_3] [i_3])), (var_2)))))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        arr_25 [i_4] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-5853)) ? (-5) : (((/* implicit */int) (unsigned char)250))))));
        arr_26 [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
        arr_27 [i_4] [i_4] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_4] [i_4]))))))))));
    }
    var_21 = var_18;
}
