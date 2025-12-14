/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242625
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
    var_15 *= ((/* implicit */unsigned int) 18446744073709551605ULL);
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) (-(max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (_Bool)1))))))));
                var_17 = ((/* implicit */long long int) (+(((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_12)))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_3))))))) & (((max((arr_3 [i_0 + 1]), (((/* implicit */unsigned int) arr_2 [i_0])))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))))));
                                var_19 = ((/* implicit */int) 3367955625U);
                                arr_16 [i_1] [i_1] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2 + 2] [i_0 + 1])) ? (max((arr_3 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned char)19)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [i_2 - 2] [i_2 - 2] [i_4] [i_4] [i_4] [i_2 - 2] [i_3]))))));
                                arr_17 [i_3] [i_3] [i_2 + 1] [i_2] [i_4] |= (+(((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2 - 1])) ? (13302471052654053279ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))))));
                                var_20 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0]))))), (-2664270429366346642LL)))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 4294967288U)) : (72057594037911552ULL))) | (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_2])))))));
                            }
                        } 
                    } 
                } 
                var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-3)))) ? (max((arr_12 [i_0 + 3] [i_0 - 1] [i_1] [i_1] [i_1] [i_0 + 3] [i_0 + 3]), (arr_9 [i_1] [i_1] [i_1] [i_1]))) : (((arr_0 [i_0 + 3]) ? (arr_1 [i_1]) : (var_13))))))));
            }
        } 
    } 
}
