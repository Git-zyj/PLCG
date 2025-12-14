/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199831
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) 2814715580U);
                    var_19 = ((/* implicit */_Bool) max((min((arr_6 [i_0 - 1]), (((/* implicit */unsigned int) arr_3 [i_0])))), (((/* implicit */unsigned int) ((arr_5 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_1 [(unsigned char)7])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_0 + 1])))))));
                    var_20 = ((/* implicit */unsigned int) 9223372036854775807LL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), ((-(((((/* implicit */_Bool) var_11)) ? (11522107192832247058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                arr_13 [i_3] = ((/* implicit */long long int) arr_2 [i_4] [i_3]);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 397675661U)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_3] [i_4] [i_4])), (var_5)))) : (((/* implicit */int) ((_Bool) min((17216499196969020652ULL), (((/* implicit */unsigned long long int) (signed char)2))))))));
                var_23 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_11 [(signed char)1] [(signed char)0] [3ULL])) >= ((~(1230244876740530940ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)20623))) : (((((/* implicit */_Bool) arr_3 [i_5])) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (var_15) : (((/* implicit */long long int) 3897291634U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (449878450U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))))));
                                var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_0), (arr_11 [i_3] [i_3] [i_5]))))))), (4294967281U)));
                                var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (11522107192832247058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [5ULL]))) : (arr_14 [i_3] [i_7] [i_3]))) + (((long long int) arr_8 [i_3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_3);
    var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((17216499196969020657ULL) > (((/* implicit */unsigned long long int) var_15))))) : (((/* implicit */int) ((short) var_4))))), (((/* implicit */int) var_5))));
}
