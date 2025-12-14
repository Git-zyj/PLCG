/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206456
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (var_13)))), (var_7)))));
    var_19 = ((/* implicit */unsigned int) (short)-11402);
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [(_Bool)1]);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_3);
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((int) arr_0 [(short)12]))));
        arr_5 [i_0] [i_0] = ((((-1776689824) + (2147483647))) << (((((/* implicit */int) var_3)) - (28359))));
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6394))) - (6880437471469709279ULL)));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (short i_3 = 4; i_3 < 21; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_20 [i_1] = (+((-(arr_15 [i_2 - 2] [i_2] [i_1]))));
                                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64195))) : (682211214U)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) max((((min((var_16), (((/* implicit */long long int) arr_15 [i_3] [4ULL] [i_3])))) * (((/* implicit */long long int) ((1812095041U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [19])))))))), (min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_14)))))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_14 [i_1 + 2] [i_1 + 2] [i_1]);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)));
        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_11 [i_1 + 2]))))));
        var_25 = ((/* implicit */unsigned char) (~(var_7)));
    }
    for (signed char i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */short) (-(((1513149777) << (((((arr_22 [i_6 - 1]) + (1776588953))) - (29)))))));
        arr_24 [i_6] = ((/* implicit */_Bool) ((((max((arr_8 [i_6 - 2]), (arr_8 [i_6 - 2]))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6 + 2])))))));
        arr_25 [i_6] = ((/* implicit */unsigned int) ((int) (_Bool)1));
    }
}
