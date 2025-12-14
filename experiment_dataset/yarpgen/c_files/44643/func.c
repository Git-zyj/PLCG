/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44643
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
    var_19 |= ((/* implicit */short) max((10546980985730006044ULL), (max(((~(7899763087979545571ULL))), (((/* implicit */unsigned long long int) var_12))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [(unsigned short)13] [i_1] [i_0] = ((((((/* implicit */_Bool) 7899763087979545583ULL)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-75)), (-125972319)))) : (arr_6 [i_0 - 1] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) != (arr_4 [i_0 - 1]))))));
                            var_20 ^= ((/* implicit */signed char) -2119437584);
                            arr_10 [11LL] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (+((+(arr_6 [i_0 + 1] [i_0 + 1])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_18))));
                    arr_13 [i_0] [(short)16] [i_0] = ((/* implicit */long long int) var_13);
                    var_22 *= ((/* implicit */short) ((long long int) arr_3 [i_1] [i_1]));
                }
                arr_14 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 7899763087979545572ULL))));
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_8 [i_0 - 1]))))));
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    var_24 -= ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */_Bool) 7899763087979545571ULL)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_1])) : (5553812783853053724ULL))) << (((10546980985730006046ULL) - (10546980985730006042ULL))))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned short)7])) ? (min((((((/* implicit */_Bool) 425610570)) ? (10546980985730006044ULL) : (10546980985730006043ULL))), (((/* implicit */unsigned long long int) ((1499597342) > (((/* implicit */int) arr_5 [i_0 + 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_1] [i_5]))))))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))))));
                    arr_19 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) 2119437588));
                }
                for (unsigned int i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 4; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-72))))), (10546980985730006033ULL))))));
                                var_28 = ((/* implicit */unsigned int) (-(arr_3 [i_7 - 1] [i_0])));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) arr_22 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) 792265166682679050LL))));
                    var_30 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1]);
                }
            }
        } 
    } 
}
