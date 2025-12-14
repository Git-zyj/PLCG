/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242180
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned int) var_15);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [0LL])) * (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) var_5);
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (signed char)-71)) ? (-8149462758904988738LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))))));
                            arr_16 [i_2 - 1] [i_2] [i_3 - 2] [i_2 - 1] [i_2] [i_0] = var_0;
                            arr_17 [i_0] [i_2] [i_1] [(short)11] [(unsigned short)9] [9ULL] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_2 + 2]))));
                            arr_18 [i_2] [i_1] [i_2] [i_3] [i_4] [i_2 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_3] [i_4])))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */signed char) var_3);
            }
            for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                arr_21 [i_5] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_11 [i_0] [i_0] [i_5 - 1] [i_5] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_6 [i_5])) ? (arr_9 [i_0] [i_0] [i_0] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5] [i_5])))))));
                arr_22 [9] [9] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_5 + 1]))));
                var_23 = ((((/* implicit */_Bool) ((long long int) arr_12 [i_0] [i_0]))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) var_1)));
                var_24 = ((/* implicit */unsigned short) arr_8 [8LL] [i_1] [i_1] [9ULL]);
            }
            arr_23 [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
            var_25 += ((/* implicit */unsigned char) arr_0 [i_1]);
        }
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_34 [i_9] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) var_5))))));
                            arr_35 [i_0] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned short) var_11);
                            arr_36 [i_0] [i_6] [i_7] [(unsigned short)0] [(short)2] [i_9] = ((long long int) arr_33 [i_0] [i_6] [0U] [i_7] [i_7] [i_6]);
                        }
                        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            var_26 = ((long long int) ((((/* implicit */_Bool) arr_0 [4ULL])) ? (arr_11 [i_8] [i_8] [i_0] [i_6] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10] [i_8] [i_8] [i_6] [i_6] [i_0] [i_0])))));
                            arr_39 [i_0] [i_6] = ((/* implicit */signed char) var_5);
                            var_27 = ((int) arr_13 [i_0] [i_6] [i_7] [i_8] [i_7]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            arr_44 [i_0] [i_6] [i_6] [i_7] [i_8] [i_11] = ((/* implicit */short) ((arr_6 [i_0]) / (((/* implicit */long long int) arr_37 [i_0] [i_0] [i_8] [0ULL]))));
                            var_28 = arr_15 [i_0] [i_0] [i_7] [i_8] [i_7] [i_0] [i_7];
                        }
                        var_29 ^= ((/* implicit */signed char) arr_37 [i_8] [(unsigned short)0] [i_7] [i_8]);
                    }
                } 
            } 
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0])) ? (var_3) : (((/* implicit */long long int) arr_26 [i_6]))));
        }
        arr_45 [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_5 [i_0] [i_0] [i_0]));
    }
    var_31 *= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (var_3))));
    var_32 = ((/* implicit */unsigned int) min((max(((~(var_11))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_0)) : (var_11)))) ? (((/* implicit */int) var_18)) : (var_10))))));
}
