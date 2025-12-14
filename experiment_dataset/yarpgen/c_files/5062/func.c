/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5062
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
    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))), (max((((/* implicit */unsigned int) var_5)), (var_2)))))) ? (((((/* implicit */_Bool) var_4)) ? (((long long int) (unsigned short)18949)) : (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_8)))))))) : (((/* implicit */long long int) ((((unsigned int) var_10)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_0))))))));
            arr_6 [(short)20] [(short)20] [i_1] = ((/* implicit */unsigned char) ((signed char) (signed char)0));
        }
        for (signed char i_2 = 4; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_13 ^= ((/* implicit */signed char) ((((var_11) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) ((unsigned char) var_3)))));
            arr_10 [0U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_4)))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_14 = ((/* implicit */int) ((unsigned int) var_3));
            var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_5))))));
            /* LoopSeq 4 */
            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                arr_17 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                var_16 = ((/* implicit */unsigned long long int) var_7);
            }
            for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                arr_21 [i_3] = ((unsigned char) ((signed char) -9223372036854775778LL));
                var_17 = ((/* implicit */int) min((var_17), (((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))));
            }
            for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                var_18 = ((/* implicit */unsigned int) ((unsigned char) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3))));
                var_19 = ((/* implicit */int) var_2);
                arr_25 [0LL] [0LL] [i_6] &= ((/* implicit */unsigned char) ((int) var_9));
            }
            for (int i_7 = 3; i_7 < 23; i_7 += 1) 
            {
                arr_29 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                arr_30 [i_3] [21LL] [21LL] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) <= (((/* implicit */int) ((signed char) var_11)))));
            }
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1045486086)) ? (-9223372036854775778LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19385)))));
        }
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_1)) > (var_6))))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))) ? (max((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned short) var_4))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_9)))) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) var_1))))));
}
