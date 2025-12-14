/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53338
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((2369887475U) << (((2369887475U) - (2369887464U)))))))) ? (((/* implicit */unsigned long long int) var_0)) : ((~((+(var_1))))))))));
    var_16 |= ((/* implicit */unsigned int) var_3);
    var_17 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) 2369887475U)), (var_4)))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551611ULL)))))))) >= (arr_6 [(unsigned char)0] [i_0] [(unsigned char)0])));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 3]))) > (arr_5 [i_1 + 4] [12] [i_1 - 1])))) << (((max((((var_4) / (var_2))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [4LL])))) - (4903473902629597800ULL)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1 + 3] [i_1 + 3] = var_10;
                        arr_13 [i_1] [i_1 + 3] [i_1] = ((((/* implicit */_Bool) arr_2 [i_3])) && (((/* implicit */_Bool) 18446744073709551611ULL)));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_8))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) ((long long int) 5869147917941837438ULL));
                        var_22 += ((/* implicit */long long int) (-(arr_5 [i_0] [i_1] [i_4])));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_5 [i_1 + 3] [i_1] [i_1 + 3])) / (((12577596155767714170ULL) << (((arr_5 [i_1] [i_1] [i_1]) - (89683880U)))))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) ((arr_20 [i_1 + 4] [i_1 + 2] [i_1 - 2] [i_1 + 4] [i_1 - 1]) << (((((/* implicit */int) var_5)) - (122))))))));
                        }
                        for (int i_7 = 3; i_7 < 20; i_7 += 4) 
                        {
                            arr_24 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_23 [10ULL] [i_7 + 1] [i_7 - 3] [i_7 + 1] [i_7 - 3]), (arr_23 [i_7] [i_7 + 1] [12] [i_7] [12])))), ((-(arr_11 [i_7 + 2])))));
                            arr_25 [(_Bool)1] [i_1] [i_7] [2] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) 3ULL);
                        }
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_18 [i_0] [i_1]))));
                        arr_26 [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                        arr_27 [i_0] [i_1] = arr_19 [(_Bool)1] [i_1] [i_2];
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_4 [i_0] [i_0]), ((unsigned char)74)))))))));
                    arr_30 [i_0] [i_1 + 2] [i_8] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(_Bool)1] [(_Bool)1] [(unsigned char)16] [i_1 - 1] [2ULL])))))));
                    arr_31 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((1925079821U), (((/* implicit */unsigned int) var_7)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_21 [i_1] [i_1])))))))));
                    var_27 &= ((/* implicit */short) ((_Bool) (unsigned char)186));
                }
                arr_32 [10] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((var_11) - (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            }
        } 
    } 
}
