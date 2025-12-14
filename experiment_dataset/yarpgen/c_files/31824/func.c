/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31824
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
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((arr_2 [i_0 - 1] [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 3])))))))));
        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)0)))) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0]))))) != (((/* implicit */unsigned int) ((arr_1 [i_0 + 2]) ? (((arr_1 [i_0]) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (signed char)-35)) ? (1882425088) : (((/* implicit */int) (signed char)-64)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2865007692201840572LL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))));
                        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((_Bool) arr_1 [i_0 + 2])))) ? (((/* implicit */int) var_13)) : (min((max((-284388640), (((/* implicit */int) var_10)))), (min((var_14), (((/* implicit */int) var_3))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
    {
        var_18 = ((arr_13 [i_4]) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_12)));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((arr_14 [i_4] [i_4]) ? (((/* implicit */int) (short)-31487)) : (((/* implicit */int) arr_12 [i_4]))));
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_12))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)960)) + (((/* implicit */int) arr_12 [i_5 + 2])))))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned char) (signed char)102))))), (((arr_22 [i_7] [i_7] [i_7] [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) 2865007692201840576LL)) ? (((/* implicit */long long int) 1882425097)) : (var_6)))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((arr_23 [i_7]), (arr_23 [i_7])))) - (min((((/* implicit */unsigned int) arr_23 [i_7])), (arr_20 [i_7] [14] [i_7])))));
        var_23 *= ((/* implicit */int) (_Bool)1);
    }
    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
}
