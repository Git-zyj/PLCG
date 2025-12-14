/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27495
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
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((369924628), (((/* implicit */int) (unsigned char)123))))), (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (var_11))))));
    var_15 = ((/* implicit */unsigned long long int) (unsigned char)124);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (~(arr_0 [i_0])));
        var_17 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)-30550)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned short)65535)))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_18 = ((/* implicit */int) arr_7 [9LL]);
            arr_8 [12ULL] [i_2] = ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_1]));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_11 [13LL] [i_1] = ((/* implicit */long long int) 2147483647);
            arr_12 [i_1] [i_1] [(unsigned char)1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)112)) ? (arr_5 [i_1]) : ((-(((/* implicit */int) var_0))))))));
        }
        var_19 = ((/* implicit */unsigned char) (+((-(arr_5 [i_1])))));
        var_20 *= ((/* implicit */short) ((unsigned long long int) min((2147483647), (((/* implicit */int) (unsigned char)140)))));
        var_21 = ((/* implicit */long long int) arr_6 [22U] [i_1]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((long long int) arr_4 [i_4]))));
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_4] [(unsigned char)15])) || (arr_3 [i_4]))) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_4]))));
        var_24 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (unsigned char)130)))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((_Bool) arr_13 [i_4] [i_4])))));
        arr_17 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_5 [i_4]))) / (((/* implicit */int) arr_10 [i_4] [i_4]))));
    }
}
