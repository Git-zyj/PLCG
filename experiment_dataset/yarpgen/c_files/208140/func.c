/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208140
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((max((min((var_6), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_16)))))));
    var_21 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) max((arr_2 [i_1] [i_0 + 1]), (((/* implicit */short) var_1))))), (min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_0 + 1])))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_19)), ((signed char)73)))), (max((8135490024259932574ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0 - 2]))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned char) var_1))))), (min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))));
                    var_23 = ((/* implicit */_Bool) min((min((arr_3 [i_0 + 2] [i_1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-11849))))));
                }
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    arr_13 [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (_Bool)1)), (var_9))), (max((((/* implicit */unsigned int) (_Bool)1)), (3714507114U)))));
                    arr_14 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (min((arr_8 [i_0] [i_0 + 2]), (arr_8 [i_0] [i_0 - 2])))));
                    arr_15 [i_1] = ((/* implicit */_Bool) min((max((arr_12 [i_0 + 1] [i_1] [i_3]), (arr_12 [i_0 + 2] [i_0 + 2] [i_0]))), (((/* implicit */unsigned int) min(((unsigned short)48230), (((/* implicit */unsigned short) (unsigned char)14)))))));
                }
                for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_24 = ((/* implicit */short) min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_2 [i_0 + 1] [i_0])))), (min((((/* implicit */int) arr_2 [i_0 - 1] [i_0])), (var_5)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((max((((/* implicit */long long int) (_Bool)1)), (arr_21 [i_0] [(_Bool)1] [i_1] [i_0 + 2]))), (((/* implicit */long long int) min(((unsigned short)41212), (arr_4 [i_5 + 1])))))))));
                                var_26 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_0] [i_5 + 2])), (18225106546091170897ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)41212), (((/* implicit */unsigned short) arr_23 [i_6] [i_6] [i_0] [i_6])))))));
                            }
                        } 
                    } 
                    arr_26 [i_0 + 2] [i_1] [i_4] = ((/* implicit */unsigned short) min((min((var_18), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_4])))), (max((((/* implicit */unsigned long long int) (unsigned short)17306)), (18225106546091170897ULL)))));
                    var_27 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((1048572U), (3878867353U)))), (max((((/* implicit */long long int) var_12)), (arr_20 [i_0] [i_0] [(_Bool)1] [(unsigned char)12] [i_0 + 1] [i_0 - 1])))));
                }
            }
        } 
    } 
}
