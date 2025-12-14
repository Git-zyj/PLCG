/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39213
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_14)))) ^ (((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned long long int) ((unsigned short) (short)-32765))), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) ((unsigned short) var_8))))))));
    var_17 = ((/* implicit */signed char) max((((((var_5) & (1093287423U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = arr_7 [(unsigned short)1] [(signed char)10] [(signed char)10] [(signed char)0];
                            arr_10 [i_0] [(unsigned short)5] [i_0] [10U] [i_0] = ((/* implicit */unsigned long long int) (((+(arr_9 [i_0] [i_0 + 2] [i_0] [i_3]))) <= (arr_9 [(short)8] [i_1] [i_2] [(signed char)0])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-39))));
                                arr_22 [i_6] [(signed char)6] [i_4] [(short)2] [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [(unsigned char)2] [(unsigned char)2] [i_0] [i_0 - 2])) : (((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_0] [(short)1])), (var_12)))))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0 + 3])) >= (((((/* implicit */_Bool) (short)18966)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) arr_3 [i_0 - 1]))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_7 [i_0] [(unsigned short)6] [i_0] [i_1]))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_21 = (unsigned short)65535;
                                var_22 += ((/* implicit */short) ((((((/* implicit */int) arr_17 [i_0 - 2] [i_7] [i_7])) <= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) arr_17 [i_0 - 2] [(_Bool)1] [i_0])) / (((/* implicit */int) (signed char)50)))) : (((((/* implicit */_Bool) arr_17 [i_0 - 1] [(_Bool)0] [i_1])) ? (((/* implicit */int) arr_17 [i_0 + 3] [i_7] [i_7])) : (((/* implicit */int) arr_17 [i_0 - 1] [i_8] [i_9]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            {
                arr_38 [i_10] [2LL] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_10]))))), ((~(arr_37 [i_11])))));
                var_23 += ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_35 [(unsigned short)7] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) : (var_7))), (((/* implicit */unsigned long long int) arr_36 [i_10])))) <= (((/* implicit */unsigned long long int) ((unsigned int) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)149))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1692429225)));
}
