/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203472
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) : (var_4)))))))) * (((min((var_7), (((/* implicit */unsigned long long int) 16383U)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)23)))))))));
    var_16 = ((/* implicit */signed char) ((_Bool) ((((unsigned long long int) (_Bool)1)) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5627984721667061691ULL)) ? (3557220566U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = arr_1 [i_2] [i_1];
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (arr_10 [i_3] [i_1] [(unsigned char)9] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (arr_10 [i_2] [(unsigned char)4] [i_2] [i_0]) : (arr_10 [i_2] [i_2] [i_3] [i_4]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) 16290626255121829554ULL)) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))))))))));
                                arr_13 [i_1] [i_1] [(unsigned char)9] [i_3] [7ULL] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [7ULL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))) : (((/* implicit */int) ((signed char) 536870904U))))))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2])), ((((_Bool)1) ? (586641467U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))))))) / (3708325820U))))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 3708325829U))));
                    var_22 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 3708325836U)), (((((((/* implicit */_Bool) 3758096391U)) ? (17581679035803791507ULL) : (8188982341168912333ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3708325836U))))))));
                    var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 586641466U))));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_10)) : (var_9));
}
