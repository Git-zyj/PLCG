/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42244
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 &= ((/* implicit */unsigned short) min(((~(min((var_4), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) && (((/* implicit */_Bool) arr_0 [i_1 - 2])))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_11 += ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 1] [i_2] [i_2])), (var_6))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) -654948657)) : (var_4)))));
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_1])))) ? ((+(((/* implicit */int) arr_0 [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_0])) ? (var_1) : (((/* implicit */int) arr_4 [i_1 + 2])))))) + (((/* implicit */int) arr_6 [i_0] [i_1]))));
                    var_12 ^= ((/* implicit */unsigned short) (~((+(max((var_6), (((/* implicit */unsigned long long int) var_5))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_13 = ((((/* implicit */int) (signed char)(-127 - 1))) % (-654948657));
                    var_14 = ((/* implicit */unsigned int) (((+((+(var_4))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-654948657) : ((+(((/* implicit */int) (unsigned char)252)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_5] [(short)15] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((var_7) & (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (arr_3 [i_1] [i_5])))))) | (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (signed char)-117))))))));
                            var_15 += ((/* implicit */signed char) min((8ULL), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_0] [i_5] [(_Bool)1] [i_0] [i_5])) ? (var_1) : (arr_10 [i_0] [i_0] [i_0] [i_0] [7] [i_0]))), (((/* implicit */int) arr_4 [i_1 + 1])))))));
                            arr_16 [i_3] [i_4] [(unsigned short)14] [i_1] [i_3] &= ((/* implicit */int) max(((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_2)))))) : (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))))), (((/* implicit */unsigned long long int) (+(max((var_5), (arr_2 [i_3]))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_4] [i_6] [i_4] [i_6] = ((((/* implicit */int) min((arr_0 [i_1 - 2]), (((/* implicit */short) var_3))))) * (((/* implicit */int) ((short) var_3))));
                            var_16 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((int) var_1))) ^ ((+(var_4))))) % (((/* implicit */unsigned long long int) (+(arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                        }
                        arr_21 [i_3] [i_3] [5ULL] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_4] [i_1 + 1])) : (((/* implicit */int) arr_13 [i_4] [i_1 - 2])))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_24 [i_7] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-117))))) ? ((-(arr_22 [i_7]))) : (((var_1) - (((/* implicit */int) arr_13 [i_7] [i_7]))))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (var_1))) | ((+(((/* implicit */int) var_3)))))) : (((/* implicit */int) ((unsigned short) var_1)))));
        arr_25 [i_7] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)13)))))))));
    }
}
