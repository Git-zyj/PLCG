/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21372
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
    var_20 = ((/* implicit */int) min((var_20), (((int) (!(((/* implicit */_Bool) -643462993)))))));
    var_21 = ((/* implicit */int) ((unsigned char) 643463017));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (arr_2 [i_0]))) % (arr_2 [i_0])));
        var_23 = (-(0LL));
        var_24 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)130)), ((+(((/* implicit */int) (unsigned short)15244))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1]);
        var_26 |= arr_2 [i_1];
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned char) arr_9 [i_1] [i_2]);
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1])) + (arr_4 [i_2])));
            var_27 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_1] [i_2]))));
        }
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_28 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) ((signed char) 643463028)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        var_29 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_13 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_20 [i_3])))) : (min((((/* implicit */unsigned long long int) arr_15 [i_4] [i_3] [i_6])), (arr_20 [i_3])))));
                        var_30 = ((((((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (signed char)0)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_19 [(short)20])) ? (arr_19 [(unsigned short)6]) : (arr_19 [(short)2]))) - (1765631979))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3]))) / (min((((/* implicit */unsigned long long int) arr_19 [i_3])), (arr_21 [(unsigned short)4] [i_3] [i_3] [i_3] [i_3]))))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_23 [i_3] [i_3] [i_3] [i_3]))))))));
        var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_13 [i_3]), (arr_13 [i_3])))), (min((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_21 [i_3] [i_3] [i_3] [i_3] [5])))));
    }
    var_32 = ((/* implicit */signed char) var_11);
}
