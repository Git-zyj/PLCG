/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200217
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
    var_20 = ((/* implicit */_Bool) var_18);
    var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((short) var_19))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) max((min((((/* implicit */unsigned short) var_4)), (var_1))), (var_1))))));
    var_22 = (_Bool)0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_23 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)65535)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
                    arr_11 [6LL] [i_1] [6LL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) var_4)))) == (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0] [i_1]))))))) : (min((((/* implicit */int) arr_7 [i_0] [i_0 + 2] [(short)8] [i_1 - 1])), (arr_4 [(_Bool)1])))));
                }
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_2 [i_0]))))))));
                /* LoopSeq 2 */
                for (int i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                arr_21 [8ULL] [(short)18] [i_1] [13] [i_5] = ((/* implicit */unsigned char) (signed char)69);
                                var_24 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))), (((var_19) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 1] [(signed char)2])))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_1]))) * (9597316541060714189ULL))), (((/* implicit */unsigned long long int) arr_7 [i_1 + 2] [i_3 + 3] [(_Bool)1] [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned char) ((min((arr_19 [i_0 - 1] [i_0 - 1] [(_Bool)1] [8U] [i_3]), (var_4))) ? (((((/* implicit */int) arr_19 [i_0 - 1] [i_1] [i_0 - 1] [(signed char)4] [i_7])) * (((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 2] [8LL] [(_Bool)1] [i_3])))) : (((/* implicit */int) min((arr_19 [i_0 - 1] [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1]), (arr_19 [i_0 - 1] [i_1] [i_6] [(_Bool)1] [(short)16]))))));
                                var_26 += min((min((arr_0 [i_1 + 2] [i_6]), (arr_0 [i_3 + 2] [i_0 + 2]))), (max((arr_0 [i_0 + 1] [(short)6]), (((/* implicit */signed char) var_0)))));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (1033930237U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_0] [(short)14] [i_3]))) : (max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((9223372036854775799LL), (((/* implicit */long long int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3])))))))));
                    var_28 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3 - 1] [16] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                }
                for (int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [1LL] [i_1] [i_0 + 2] [i_8 + 2]))))) ? (((((/* implicit */int) arr_9 [i_0 + 2])) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_8]))));
                    var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63649)) & (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) arr_16 [i_1] [i_8 - 1] [i_8 + 1] [i_8])), (5932526964005320566ULL)))));
                }
            }
        } 
    } 
}
