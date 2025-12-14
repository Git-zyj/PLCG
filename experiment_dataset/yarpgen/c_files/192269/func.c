/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192269
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5759802500049490095LL)) ? (2097151LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))));
            arr_5 [i_1] = ((/* implicit */_Bool) 5759802500049490097LL);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_10 -= arr_2 [(signed char)10] [i_2];
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) arr_1 [i_2]))));
            arr_10 [i_2] [(signed char)19] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2097152LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [(signed char)15] [i_2]))) : (-1669077617861836283LL)))) ? (-1826062092) : ((-(((/* implicit */int) arr_2 [i_2] [i_2]))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_11 = ((/* implicit */long long int) var_9);
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0])) != (((/* implicit */int) (unsigned short)57842))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0])))))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((-9033562946404436891LL) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)2] [(unsigned char)2]))))))));
                }
                arr_18 [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) 0U);
                arr_19 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (_Bool)1);
                arr_20 [i_3] [i_3] = -5759802500049490095LL;
            }
            arr_21 [i_3] [i_3] = ((/* implicit */signed char) arr_6 [(unsigned short)11]);
        }
        var_15 = ((/* implicit */unsigned short) (signed char)-16);
    }
    var_16 = ((/* implicit */signed char) var_7);
}
