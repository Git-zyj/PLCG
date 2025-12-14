/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215926
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
    var_11 = ((/* implicit */unsigned char) -2674393435617582711LL);
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) min((((((/* implicit */int) var_4)) & (((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (var_10))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_6);
        var_14 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)-32752)), (2674393435617582711LL))) >> (((/* implicit */int) max((var_2), (((/* implicit */signed char) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = arr_8 [i_0] [i_0];
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)124))))) : (((/* implicit */int) ((short) ((_Bool) (unsigned char)26))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) var_6);
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [12ULL] [i_2] [i_1] [i_3]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_19 = ((/* implicit */unsigned char) (-(1371474658)));
                        var_20 = ((/* implicit */_Bool) var_2);
                    }
                    arr_12 [i_0] [i_0] [i_2 + 3] [i_0] = ((/* implicit */unsigned int) (-(max((9099372142615030645ULL), (70334384439296ULL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_4 - 1] [i_2])) >= (((/* implicit */int) arr_7 [i_2] [i_2 + 2] [i_4 + 1] [i_4]))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9625333925321189808ULL))))) : (((/* implicit */int) arr_7 [i_4 + 3] [i_2 + 2] [i_1] [i_0])))))));
                        arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) 4127012315U);
                        var_23 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)511)) ? (1371474658) : (((/* implicit */int) var_2)))));
                    }
                }
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_5 + 1]))));
        var_25 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_19 [i_5 - 1]), (((/* implicit */long long int) var_6)))))));
    }
    for (long long int i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
    {
        var_26 ^= ((/* implicit */long long int) var_3);
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 9099372142615030645ULL)))) ? (((((/* implicit */_Bool) 928225308)) ? (((/* implicit */int) (unsigned short)51973)) : (arr_1 [2U]))) : (((/* implicit */int) (short)-28151)))))));
    }
    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) /* same iter space */
    {
        var_28 = (!(((/* implicit */_Bool) 9347371931094520971ULL)));
        var_29 = ((/* implicit */long long int) ((unsigned char) (unsigned char)255));
        var_30 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (_Bool)1)), (70334384439296ULL)));
        arr_25 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned char) var_7));
        var_31 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_0 [i_7 + 1]))))));
    }
}
