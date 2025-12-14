/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194828
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
    var_15 = ((/* implicit */short) var_3);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_4 [i_0] &= ((/* implicit */unsigned char) (((!(var_0))) ? (1877445548) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((var_6) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)39261))))) : (((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1])) ? (arr_6 [i_1 - 2] [i_1]) : (arr_6 [i_1 - 4] [i_1])))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26284)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))) : (5515261393099361786LL)));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                {
                    var_16 -= ((/* implicit */long long int) var_0);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */long long int) 2614232425U);
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_17 [(_Bool)1] [i_2] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))) ? (((((/* implicit */_Bool) 2614232436U)) ? (arr_21 [i_2]) : (((((/* implicit */_Bool) var_8)) ? (9007194959773696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [(short)12]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_14) : (arr_18 [(_Bool)1] [i_2] [i_2]))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2074)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned short)61440))));
        arr_24 [i_2] = ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19243)))))) : (((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */unsigned int) 574034841)) : (arr_15 [i_2] [i_2]))));
        var_21 = (-(var_5));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_7 + 1] [i_7 + 1]))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_7 + 1]))) : (2614232436U)));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 880403041)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_27 [i_7] [i_7 + 1])));
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1488845257)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_28 [i_7 + 1] [1ULL]))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [7LL] [i_7 + 1])) ? (((/* implicit */int) arr_28 [i_7] [i_7 + 1])) : (((/* implicit */int) arr_28 [(short)23] [i_7 + 1]))));
    }
    var_25 = ((/* implicit */unsigned int) var_4);
    var_26 = ((/* implicit */unsigned int) var_14);
}
