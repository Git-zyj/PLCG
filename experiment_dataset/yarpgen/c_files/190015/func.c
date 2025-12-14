/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190015
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
    var_12 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_11);
                    var_13 = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (var_2)));
                    var_14 = ((/* implicit */unsigned int) max(((unsigned char)253), ((unsigned char)3)));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_8 [(short)16] [i_0] [i_1 - 3] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)132))))))) ? (min((((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (866754897U))), (((/* implicit */unsigned int) arr_15 [i_3] [2] [i_4])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3])) ^ (((/* implicit */int) ((short) var_8))))))));
                /* LoopSeq 3 */
                for (signed char i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_3))))), (max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                    arr_21 [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((long long int) arr_18 [i_5] [i_5 - 1] [i_5] [i_5 - 1])));
                    var_18 = ((/* implicit */int) ((((/* implicit */int) arr_17 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 2])) >= (((/* implicit */int) ((_Bool) arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5])))));
                    arr_22 [i_3] [(unsigned short)11] [4LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3]))));
                }
                for (signed char i_6 = 2; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_4] = ((/* implicit */unsigned int) (+(((long long int) var_11))));
                    arr_27 [i_3] [i_4] [2LL] = ((/* implicit */signed char) var_0);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_31 [i_3] [i_3] [i_7] = ((unsigned long long int) ((arr_12 [i_3] [i_3]) ? (arr_18 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_19 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-7012)))))))) : (((/* implicit */int) var_2))));
    var_21 += ((/* implicit */unsigned short) var_6);
}
