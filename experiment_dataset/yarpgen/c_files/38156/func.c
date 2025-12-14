/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38156
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_9 [i_1] [i_1] = max((((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_1])) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (var_5) : (arr_8 [i_0] [i_1] [1U]))) : ((+(var_6))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 3730344447U)) & (-18LL))))))));
                            arr_10 [i_3] [i_1] [i_1] [8U] = ((/* implicit */unsigned int) (~(var_5)));
                            var_11 = ((unsigned int) ((arr_1 [i_1 + 1]) % (((/* implicit */long long int) var_4))));
                            var_12 ^= max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [5LL] [i_2] [i_3]))))), (arr_8 [i_0] [i_1] [i_3]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    arr_13 [i_1] = ((/* implicit */long long int) ((arr_8 [i_1 + 2] [i_1 + 1] [i_1 - 3]) < (arr_0 [i_1 + 4])));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) 1004091660U))))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) 353735952U);
                    var_15 = arr_5 [i_0] [i_1 + 1];
                }
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_16 = (-(max((var_7), (((long long int) 86098328U)))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_17 = (+(((long long int) arr_1 [i_1 + 4])));
                        var_18 = ((/* implicit */unsigned int) var_6);
                        var_19 = (-((~(((long long int) var_8)))));
                        var_20 = min((((arr_1 [i_1 - 3]) - (((/* implicit */long long int) 2074211541U)))), ((-(arr_1 [i_1 + 2]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) 2890942342881253273LL);
                                var_22 = 1537008535U;
                                arr_28 [i_0] [i_1] [i_6] [i_8] [i_1] = ((/* implicit */unsigned int) (-(((((((/* implicit */long long int) var_8)) / (arr_3 [i_0] [i_0] [i_1]))) + (((long long int) arr_4 [i_0]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = max((max((var_3), (((4294967295U) & (var_10))))), (var_1));
    var_24 = (+(((long long int) (~(var_9)))));
    var_25 = ((unsigned int) var_2);
}
