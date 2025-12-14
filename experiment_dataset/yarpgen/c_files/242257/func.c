/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242257
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
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-119)) + (2147483647))) << (((arr_0 [i_0]) - (5791874504737425019LL)))))) ? (((((/* implicit */int) (unsigned short)16697)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (103))))) : (((/* implicit */int) ((((/* implicit */long long int) 3263896764U)) != (arr_0 [i_0]))))))) : (((unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-119)) + (2147483647))) << (((((((arr_0 [i_0]) - (5791874504737425019LL))) + (7327452740216962343LL))) - (26LL)))))) ? (((((/* implicit */int) (unsigned short)16697)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (103))))) : (((/* implicit */int) ((((/* implicit */long long int) 3263896764U)) != (arr_0 [i_0])))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) (signed char)71))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))) > (arr_8 [i_2 + 1] [i_2 + 1])));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_17 = arr_18 [i_1] [(unsigned short)8] [14U] [i_4] [i_5] [i_4];
                            var_18 ^= ((/* implicit */unsigned char) arr_13 [i_2 - 1] [i_2 - 1]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_3] [i_2] [i_2] [i_1] [(unsigned short)10] [i_2 - 1] [i_1]))));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_20 ^= ((/* implicit */short) (((_Bool)1) ? (142989288169013248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72)))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_27 [i_1] [i_2] [i_6] [i_2] [(short)16] [i_8] [i_8] = ((/* implicit */_Bool) var_7);
                            arr_28 [i_1] [i_2 + 1] [i_2] [i_2] [i_8] = ((/* implicit */int) ((arr_26 [i_2 + 1] [i_6 - 1] [i_1] [(unsigned char)1] [i_1] [i_2 + 1] [i_1]) / (((/* implicit */unsigned long long int) arr_15 [i_1] [i_2] [i_1]))));
                            arr_29 [i_2] [i_6] [i_6] [i_2] [i_2] = ((/* implicit */unsigned char) (+(arr_9 [i_7] [i_6 - 1] [i_1])));
                            arr_30 [(unsigned short)12] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)0] [i_7] [i_6 - 1] [(unsigned char)0]))) : (var_11)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                arr_33 [i_1] [i_2] [i_2] = ((((/* implicit */unsigned long long int) var_11)) % (arr_21 [i_1] [i_2 + 1] [i_9] [i_9]));
                arr_34 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 1]))) * (11417119177844875581ULL)));
            }
            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2 + 1] [i_2 + 1])) ^ (((/* implicit */int) arr_19 [i_2] [i_2] [i_2 - 1] [i_2]))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_15 [i_1] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (((unsigned long long int) arr_31 [i_1] [4LL] [4LL]))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (-8039632949541494173LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10])))))));
        arr_38 [i_10] = ((/* implicit */_Bool) max((((unsigned short) (_Bool)0)), ((unsigned short)6)));
        arr_39 [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_10])) ? (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6578))) : (2259673116545528610ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_10])) & (((/* implicit */int) (unsigned short)47748))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_10] [i_10])))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) 388580875491575162LL))));
    }
}
