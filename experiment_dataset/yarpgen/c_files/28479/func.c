/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28479
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
    var_19 ^= ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) + (var_12))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_13)), ((signed char)-57)))) ? (((/* implicit */unsigned long long int) ((var_7) ? (-9148903409523792398LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6)))))) : (((var_12) << (((/* implicit */int) var_13))))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)80)))) : ((-(var_1))))))));
                                var_22 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_2 [(signed char)1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))), ((+(var_6)))))) ? ((-(((/* implicit */int) ((unsigned short) var_0))))) : (((int) (-(((/* implicit */int) arr_1 [i_0] [11]))))));
                                arr_12 [(unsigned char)4] [i_3] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(unsigned char)10] [i_1] [(signed char)1] [i_4])) || (((/* implicit */_Bool) min(((signed char)126), (var_18))))))), ((-(((((/* implicit */int) var_7)) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) var_11);
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (short)15357)) && (((/* implicit */_Bool) (short)15))))), (((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned short)10] [i_2] [(unsigned short)10] [i_2]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_11 [i_0] [i_5] [i_0] [i_5] [i_6])), (arr_17 [(signed char)4] [i_5] [(short)7] [7U] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-96)), (var_11)))) : (min((var_6), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_0] [(unsigned char)2] [(unsigned char)2] [i_0 - 1] [6LL] [i_0 - 1])))))))));
                                var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [11LL] [i_2] [11LL] [8ULL])) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_2 [(unsigned short)10] [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */unsigned int) min((((-9122071437057205088LL) - (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [(short)0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])))))));
                    var_27 = ((_Bool) (-(max((((/* implicit */int) (signed char)-81)), (var_4)))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) (_Bool)1))));
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_12))));
}
