/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/333
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) (-(max((arr_7 [i_0 + 3] [i_2] [i_2]), (arr_7 [i_0 - 2] [i_2] [i_0 - 2])))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)-77);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) 3431198121U))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 1439568892792673874ULL))) ? (((/* implicit */int) (unsigned short)37435)) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_4 + 2])) ? (arr_1 [i_0]) : (arr_16 [i_4] [(unsigned short)4] [i_6])))))) ? (((unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-2417))))) : (17791413052449106918ULL))))))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (signed char)121))));
                            }
                            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_14 [i_0 - 1] [i_1] [i_5] [i_7]))) & (((/* implicit */int) (short)32752))))) ? (((/* implicit */int) arr_12 [(unsigned short)11] [i_1] [(unsigned short)11] [i_5])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_5]))));
                                arr_22 [5ULL] [i_5] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */short) (+(((unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0])) + (((/* implicit */int) (unsigned char)162)))))));
                                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3431198121U)))))));
                                var_20 -= ((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]);
                                arr_23 [i_7] [i_5] [i_4 + 3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 57344LL)) ? (min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0])), (arr_17 [1U] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_0] [i_1] [i_4] [i_5]), ((_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1] [(short)8] [i_5]))) : ((-(arr_7 [i_0 + 2] [i_5] [i_0])))));
                            }
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_1])) : (1782003689))))))))))));
                        }
                    } 
                } 
                var_22 ^= (+(((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0 + 3] [(unsigned char)5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)121)) && ((_Bool)1)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_2);
}
