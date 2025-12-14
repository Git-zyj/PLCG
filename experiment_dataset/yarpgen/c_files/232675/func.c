/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232675
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1 + 1] = ((/* implicit */unsigned char) 960215412U);
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -80254546)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_12))))))) << (((3334751884U) - (3334751871U)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) ((int) 18446744073709551588ULL));
        arr_14 [i_3] = ((/* implicit */unsigned short) max((min((((signed char) (signed char)-116)), (((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (var_10)))))), (((/* implicit */signed char) ((_Bool) 960215412U)))));
        var_16 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) (unsigned char)4)))), (((((/* implicit */int) arr_10 [i_3])) == (((/* implicit */int) (signed char)84))))));
        arr_15 [i_3] = ((/* implicit */unsigned short) arr_10 [i_3]);
        var_17 = ((/* implicit */unsigned int) arr_10 [i_3]);
    }
    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((min(((-(((/* implicit */int) var_4)))), (max((((/* implicit */int) (signed char)59)), (1615585426))))), (((((/* implicit */int) (unsigned char)96)) ^ (-852385174)))));
        arr_18 [i_4] = ((((/* implicit */unsigned int) ((arr_17 [i_4 + 2] [i_4]) ? (((((/* implicit */_Bool) arr_10 [1ULL])) ? (((/* implicit */int) var_1)) : (var_2))) : (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_8)))))))) / ((+(725364443U))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 2; i_7 < 15; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_24 [i_7] [i_6] [i_7 + 1]))));
                        var_20 |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_31 [i_5] [i_6] [i_7] [i_7])))))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (3569602853U)))) || (((/* implicit */_Bool) ((var_2) + (((/* implicit */int) arr_19 [i_5]))))))))) < (((((/* implicit */unsigned long long int) var_3)) + (arr_27 [i_5] [6ULL] [i_7 + 2] [i_6])))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */short) max((((/* implicit */unsigned int) arr_21 [i_5])), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_5] [i_5] [16] [(unsigned short)0]))) ^ (0U))), (((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        arr_33 [0] [i_5] = ((/* implicit */long long int) max((min((arr_9 [i_5] [i_5]), (arr_9 [i_5] [i_5]))), (arr_9 [i_5] [i_5])));
    }
    var_23 = ((/* implicit */_Bool) var_9);
}
