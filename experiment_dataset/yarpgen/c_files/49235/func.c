/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49235
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
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2207236161U)))) / (21U)))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 2087731134U))));
    }
    for (int i_1 = 4; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max(((unsigned char)200), (((/* implicit */unsigned char) ((signed char) arr_3 [i_1 - 4] [i_1 - 4]))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (var_10)))) ? (arr_13 [i_1] [i_2] [i_3]) : (arr_9 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) arr_18 [(signed char)4] [i_5] [(unsigned short)8] [14] [8U] [i_5])))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1 - 2] [i_1 - 4] [i_1 - 2])))))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_2 + 1]))))), (((unsigned long long int) 2087731148U))))));
                                arr_19 [16] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_18 [i_4] [i_5] [i_5] [i_3] [i_3] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [8] [2U])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2087731148U))))))));
                                arr_20 [i_1] [i_5] [i_3] [i_4] [(unsigned short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 4] [i_1 - 4])) < (((/* implicit */int) ((_Bool) (_Bool)1)))));
                                arr_21 [i_5] [i_5] [i_5] [i_2 + 1] = ((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4] [i_5]);
                                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)51))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_10) : (arr_13 [i_1] [i_1] [i_1])))) ? (-1780428566) : (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (_Bool)1))))))) <= (var_11)));
                    var_25 = ((/* implicit */unsigned short) min((((2207236168U) << (((/* implicit */int) (_Bool)1)))), (var_11)));
                    var_26 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (_Bool)1))), ((+(((/* implicit */int) (short)-8510))))));
                }
            } 
        } 
        arr_22 [5] [i_1 + 3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_10 [15LL] [(unsigned char)1] [i_1]), (((/* implicit */signed char) ((_Bool) 5993633214390245281ULL)))))), ((+(((/* implicit */int) arr_10 [2] [15] [i_1]))))));
        arr_23 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
    }
    var_27 += ((/* implicit */short) var_5);
    var_28 = ((/* implicit */short) var_0);
}
