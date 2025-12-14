/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246037
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
    var_16 = ((/* implicit */long long int) min((9193053608085347957ULL), (((/* implicit */unsigned long long int) (unsigned char)250))));
    var_17 -= ((/* implicit */unsigned short) var_14);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((arr_1 [i_0]) - (13235042680182896686ULL))))))));
        var_19 *= ((/* implicit */short) ((_Bool) arr_0 [i_0]));
        var_20 = ((/* implicit */short) ((unsigned char) arr_0 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3 - 1])) ^ (((/* implicit */int) (unsigned char)5)))))));
                var_22 |= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (1044480U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)7)))))));
                var_24 = ((/* implicit */unsigned char) var_2);
            }
            for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                var_25 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4629124315178705339LL))));
                var_26 &= ((/* implicit */_Bool) (~(9193053608085347957ULL)));
            }
            var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_15)))) && (((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) (unsigned char)7))))));
            arr_12 [i_1] [i_2] |= ((/* implicit */short) arr_10 [i_1] [i_1]);
            var_28 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(1729300464038291627ULL))))));
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_29 -= ((/* implicit */unsigned short) ((_Bool) ((6780250682292125466ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((signed char) (((_Bool)0) ? (318981766U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))))))));
            var_31 = ((/* implicit */unsigned char) (unsigned short)40008);
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (_Bool)1)))))));
        }
        arr_16 [i_1] = ((/* implicit */unsigned short) (~(arr_4 [i_1] [i_1] [(short)11])));
        arr_17 [i_1] = arr_8 [i_1] [i_1] [i_1];
        var_33 = ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) -448311975)));
    }
    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 4; i_7 < 22; i_7 += 3) 
        {
            arr_24 [i_7] = ((short) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) var_1))));
            arr_25 [i_6] [i_7] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) var_12)))));
            arr_26 [18U] [i_7] = ((_Bool) var_15);
        }
        var_34 ^= ((/* implicit */long long int) ((_Bool) (-(((long long int) (_Bool)1)))));
    }
}
