/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241445
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = (~(arr_2 [i_0]));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0] [i_0]) : (var_11))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */short) ((unsigned int) 18446744073709551606ULL));
            var_23 ^= ((/* implicit */unsigned int) ((arr_0 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9))))));
            var_24 = 9ULL;
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) var_1))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_13 [i_4] [i_3 + 2] [0ULL] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_3] [i_3 + 1] [4ULL] [i_2]) > (arr_11 [i_4] [i_3 - 1] [(unsigned char)22] [21ULL])));
                        var_26 = ((((/* implicit */_Bool) 10ULL)) ? (18446744073709551605ULL) : (arr_4 [i_0] [i_0] [i_0]));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) 4ULL);
            arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_0])))))));
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        }
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) 17592186044415ULL);
        arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) max((2723149314U), (arr_3 [i_5] [i_5]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(805953575U)))))))));
        arr_20 [i_5] = ((/* implicit */short) arr_7 [i_5] [i_5]);
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5]))) : (((arr_17 [i_7] [i_8]) ? (arr_1 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5])))))))), (18446744073709551611ULL))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_6]))) : (var_1)))) & (arr_4 [i_8] [2U] [i_5])));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_8])))))) != (((((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_5] [i_5] [i_5])) << (((((/* implicit */int) arr_24 [i_8])) - (1904)))))) * (((var_3) ^ (var_19)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        arr_31 [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) ((_Bool) var_16))))));
        var_31 -= ((/* implicit */unsigned int) 8ULL);
    }
    var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) & (((var_1) ^ (min((((/* implicit */unsigned int) var_6)), (var_13)))))));
    var_33 = 797843050U;
}
