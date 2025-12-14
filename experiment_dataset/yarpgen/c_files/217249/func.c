/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217249
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2 - 2] [i_2 - 3])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 2] [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_2 + 1] [i_2 - 2])))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) (unsigned short)63008)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_2 - 2] [i_2 + 1]))))));
                    arr_7 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_0 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63008))))) : ((((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned short)13802))))));
                    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [(short)12] [i_2])) ? (((/* implicit */int) (unsigned short)23523)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) (-(-993649249)))) ? (((/* implicit */int) arr_5 [i_2 - 3] [i_0 + 2])) : ((~(((/* implicit */int) arr_6 [i_1])))))) : (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_5)) : (arr_0 [(_Bool)1])))) ? ((((_Bool)1) ? (((/* implicit */int) (short)25039)) : (((/* implicit */int) (unsigned short)63019)))) : (((arr_1 [i_1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)27107))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_2 - 3] [i_2 - 3] [i_2 - 3])) : (((/* implicit */int) arr_3 [i_2 - 2] [i_2 + 1] [i_2 - 1])))) + (2147483647))) << (((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1)))) - (237367593)))));
                        var_23 = ((/* implicit */short) ((int) arr_3 [i_0] [i_2 - 3] [i_3]));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (short i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) var_14);
                    var_25 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_5]))) ? (max((arr_0 [i_4]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))));
                    var_26 = ((/* implicit */short) (~((+(((/* implicit */int) arr_17 [i_4] [i_6 + 3] [i_6 + 1] [i_6 - 1]))))));
                    arr_19 [i_6 + 1] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_1 [i_4])) - (((/* implicit */int) (unsigned short)34315)))) < (((/* implicit */int) (short)17526))))) != (((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3836))) : (3329912538054245754ULL))) - (3806ULL)))))));
                }
            } 
        } 
    } 
    var_27 = var_1;
    var_28 = ((((/* implicit */int) var_15)) < ((-(((((/* implicit */int) (unsigned short)6144)) ^ (((/* implicit */int) var_19)))))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_15)))))) ? (((/* implicit */int) (short)-29394)) : (((/* implicit */int) (unsigned short)65524))));
}
