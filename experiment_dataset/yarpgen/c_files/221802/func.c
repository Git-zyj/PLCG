/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221802
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((signed char)-33), (((/* implicit */signed char) (_Bool)0))))) ? (1321496202593524421ULL) : (0ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    arr_9 [(signed char)9] [i_1] [i_2] = ((/* implicit */unsigned short) 9223372036854775807LL);
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) max((arr_7 [i_0] [i_2]), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (var_18) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]))))))));
                }
                for (int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    arr_13 [2LL] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((var_18), (((/* implicit */unsigned long long int) arr_0 [i_3])))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)5])) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_8 [i_3])))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_8 [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (var_12)))));
                }
                for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [(unsigned char)2] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_4])) ? (((/* implicit */int) arr_4 [i_1] [i_4])) : (1097868826)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (var_8)))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_14)), ((~(var_12)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_1] [i_0]))) != (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1])))))))) : (((/* implicit */int) ((signed char) 7ULL)))));
                    arr_18 [(signed char)7] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_24 [i_6] [i_6] = ((/* implicit */signed char) (_Bool)1);
                                arr_25 [i_0] [i_6] = ((/* implicit */short) arr_15 [i_0] [i_0] [i_4] [i_5]);
                                arr_26 [i_0] [i_1] [i_0] [i_5] [i_6 + 1] [0] [i_6] = ((/* implicit */short) arr_5 [i_6] [i_4] [i_1]);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 7; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_31 [i_0] [i_1] [i_7] [i_8] [i_7 + 3] [i_0] = ((/* implicit */signed char) arr_27 [(signed char)3] [i_7 - 1] [i_7 - 1] [i_7 + 2]);
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_11 [i_0]))));
                            arr_32 [i_8] [i_7] [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [7U] [i_1] [i_7] [2U])) ? (var_10) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_1] [i_7] [i_1])))) & (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (short)-24866))));
                            arr_33 [i_0] [i_1] [i_7 + 3] [i_7] [i_8] = ((/* implicit */short) (unsigned char)221);
                        }
                    } 
                } 
                arr_34 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_0])) : (arr_28 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
}
