/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241376
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [(short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_17) == (arr_1 [i_0] [i_0]))) ? (((/* implicit */int) var_16)) : ((+(((/* implicit */int) var_5))))))) ? ((+(((/* implicit */int) ((short) var_18))))) : ((~(min((var_12), (((/* implicit */int) var_19))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_20 = ((/* implicit */int) var_15);
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            arr_15 [i_4] [(short)1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_9))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-109)))));
                            var_21 = ((/* implicit */short) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_4])))));
                            var_22 = ((/* implicit */short) ((int) var_12));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)51))) % (-6505030476516194286LL)));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 17; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) ((var_17) / (-1LL)));
                            arr_25 [i_7] [i_7] [i_6] [17] [i_6] [13] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((int) var_4))) ? ((~(var_9))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_14))))))))));
                    var_25 *= ((/* implicit */signed char) var_11);
                }
                for (int i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_15);
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(short)13] [i_5] [i_1] [i_1] [(short)11])) || (((/* implicit */_Bool) var_19))));
                    var_27 -= (~(((/* implicit */int) arr_23 [10LL] [10LL])));
                }
            }
            /* vectorizable */
            for (long long int i_10 = 3; i_10 < 16; i_10 += 2) 
            {
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_15))));
                var_29 = ((/* implicit */short) ((((/* implicit */int) ((signed char) (signed char)60))) << (((((var_13) / (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_1] [i_0] [i_10])))) + (11376008812LL)))));
                arr_35 [i_1] [i_1] |= ((int) arr_10 [i_10 - 3] [i_10 + 1] [i_10] [i_10] [i_10 + 2]);
            }
            var_30 = ((/* implicit */short) var_12);
            var_31 = var_5;
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) >= (var_9))))) : (-2411531243424065255LL)));
    }
    for (short i_11 = 0; i_11 < 22; i_11 += 2) 
    {
        var_33 = ((/* implicit */long long int) var_2);
        arr_39 [i_11] = ((signed char) (-2147483647 - 1));
    }
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (-6844838647260973086LL) : (2411531243424065255LL))) == (((/* implicit */long long int) (+(0)))))))) : (((min((((/* implicit */long long int) 298412869)), (var_10))) << (((((var_8) + (2112502846))) - (28)))))));
    var_35 = ((/* implicit */short) 2147483647);
    var_36 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((var_6) + (9223372036854775807LL))) >> (((var_15) + (7881549419158350503LL)))))) ? (min((var_6), (var_17))) : (max((((/* implicit */long long int) var_5)), (9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_16))))));
}
