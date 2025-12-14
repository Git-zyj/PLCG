/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48676
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
    var_13 = ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_8))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_11)))) : (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))));
        var_16 = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (max((var_6), ((signed char)0)))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) var_5);
            var_18 *= ((/* implicit */short) var_5);
            var_19 = ((/* implicit */int) var_0);
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)237), (arr_2 [i_2 - 2] [i_2 - 2])))) ? ((-(((((/* implicit */_Bool) arr_6 [i_1])) ? (var_10) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((var_10) == (((/* implicit */int) ((signed char) var_1))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((((arr_4 [i_3]) + (2147483647))) >> (((/* implicit */int) ((arr_4 [i_1]) == (arr_9 [i_1] [i_3]))))))));
            arr_11 [i_1] = ((/* implicit */long long int) ((min((arr_8 [i_1] [i_3] [i_1]), (((/* implicit */int) var_2)))) / ((-(((/* implicit */int) (unsigned char)255))))));
        }
        arr_12 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (signed char)43)) : (2129765271)))) & (7252280295136237347LL))) % (((/* implicit */long long int) 678168183))));
    }
    for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_5] [i_5] [i_5 + 1]))) >= (arr_17 [i_6] [i_5] [i_6])))))));
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(min((arr_15 [i_4]), (((/* implicit */long long int) var_2)))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) ((signed char) var_3)))))) ? (min(((+(((/* implicit */int) arr_21 [9] [3LL] [i_6] [i_6])))), (max((arr_18 [i_5] [i_5] [i_5]), (-2129765270))))) : ((-(((/* implicit */int) var_2))))));
                }
            } 
        } 
        var_25 &= ((/* implicit */unsigned char) arr_14 [i_4]);
        var_26 = ((/* implicit */int) arr_15 [i_4]);
    }
    var_27 = ((/* implicit */unsigned int) var_2);
}
