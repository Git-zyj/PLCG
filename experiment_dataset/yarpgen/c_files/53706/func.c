/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53706
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
    var_17 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (((!((_Bool)0))) && ((!(((/* implicit */_Bool) var_1))))))), ((~(((/* implicit */int) ((unsigned short) var_14)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) max(((_Bool)1), (min(((_Bool)1), ((_Bool)1)))))))))));
        var_19 = ((/* implicit */long long int) (_Bool)1);
        var_20 = ((/* implicit */unsigned short) (_Bool)1);
        var_21 += (_Bool)1;
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_0] [i_4]))) | (var_1)))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned long long int) max((var_3), (((/* implicit */long long int) min((arr_9 [i_0] [i_0] [i_2] [i_3] [i_3]), (((/* implicit */int) (_Bool)1)))))))))));
                                var_24 = ((/* implicit */long long int) arr_8 [9] [i_3]);
                                var_25 -= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_14 [18LL] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_1] [4ULL] [4ULL]))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((arr_1 [i_2]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]), (arr_13 [3LL] [i_3] [(short)8] [i_2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) ((short) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_5 [i_2])))));
                    var_27 = ((/* implicit */short) min(((~(((/* implicit */int) ((signed char) arr_3 [i_0] [i_1] [i_0]))))), ((-(arr_10 [i_0] [i_0] [i_2] [i_1] [i_1])))));
                    var_28 -= ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3)));
        var_29 = (_Bool)1;
        var_30 = ((/* implicit */signed char) var_13);
    }
    var_31 = (+(((((/* implicit */int) ((unsigned char) (_Bool)1))) + (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
}
