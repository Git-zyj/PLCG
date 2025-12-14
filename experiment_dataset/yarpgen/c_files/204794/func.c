/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204794
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(max((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((18446744073709551597ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30680))))))))));
        var_20 = ((/* implicit */unsigned int) var_19);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min(((+(arr_2 [i_0 - 3]))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) arr_5 [i_0 - 1])));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1488634710U)) ? (((((4221230435U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-17616))))))) : (((/* implicit */unsigned int) -1234180135))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((short) ((arr_11 [i_4]) ? (8614063108278344849ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        arr_22 [i_6] = ((/* implicit */unsigned long long int) ((var_17) / (var_18)));
                        var_23 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_4] [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12328291177416555560ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((max((min((18446744073709551612ULL), (((/* implicit */unsigned long long int) arr_19 [i_7] [i_3] [i_3])))), (((/* implicit */unsigned long long int) (short)16139)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_5] [i_3])) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))))))));
                        var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_18))))))), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (1488634687U))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1488634708U)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_4] [i_8 + 1])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [i_8 + 1]))));
                        arr_29 [i_3] [i_4] [i_3] [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (~(2474859447U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_8])) && (((/* implicit */_Bool) 12328291177416555539ULL))))) : (((/* implicit */int) var_6)))));
                        arr_30 [i_8] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8])))))), (min((var_3), (((/* implicit */unsigned int) var_5)))))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_5]))))))) ? (((((/* implicit */_Bool) ((var_12) * (90479955U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_23 [i_5] [i_5] [i_4] [i_4] [(unsigned char)14] [i_3])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) -1109390998)) : (var_18))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3]))))) - (((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [7ULL])))))));
                    var_28 = max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_12)) ? (((arr_11 [i_3]) ? (arr_28 [i_5] [i_4] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) 316089881)))) : (max((((/* implicit */unsigned int) var_1)), (405859264U))))));
                    var_29 = ((/* implicit */unsigned long long int) arr_13 [i_3] [(_Bool)1] [i_5]);
                }
                var_30 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) <= (3144221867U))));
            }
        } 
    } 
    var_31 = 4197549338U;
}
