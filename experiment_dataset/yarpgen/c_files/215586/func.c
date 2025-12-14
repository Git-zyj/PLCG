/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215586
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_3 [i_0] [i_1]))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)103);
        }
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_4 [i_0 - 1])));
            var_16 = var_14;
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)0)) : (2106590208)))) || (((/* implicit */_Bool) 13063190743287131110ULL))));
                            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)2))));
                            arr_17 [i_0] [i_2] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 - 1]))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) arr_7 [i_0] [i_2]);
            var_20 = ((/* implicit */long long int) var_1);
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_21 = (!(((/* implicit */_Bool) arr_1 [i_0 - 1])));
            var_22 = ((/* implicit */short) ((_Bool) var_6));
            var_23 = arr_11 [i_0 - 1] [i_0 + 1];
        }
        for (short i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            var_24 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_7 + 1] [i_7]);
            arr_24 [i_0] [i_0] [i_7] = ((short) arr_12 [i_0] [i_7 + 1] [i_7 + 1] [2U]);
            arr_25 [i_0] [i_0] = (!(((/* implicit */_Bool) (-(491520)))));
        }
        var_25 = ((/* implicit */signed char) (((~(-309908617))) + (((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 19; i_8 += 3) 
    {
        arr_28 [i_8] = ((/* implicit */short) arr_27 [i_8] [i_8 - 1]);
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_8 + 1] [i_8 + 1])))))));
        arr_29 [i_8 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)226))))) ? (((/* implicit */int) (short)-12479)) : (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) var_4)))))));
    }
    for (unsigned short i_9 = 3; i_9 < 15; i_9 += 2) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) min((-789763333005517959LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_9 + 2] [i_9 - 1] [i_9 + 2])) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_31 [i_9])) - (((/* implicit */int) (_Bool)0)))))))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (8880651633247590422ULL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_23 [i_9 - 1] [i_9 + 2])), (arr_26 [i_9 - 3] [i_9 + 1])))) : ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-2106590209)))))))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((unsigned char) (~(((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) arr_26 [i_9 - 2] [i_9])) : (((/* implicit */int) (unsigned char)5)))))))));
    }
    var_29 = ((/* implicit */unsigned char) var_14);
}
