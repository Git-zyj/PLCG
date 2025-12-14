/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208377
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) : (((((/* implicit */_Bool) var_8)) ? ((~(var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_8 [i_0] [i_2] [i_2] [18U] [i_3] [i_3 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((-597070405) ^ (((/* implicit */int) var_9))))) / (var_3))))));
                            arr_9 [i_0 + 1] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned char)228))))))) ^ (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
                            var_16 = ((/* implicit */int) (unsigned char)228);
                            var_17 -= ((/* implicit */short) (~(arr_0 [i_0])));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned long long int) (~(arr_7 [(unsigned char)5] [i_1 + 2] [4LL] [i_0] [7ULL])));
                arr_10 [i_0] [i_0] [15] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) (unsigned char)45))))), (var_6)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) /* same iter space */
    {
        var_19 = ((((/* implicit */_Bool) arr_4 [i_4] [(signed char)16] [i_4] [i_4 - 2])) ? (((long long int) var_10)) : ((~(min((-4702127131040117399LL), (((/* implicit */long long int) (unsigned char)28)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            arr_18 [i_4] = ((((/* implicit */_Bool) 659053113)) ? (((/* implicit */int) (unsigned char)28)) : (-659053114));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */int) ((arr_19 [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 2]) << ((((((((~(9223372036854775807LL))) - (-9223372036854775806LL))) + (54LL))) - (49LL)))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_15 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23966))) : (((unsigned long long int) var_7))));
                arr_23 [i_4 + 2] [2LL] [i_4] = arr_11 [i_6] [i_4];
            }
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
            {
                arr_26 [13] [i_4] = ((/* implicit */short) 277951591U);
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [4])))) ? (arr_20 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
            }
            var_23 = ((/* implicit */int) var_10);
        }
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) 575745607U);
            arr_29 [i_4] [10U] = (~(((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)149)), (var_7)))) + ((((_Bool)1) ? (arr_16 [i_4]) : (((/* implicit */unsigned long long int) arr_17 [i_4 - 2] [i_8])))))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                arr_34 [i_4] [i_8] [i_4] = ((/* implicit */unsigned int) 15617364922171084827ULL);
                var_25 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4 - 1])))));
                var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_16 [i_8]))))));
                arr_35 [i_4 + 1] [i_8] [i_4] = ((/* implicit */signed char) arr_14 [i_4] [i_4]);
            }
        }
        var_27 = ((/* implicit */_Bool) ((unsigned int) (~((~(((/* implicit */int) arr_33 [i_4] [i_4 - 2])))))));
        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_2 [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((short) arr_33 [(signed char)16] [i_4]))))) : (((((/* implicit */_Bool) (unsigned char)201)) ? (var_3) : (((/* implicit */long long int) arr_17 [i_4 + 2] [i_4 - 3]))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 3; i_10 < 14; i_10 += 3) /* same iter space */
    {
        arr_38 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_10] [i_10] [i_10] [i_10])) ^ (((/* implicit */int) (unsigned char)219))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_10] [i_10 - 3]))) : (arr_20 [i_10]));
        var_29 *= ((/* implicit */signed char) 3585148952U);
    }
    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        arr_41 [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) -4702127131040117406LL))));
        var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (((((((/* implicit */long long int) ((/* implicit */int) var_5))) % (4702127131040117399LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118)))))));
    }
    var_31 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))))));
}
