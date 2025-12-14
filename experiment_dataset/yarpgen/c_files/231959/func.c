/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231959
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((max((min((arr_6 [(_Bool)1] [(unsigned short)7] [i_3]), (((/* implicit */int) var_18)))), (((/* implicit */int) (unsigned short)5)))) < (max((min((arr_9 [i_3] [i_3] [i_2]), (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [(_Bool)1])))), (arr_12 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4])))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)5)), (9245220891934209015ULL))))));
                                var_21 |= ((/* implicit */unsigned short) arr_2 [i_0] [(unsigned short)4] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_22 ^= arr_13 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 2] [i_6] [i_6] [i_6];
                                var_23 += ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [(unsigned short)11]);
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    var_25 ^= ((/* implicit */_Bool) max((((9245220891934209015ULL) >> (((2282279103145495281LL) - (2282279103145495268LL))))), (((/* implicit */unsigned long long int) (unsigned short)9))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2282279103145495262LL)) ? (-1279054794) : (((/* implicit */int) (unsigned short)65452))))) ? (max((var_11), (((/* implicit */unsigned int) arr_5 [(signed char)12] [i_0])))) : (min((((/* implicit */unsigned int) var_8)), (arr_2 [i_0] [i_1] [(signed char)5]))))) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_3 [i_0]))))))));
                }
                for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    var_26 = ((/* implicit */signed char) max((2282279103145495258LL), (((/* implicit */long long int) (signed char)108))));
                    var_27 -= ((/* implicit */unsigned short) ((1073741823U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                arr_23 [i_0] = arr_0 [i_0];
                var_28 = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    var_29 = var_0;
    var_30 = ((/* implicit */unsigned int) var_6);
}
