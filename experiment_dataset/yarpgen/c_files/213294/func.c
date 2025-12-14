/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213294
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
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)0))))))));
    var_16 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [18LL] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) max((((/* implicit */unsigned short) (short)-28449)), (arr_1 [i_2])))))));
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */short) (signed char)40);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1852777081)) | (0U)))) ? (min((((/* implicit */unsigned int) var_14)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_26 [i_4] [i_4] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) 14801044506607743141ULL))) | (max((((arr_0 [i_6 - 1]) ? (arr_17 [i_3] [(signed char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [(unsigned char)5] [(short)3] [8LL] [i_3]))))), (((/* implicit */unsigned long long int) arr_5 [i_3 - 2] [i_6] [i_7 - 1]))))));
                                arr_27 [i_3] = arr_7 [i_5] [i_6 + 1] [i_3];
                                arr_28 [i_3] [(_Bool)1] [i_4] [i_5] [i_5] [i_7] [i_3] = ((/* implicit */long long int) ((_Bool) ((((7185359564968961622ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 - 3] [i_6 + 1] [i_7 + 1]))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1)))))) > (arr_21 [i_3] [i_7] [i_3] [i_3] [i_4]))))) + (((unsigned long long int) (unsigned short)13763)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) (_Bool)1)) : (2530388868U)));
                                arr_36 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) > (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)102)) - (89))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_8] [i_8])) <= (arr_12 [i_9] [i_10]))))) > ((-9223372036854775807LL - 1LL))))) : (((/* implicit */int) arr_25 [(_Bool)1] [i_4] [i_3] [i_9] [(_Bool)1]))));
                                var_20 = ((/* implicit */signed char) var_0);
                            }
                            arr_37 [i_3] [i_4] [i_4] [i_9] = ((/* implicit */int) var_8);
                            arr_38 [i_3] [i_4] [i_8] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4387015052962332300LL)) ? (6565598238662682580ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181)))))) ? (((((/* implicit */_Bool) arr_31 [i_3 - 2] [i_3] [i_3] [14] [i_3] [i_3 + 1])) ? (arr_31 [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3 - 3]) : (arr_31 [i_3] [i_3 - 1] [4U] [i_3 - 3] [i_3 + 1] [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
