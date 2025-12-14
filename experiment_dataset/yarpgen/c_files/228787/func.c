/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228787
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(short)5] [7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_18))));
                arr_6 [i_0] = ((/* implicit */short) (-(min((((int) (unsigned short)49310)), (((((/* implicit */int) arr_4 [i_0] [i_1])) << (((var_13) - (7155740241309147430ULL)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] [i_3] [i_1] = ((/* implicit */unsigned short) arr_7 [(unsigned char)3] [i_1] [i_2]);
                                arr_18 [i_0] [i_1] [i_4] [i_3] [i_4] [(unsigned short)5] = ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2 - 2]));
                                arr_19 [2] [i_4] [i_4] [(unsigned char)15] = ((/* implicit */unsigned long long int) arr_10 [18] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [(unsigned char)9] [(unsigned short)4]))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(unsigned char)18] [i_1] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_15)) ? (arr_11 [(short)6] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63991))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (arr_7 [i_1] [i_0] [i_0]))))))) ? (((var_19) >> (((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) (short)-18954)) : (((/* implicit */int) arr_16 [(unsigned short)12] [i_0] [18] [i_1] [(unsigned char)11])))) + (19006))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            for (int i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                {
                    arr_28 [i_5] [i_6] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_15 [i_5] [6ULL] [(unsigned char)0])), (9684851895554889888ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6] [i_7])) || (((/* implicit */_Bool) (unsigned short)8958)))))))))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */_Bool) (unsigned short)33856)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8290))) : (9684851895554889888ULL))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) / (4985686966746022473ULL))))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_26 [(unsigned short)10])))), (((((/* implicit */_Bool) 1224338807)) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [(unsigned short)9] [i_6] [3])) : (((/* implicit */int) arr_12 [i_5] [(unsigned char)15] [i_6] [i_7]))))))))))));
                    arr_29 [i_5] = ((/* implicit */int) min((max((((unsigned long long int) arr_21 [i_6])), (((arr_11 [i_5] [i_5] [i_6] [i_7]) << (((arr_15 [i_5] [i_6] [i_7]) + (1312439941))))))), (var_13)));
                }
            } 
        } 
    } 
}
