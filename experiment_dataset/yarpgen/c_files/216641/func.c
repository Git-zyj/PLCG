/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216641
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
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [1LL] [1LL] [1LL] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -2096046162)) ? (((/* implicit */int) arr_2 [i_0 - 2] [(unsigned char)1] [i_2])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_0 - 2])))), (((/* implicit */int) max((arr_6 [i_0 + 1] [i_1] [i_2]), (((/* implicit */signed char) var_6)))))));
                    arr_8 [i_0] &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)3))))), (max((((/* implicit */signed char) var_9)), (var_4))))))));
    /* LoopSeq 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((1056964608), (1056964608)));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_10 [i_3 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (32640)))) ? (((((/* implicit */_Bool) -1096869430)) ? (var_3) : (((/* implicit */unsigned long long int) -1056964626)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_3 - 1])) : (((/* implicit */int) arr_9 [i_3 - 1] [i_3]))))))))))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_15 [6] [i_4 - 1] [i_4 - 1] [i_4] &= ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_4 + 2] [i_5] [i_5] [i_5]))))), (((524235949U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_17)))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (arr_12 [i_3 - 1] [i_4 + 1] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -683070027174188724LL)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_9 [i_6] [0LL])) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) (-(max((arr_13 [16U] [i_6] [i_6 - 1] [(unsigned char)9]), (((/* implicit */int) var_11))))))) : (((((((/* implicit */_Bool) arr_9 [i_6 - 1] [(signed char)2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (((/* implicit */long long int) arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_16 [i_6 - 1])) * (((/* implicit */int) arr_16 [i_6 - 1])))) / (((((/* implicit */_Bool) min(((signed char)12), ((signed char)(-127 - 1))))) ? (((/* implicit */int) arr_10 [i_6 - 1])) : (2047)))));
        var_25 = ((/* implicit */signed char) ((((arr_17 [i_6] [i_6 - 1]) ? (arr_13 [i_6 - 1] [i_6] [i_6 - 1] [i_6]) : (((/* implicit */int) arr_17 [i_6] [i_6 - 1])))) / (arr_14 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
    }
    var_26 = ((/* implicit */unsigned int) var_17);
}
