/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28055
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
    var_17 = ((/* implicit */short) ((long long int) max(((-(((/* implicit */int) (unsigned char)1)))), ((-(((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((min((65280U), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) ((unsigned short) 1U)))))), ((-((-(arr_4 [i_2] [i_1] [i_2] [i_1])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_2] [i_4] [(unsigned short)0] = ((/* implicit */unsigned int) ((long long int) ((4294967271U) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
                            var_18 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1]);
                        }
                        var_19 = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) var_2)) && (var_1))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                        var_20 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 1] [i_3] [i_3] [i_3] [i_1])))))) * (arr_7 [i_2] [i_2] [i_2] [i_1] [i_0 + 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) min((var_13), (((/* implicit */int) (signed char)-16))))) <= (65274U)))))));
                        var_21 = ((/* implicit */unsigned long long int) (unsigned char)254);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_14 [10U] [i_1] [i_2] [11U] = ((/* implicit */int) ((((/* implicit */_Bool) (-(2251799813685247LL)))) || (var_1)));
                        var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (var_0) : (((/* implicit */int) (signed char)75)))))));
                        var_23 ^= ((/* implicit */unsigned short) arr_8 [i_0] [i_1 - 2]);
                    }
                }
                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_0 + 1]))) + (1U))) - (((unsigned int) var_6))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (long long int i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (((+(4294967290U))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))))));
                            var_26 -= ((/* implicit */unsigned int) arr_8 [i_0] [i_0 + 1]);
                            var_27 = ((/* implicit */unsigned int) max((((short) (+((-2147483647 - 1))))), (((/* implicit */short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [(signed char)12] [(unsigned char)6] [i_1 - 4])))))));
                            arr_20 [i_0 + 1] = ((/* implicit */short) ((int) (-(((/* implicit */int) min((arr_17 [i_0] [18LL]), (((/* implicit */signed char) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
