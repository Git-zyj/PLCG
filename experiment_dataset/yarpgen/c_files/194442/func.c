/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194442
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
    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_7)) & (((/* implicit */int) var_3))))));
    var_16 += ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_17 = ((signed char) ((((/* implicit */_Bool) (signed char)-9)) || (((/* implicit */_Bool) (signed char)55))));
        var_18 += ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_0] [i_0 - 1])))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) <= (2692086631U))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */short) (+((+(arr_1 [i_1] [i_2])))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((((2692086608U) <= (1602880644U))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1602880665U)))))) : (((long long int) 2692086642U)))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) ((2692086608U) - ((-(((arr_1 [i_1] [i_1]) * (arr_5 [i_1] [i_3] [i_1])))))));
            arr_9 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (min((2692086645U), (((/* implicit */unsigned int) arr_4 [i_1])))))))) | ((-(min((((/* implicit */unsigned int) var_13)), (arr_1 [i_1] [i_3])))))));
            arr_10 [i_3] [i_3] = ((/* implicit */long long int) min((max((((var_8) ? (2692086670U) : (1602880662U))), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) 2692086634U)))), ((!(((/* implicit */_Bool) var_1)))))))));
        }
        arr_11 [i_1 - 1] = ((/* implicit */short) (((-(((/* implicit */int) arr_7 [i_1 + 1] [(_Bool)0])))) > (((((/* implicit */_Bool) arr_7 [i_1 - 1] [(_Bool)0])) ? (((/* implicit */int) arr_7 [i_1 - 1] [(short)18])) : (((/* implicit */int) arr_7 [i_1 - 1] [4U]))))));
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
        var_22 = ((/* implicit */_Bool) ((signed char) arr_1 [i_1] [i_1]));
    }
    var_23 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_14)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((var_10), (((/* implicit */signed char) var_12)))))))) * (max((((unsigned int) var_14)), (((/* implicit */unsigned int) var_12))))));
}
