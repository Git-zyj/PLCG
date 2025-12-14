/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218257
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 += ((/* implicit */int) ((((/* implicit */int) var_4)) < (var_0)));
        arr_4 [6ULL] = ((/* implicit */unsigned char) (_Bool)1);
        var_21 += (!(((/* implicit */_Bool) arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_22 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (arr_9 [i_1] [i_2])));
            var_24 = ((/* implicit */int) min((var_24), (var_7)));
        }
        var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_8 [i_1]), (((/* implicit */unsigned char) var_1))))) : (((/* implicit */int) (short)-23645)))), (((((/* implicit */_Bool) max(((short)23670), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (short)-23645)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            arr_16 [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_4 + 3] [i_4 - 1])) : (((/* implicit */int) arr_6 [i_4 + 3] [i_4 - 1]))));
            var_26 = ((/* implicit */int) arr_2 [i_3]);
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) (short)-11684);
            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_5] [i_3]))));
        }
        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (unsigned short)11762)))) << (((((arr_14 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16320))))) - (3646628704U)))));
        var_30 = ((/* implicit */short) ((1107906880) > (-761310009)));
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3])))))));
        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_8 [i_3])) : (((((/* implicit */int) var_6)) / (arr_1 [i_3])))));
    }
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (unsigned char)0))));
    var_34 = ((/* implicit */int) (unsigned char)232);
    var_35 = ((_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-21)) : (var_0)))));
}
