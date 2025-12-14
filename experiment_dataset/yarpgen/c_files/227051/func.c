/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227051
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
    var_19 = ((/* implicit */unsigned char) max((var_19), ((unsigned char)15)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2]))))) : (arr_5 [i_2] [i_2 - 1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) (unsigned char)9))));
                    var_21 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) var_14)))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) (((!((_Bool)0))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (unsigned char)9)), (6176419176136183085ULL)))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_2))))))) ? (((/* implicit */unsigned long long int) ((int) var_2))) : (((((/* implicit */_Bool) arr_0 [i_0 + 4] [i_0])) ? (((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0] [i_0 + 4])) ? (6176419176136183085ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        var_24 ^= ((/* implicit */long long int) arr_4 [i_4]);
                        arr_16 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_18)), (arr_3 [i_0 + 3])))) ? (((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) 608493676))))) : (((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_0 + 3])) ? (arr_11 [i_3 + 2] [i_3] [i_4] [i_0 - 1]) : (arr_11 [i_3 + 2] [i_3] [i_4] [i_0 + 4])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [(_Bool)1] [i_6] [i_6 + 4] [i_6] [i_6])) ? (arr_15 [i_6] [i_6 - 1] [i_6] [i_6 + 4] [i_6] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))), (-2860126457141138679LL)));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? ((+(((/* implicit */int) (unsigned char)240)))) : (arr_0 [i_6 + 4] [i_6 + 4])))) ? (var_3) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
    }
    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) * (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)156)))))))));
    var_27 = ((/* implicit */int) min((var_27), (((int) (unsigned char)88))));
}
