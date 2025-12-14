/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32441
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
    var_15 = var_6;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) 13812062461266185539ULL);
                var_16 |= ((/* implicit */signed char) (((~(((/* implicit */int) arr_0 [16ULL])))) % (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)10))))));
                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0])))), (((/* implicit */int) (_Bool)0))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) arr_7 [(unsigned char)6]))));
                                var_19 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                                arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_3] [(signed char)11] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_14 [i_0] [i_2 + 1] [i_2] [i_0 + 1] [(signed char)11]))));
                                arr_19 [i_0] = var_11;
                                var_20 = ((/* implicit */unsigned short) var_14);
                            }
                            for (unsigned short i_6 = 3; i_6 < 15; i_6 += 1) /* same iter space */
                            {
                                arr_23 [i_0] [i_0] = ((/* implicit */signed char) min(((+((+(var_14))))), (((/* implicit */unsigned long long int) ((unsigned char) var_3)))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((signed char) ((unsigned short) (unsigned char)169))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_21 [(unsigned char)15] [i_0 - 1] [i_2 + 2] [i_0] [i_6 - 3] [i_1] [i_0 + 1])), (arr_8 [i_0] [i_0] [i_0] [(signed char)6])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [i_2 + 2] [i_0])), (min((((/* implicit */unsigned short) (signed char)16)), (arr_17 [i_0] [i_0] [i_0]))))))));
                                arr_24 [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(var_1)));
                            }
                            arr_25 [i_0] [i_1] [(signed char)14] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_1)), (var_11)));
                            arr_26 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((-(arr_2 [i_0 - 1])))));
                            var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
