/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46989
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-101)) ? ((~(var_3))) : (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)48)))) | (((/* implicit */int) arr_0 [i_1 + 1] [i_2 - 2])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_1 - 1] [i_4 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_0]))))), (((((/* implicit */unsigned int) 1005529967)) * (2828060167U)))));
                                arr_13 [i_0] [4LL] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) (unsigned short)65535))))))) & (2828060167U)));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (min((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)206)), (var_1)))), ((-(((/* implicit */int) (unsigned short)11))))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max(((+((+(2828060167U))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_7)) >> (((1466907114U) - (1466907095U))))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_19 [7ULL] [i_1] [(unsigned char)7] [0ULL] [i_6] [i_1] [i_5] = ((/* implicit */unsigned long long int) var_7);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (18446744073709551615ULL)));
                            var_19 &= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_2 + 1]))))));
                            var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1] [i_1] [i_1]))));
                        }
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) + (var_3)));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 4; i_7 < 23; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((long long int) (unsigned char)255)))));
                var_23 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)74)))) < (((/* implicit */int) max((arr_22 [i_7 + 1] [i_8 + 3]), (arr_22 [i_7 - 2] [i_8 + 3]))))));
                var_24 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) >= (arr_23 [i_8 + 2]))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_20 [i_8 - 2])))) : (((((/* implicit */int) (unsigned char)154)) >> (((/* implicit */int) var_2))))));
            }
        } 
    } 
}
