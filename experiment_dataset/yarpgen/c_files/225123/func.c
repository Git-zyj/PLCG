/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225123
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
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_17);
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        arr_3 [i_0] = var_4;
    }
    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_17))));
        var_22 |= ((/* implicit */long long int) (unsigned short)17);
    }
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_23 = ((/* implicit */long long int) (!(((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))));
            arr_12 [i_2] = ((/* implicit */signed char) var_5);
        }
        var_24 &= ((/* implicit */unsigned long long int) arr_5 [(unsigned short)0]);
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned char)255))));
        var_26 = ((/* implicit */int) var_9);
    }
    for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) / (arr_4 [10ULL])))) & (((((arr_6 [i_4 + 1] [(_Bool)1]) && (((/* implicit */_Bool) arr_1 [i_4])))) ? ((~(arr_14 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_4] [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)85)))) - (((/* implicit */int) arr_13 [i_4]))))) && (((/* implicit */_Bool) arr_4 [(short)14]))));
            var_28 = ((/* implicit */unsigned int) var_6);
        }
        arr_18 [i_4 + 2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_4]))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_14 [i_4 + 1])))))) : (arr_4 [(_Bool)1])))) && ((!(var_3)))));
    }
}
