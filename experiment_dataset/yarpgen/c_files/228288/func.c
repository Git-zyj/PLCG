/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228288
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((max((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_18)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_17)))))) > (((/* implicit */int) (unsigned char)204))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) (+(((((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4500))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))))));
            var_19 *= ((/* implicit */signed char) (~(var_13)));
            var_20 ^= ((/* implicit */signed char) var_11);
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+((+(arr_1 [i_2])))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2]))) * (max((var_17), (((/* implicit */long long int) var_9)))))))))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        arr_20 [i_1] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [(signed char)2] [i_1 - 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 2])))) ? (var_10) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)2040)), (var_2))))));
                        arr_21 [i_4] [(_Bool)1] [i_4] [i_4] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2040))))));
                    }
                } 
            } 
            var_22 = ((((var_13) + (9223372036854775807LL))) << (((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)12)) ? (var_7) : (((/* implicit */int) var_9)))) > (((int) (unsigned short)2040))))) - (1))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned short)61035))));
                    var_24 = ((/* implicit */signed char) arr_12 [i_6]);
                }
            } 
        } 
        arr_28 [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 + 2]))))) <= (((/* implicit */int) var_18))));
        var_25 = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_27 [i_1 + 2] [i_1 - 1] [i_1 + 2])))));
    }
    for (long long int i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
    {
        arr_32 [i_8] [i_8] = ((/* implicit */_Bool) (+((+(((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(short)2] [i_8] [i_8] [i_8 + 2])))))))));
        arr_33 [i_8 - 1] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-32749)) && (((/* implicit */_Bool) arr_12 [i_8 - 1])))))));
        arr_34 [i_8] [i_8] = ((/* implicit */signed char) -8700961326890838683LL);
    }
    var_26 = ((/* implicit */signed char) var_17);
    var_27 = ((/* implicit */long long int) 3073997168U);
    var_28 = ((/* implicit */_Bool) var_12);
    var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */int) min(((short)-2), (var_8)))) * (((/* implicit */int) var_6))))));
}
