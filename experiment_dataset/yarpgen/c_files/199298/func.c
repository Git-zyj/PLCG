/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199298
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_6))));
        arr_2 [i_0] [i_0] = ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) | (var_11));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_12)))))) ? (((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8480))))) << (((arr_3 [i_1] [i_1]) - (2883341265U))))) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))));
        var_16 = ((var_10) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1832708840U)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (arr_3 [i_1] [i_1])))));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_17 = ((((/* implicit */_Bool) (short)-8480)) ? (((/* implicit */int) (short)3011)) : (((/* implicit */int) (short)-1056)));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -1207477138)) ? (((/* implicit */unsigned int) 1207477154)) : (2921785902U)));
        var_19 |= ((/* implicit */short) (+(((/* implicit */int) (short)-11491))));
    }
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((arr_4 [i_4]) ? (arr_11 [i_5] [i_3] [i_3]) : (arr_3 [i_4] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [(unsigned short)6] [i_5])) ^ (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) min((2747969830U), (((/* implicit */unsigned int) -1207477138))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_3]))) : (var_1)))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1073)) % (((/* implicit */int) arr_13 [i_3] [i_5] [i_5] [i_3]))))) ? (max((((/* implicit */unsigned int) arr_13 [i_3] [i_4] [i_5] [i_5])), (arr_3 [i_4] [i_3]))) : (arr_3 [i_4] [i_5]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            {
                arr_21 [i_7] [i_6] [i_6] = ((/* implicit */short) arr_18 [i_6]);
                var_22 = ((/* implicit */unsigned char) ((_Bool) min((7674544337494664870ULL), (((/* implicit */unsigned long long int) (unsigned short)42233)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_8 = 3; i_8 < 8; i_8 += 4) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_8 + 2] [i_8 + 2])) << (((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)34594))));
                    var_25 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_6] [i_8 + 1] [i_8 + 1]))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_13);
    var_27 = ((/* implicit */_Bool) min((((/* implicit */int) (short)22421)), (1207477137)));
}
