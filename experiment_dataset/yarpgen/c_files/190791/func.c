/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190791
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40755)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 10848709625558189027ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (var_14))))))) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)41622)) : (((/* implicit */int) (unsigned char)231))))));
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_4)) - (36279)))))) ? (var_6) : (var_15))), (((/* implicit */unsigned long long int) ((((unsigned long long int) (unsigned short)24781)) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) << (((((/* implicit */int) (unsigned char)78)) - (57)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_4 - 1])) : (((/* implicit */int) arr_9 [i_4 + 1]))))));
                                var_20 = ((/* implicit */unsigned short) min((arr_10 [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)20))));
                                var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_3] [i_2] [(signed char)6] [(unsigned char)20]))) <= (((min((((/* implicit */unsigned int) (_Bool)1)), (var_14))) << (((max((((/* implicit */long long int) (signed char)-1)), (arr_8 [i_4] [i_0] [i_4] [i_3] [i_4]))) + (21LL))))));
                                arr_13 [i_0] [i_0] [(signed char)10] [(signed char)10] [i_3] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)9314)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [16] [i_2] [16] [i_4]))) : (511U))), (((/* implicit */unsigned int) (unsigned char)157))))), ((((-(arr_8 [i_0] [i_0] [i_2] [i_3 - 1] [i_4]))) << (((((min((var_16), (1535655083))) + (1590012221))) - (8)))))));
                                arr_14 [i_0] [21] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 511U)) ? (arr_2 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15220))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(unsigned char)19] [i_2] = ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(max((3758096384U), (((/* implicit */unsigned int) (unsigned short)23911))))))) != ((+(max((4957166716141337235ULL), (((/* implicit */unsigned long long int) 391638532))))))));
                }
            } 
        } 
    } 
}
