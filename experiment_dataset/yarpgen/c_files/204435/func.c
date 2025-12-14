/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204435
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))), (((2487238600689222469LL) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775781LL))) + (48LL))) - (21LL))))))), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_1])))))))));
                        var_20 += ((/* implicit */int) 18446744073709551615ULL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_2 - 2] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */short) (signed char)85);
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4 - 1] = (-(((/* implicit */int) (unsigned char)250)));
                        }
                        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)96)), (min((max((((/* implicit */unsigned long long int) var_0)), (var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_1] [i_3]) : (-4702454151930324002LL))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_2))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)1023))))));
            var_23 = ((/* implicit */unsigned char) (~(arr_2 [i_0 + 1])));
        }
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)143)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-85)))))))) <= (max((arr_5 [i_0 - 2]), (((/* implicit */unsigned long long int) var_10))))));
            var_25 = ((/* implicit */long long int) arr_0 [i_6]);
            var_26 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
                    {
                        {
                            arr_29 [i_6] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */signed char) (short)-10388);
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                            var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((3716624258U), (((/* implicit */unsigned int) (signed char)95)))))), (arr_19 [i_8] [i_8] [i_6])));
                            var_29 = ((/* implicit */unsigned int) (!((!((_Bool)0)))));
                        }
                    } 
                } 
                arr_30 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((short) (unsigned short)8738));
                var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40386)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)157))))) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_6] [i_6] [i_6] [i_7])) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) var_2)))) : (min((var_18), (((/* implicit */int) (unsigned char)99)))))))));
                arr_31 [i_6] = ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_18 [i_0] [i_6])), (var_18))), (((/* implicit */int) (short)11978))))) ? (var_7) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) > (arr_1 [i_0]))))))));
            }
            for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_31 = (-(((((/* implicit */_Bool) arr_35 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_14))))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-17))))) ? (((((/* implicit */unsigned long long int) 2199023255536LL)) / (arr_35 [i_12] [i_12 + 3] [i_12 - 2] [5] [i_12] [i_12]))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_35 [i_12] [i_12 + 2] [i_12 + 1] [i_12] [i_12 + 2] [i_12])))));
                        }
                    } 
                } 
                arr_41 [i_6] [i_6] [i_10] [i_10] = ((/* implicit */unsigned char) (signed char)16);
            }
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                var_33 = ((/* implicit */unsigned short) var_1);
                var_34 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(arr_38 [i_6] [i_6] [i_6] [4U] [i_6])))), (((((/* implicit */_Bool) (+(arr_6 [i_0] [i_6] [i_13])))) ? (max((((/* implicit */long long int) (signed char)36)), (2296835809958952960LL))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [10LL]))) : (-6202275662583701707LL)))))));
            }
        }
        arr_44 [2ULL] = ((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)-64))))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 1) 
    {
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) var_0))));
        var_36 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) -7265664202808793164LL))));
    var_38 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))) : ((~(max((576460752303423488ULL), (((/* implicit */unsigned long long int) var_0)))))));
}
