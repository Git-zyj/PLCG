/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30216
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
    var_17 = ((/* implicit */unsigned long long int) var_2);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_10), (var_12))), (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3524)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)11385)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ^ (((unsigned long long int) var_8))));
        var_20 = ((/* implicit */unsigned long long int) var_2);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_0 [(short)4]))));
        var_22 = ((/* implicit */short) ((((((/* implicit */int) var_7)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33585))) : (arr_3 [7U]));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) >> (((((/* implicit */int) arr_0 [18ULL])) - (65)))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_2] [i_2])) % (((/* implicit */int) arr_5 [i_2] [i_2])))) | ((+(((/* implicit */int) (short)6570))))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */short) min(((!((_Bool)1))), (((_Bool) var_7))))), (arr_5 [i_2] [i_2])));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned short) (+(min((-1273562786242180526LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_3] [17] [i_5] [i_6] [i_7])))))))));
                            var_25 -= ((/* implicit */long long int) max((arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ^ (((unsigned int) var_8))))));
                            var_26 = ((/* implicit */unsigned int) var_8);
                            var_27 += ((/* implicit */_Bool) min((((var_11) ? (arr_20 [i_6 - 1] [i_4] [i_5] [i_5] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (min((((/* implicit */unsigned int) arr_17 [i_6 + 3] [i_4] [i_5] [i_7])), (2402525606U)))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) arr_5 [i_4] [i_4]))), (((long long int) (short)-2080))));
            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (((((/* implicit */int) arr_6 [i_3])) | ((~(((/* implicit */int) (short)-6555)))))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)18471))))));
        }
        for (unsigned int i_8 = 4; i_8 < 22; i_8 += 4) 
        {
            var_31 &= ((/* implicit */_Bool) (~((~(18446744073709551615ULL)))));
            arr_23 [i_3] [22ULL] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned short)28775)) ? (((/* implicit */int) (unsigned short)36780)) : (((/* implicit */int) (unsigned char)0))))));
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3197361084U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 35093168U))));
        /* LoopNest 3 */
        for (long long int i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (unsigned int i_11 = 3; i_11 < 20; i_11 += 4) 
                {
                    {
                        var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_2)), (var_14)));
                        arr_31 [i_3] [i_9] [i_9] [i_10] [(unsigned char)14] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 12582912)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6570))) : (18446744073709551611ULL))), (max((((((/* implicit */_Bool) arr_22 [i_3] [i_3])) ? (var_14) : (((/* implicit */unsigned long long int) arr_17 [21U] [i_10] [21U] [(unsigned short)20])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))))));
                        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
        } 
    }
    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) 871468854))));
}
