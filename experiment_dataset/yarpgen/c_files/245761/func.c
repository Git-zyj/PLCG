/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245761
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
    var_15 = ((/* implicit */unsigned short) ((long long int) var_12));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */short) ((int) (unsigned char)31));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)32));
        arr_7 [i_1 + 1] = ((/* implicit */unsigned char) var_10);
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((9223372036854775807LL) | (arr_10 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3031545825U)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6168926044695731792LL)) ? (3546821848U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) max((1036067849), (var_7)))) : ((~(-4755225847205557064LL)))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((short) var_10));
        arr_13 [i_2] = ((/* implicit */_Bool) -1429099183);
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_19 [i_3] = ((/* implicit */unsigned int) ((9223372036854775796LL) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((-8761342601637088016LL) % (arr_10 [i_3])))))));
            arr_20 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(arr_18 [i_3])))))) ? ((((!(((/* implicit */_Bool) -7789210385364892816LL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) ((unsigned char) arr_15 [i_3] [i_4])))));
            arr_21 [i_3] [i_3] [(short)3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)19)), (124516794U)));
            arr_22 [(unsigned char)6] [7] = ((/* implicit */long long int) (_Bool)0);
        }
        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_25 [i_3] [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)31116))))) % (((arr_16 [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))))) >= (((/* implicit */unsigned int) ((var_7) | (((/* implicit */int) var_13)))))));
            arr_26 [i_5] [i_5] = ((/* implicit */unsigned int) ((int) 18446744073709551615ULL));
            arr_27 [i_3] [i_3] = ((/* implicit */_Bool) 9494419185193141289ULL);
        }
        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 3; i_7 < 15; i_7 += 2) 
            {
                arr_33 [i_6] = ((/* implicit */int) (-(arr_16 [i_3])));
                arr_34 [i_3] [i_3] [i_6] [i_7] = ((/* implicit */unsigned int) min((min((1678351435), (((/* implicit */int) (unsigned char)93)))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (_Bool)1)))))));
            }
            arr_35 [i_6] = ((/* implicit */short) arr_23 [(signed char)16]);
        }
        arr_36 [i_3] [i_3] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_23 [i_3])), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)202))))))));
    }
    var_16 = ((/* implicit */int) ((unsigned short) min((var_0), ((~(((/* implicit */int) (signed char)62)))))));
}
