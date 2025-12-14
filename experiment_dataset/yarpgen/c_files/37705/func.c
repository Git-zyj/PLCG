/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37705
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2])))) / (((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1])))));
        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0 + 3]))));
        var_15 = ((/* implicit */signed char) var_10);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_11)))));
        var_17 = ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [7LL] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))))));
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_11)));
                var_20 = ((/* implicit */unsigned short) 703024308U);
            }
            for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                var_21 -= ((/* implicit */signed char) ((long long int) arr_14 [i_5] [8U] [i_5 - 2]));
                var_22 = ((/* implicit */int) 2147418112ULL);
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (arr_1 [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5 + 1]))))))));
            }
            for (short i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) 437600189U)) ? (3857367079U) : (437600227U)));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_2] [i_2])) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2])) : (((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 1] [i_6]))));
            }
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)191))));
            var_27 = ((/* implicit */unsigned long long int) (!(var_6)));
            var_28 = ((/* implicit */unsigned char) arr_2 [i_2]);
            var_29 = ((/* implicit */short) var_0);
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) var_2);
            var_31 = ((/* implicit */int) (signed char)36);
        }
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */int) (signed char)39)) + (((/* implicit */int) arr_4 [i_2] [i_2])))))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (921832070U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            var_34 = ((/* implicit */signed char) ((((((/* implicit */int) arr_24 [i_9] [i_9] [i_9])) ^ (((/* implicit */int) (signed char)16)))) & (((/* implicit */int) var_5))));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_9] [i_2])) : (((int) 32640))));
            var_36 = (i_2 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-9526)) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_2] [i_9] [i_9])) + (24)))))) ^ (((long long int) 4503599627370495LL))))) : (((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-9526)) + (2147483647))) >> (((((((/* implicit */int) arr_13 [i_2] [i_9] [i_9])) + (24))) - (84)))))) ^ (((long long int) 4503599627370495LL)))));
        }
        /* LoopSeq 1 */
        for (short i_10 = 1; i_10 < 7; i_10 += 4) 
        {
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))));
            var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23031))) % (13955838198851297561ULL)));
            var_39 = ((/* implicit */unsigned int) ((3857367123U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10 + 1] [i_10 + 3])))));
            var_40 = ((/* implicit */unsigned short) var_7);
        }
        var_41 = ((/* implicit */short) arr_19 [i_2] [2]);
    }
    var_42 = var_1;
}
