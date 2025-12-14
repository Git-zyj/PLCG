/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42532
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 3076153711U)) ? ((~(var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_1] [i_2]), (arr_6 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_4] = ((/* implicit */short) var_8);
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_2] [i_4] [i_2] [i_2]) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_4] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_4] [i_3] [i_4]))))), (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40314)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (unsigned char i_6 = 2; i_6 < 12; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_6] [i_6 - 2] [i_6 - 2]))));
                    var_19 = ((/* implicit */unsigned short) min((((((1659083310909667385LL) | (((/* implicit */long long int) ((/* implicit */int) var_4))))) ^ (min((arr_3 [i_0]), (((/* implicit */long long int) (unsigned short)25218)))))), ((~(max((arr_3 [i_0]), (((/* implicit */long long int) arr_2 [i_5]))))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (short)-10))))))));
    /* LoopSeq 2 */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)25221))));
        arr_24 [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_21 [i_7] [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7]))))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_22 = ((max((arr_27 [i_7] [i_8] [i_9]), (((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (unsigned short)25218)) : (1675526639))))) | (((/* implicit */int) var_4)));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_0))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_7]))))) && (((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) arr_21 [i_7] [i_9])), (var_16)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) var_12);
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        arr_33 [i_10] = ((/* implicit */signed char) var_2);
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((var_6) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-18)))))))) ? (min((var_14), (((/* implicit */unsigned long long int) arr_28 [i_10] [i_10] [i_10])))) : (var_12)));
        arr_35 [i_10] = ((/* implicit */long long int) max((3992934968U), (((/* implicit */unsigned int) (signed char)125))));
    }
}
