/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48111
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) var_4);
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned char)0))));
                            arr_12 [i_1] [10] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [(unsigned char)17]);
                            arr_13 [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_3] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), (((long long int) (unsigned char)242)))))));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_5 - 1] [(signed char)20] [(unsigned char)7] [11ULL] [i_5])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_19 [(unsigned char)0] [i_1] [i_1] [i_1] [(unsigned char)3] [0ULL])) : (((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_0] [i_4] [i_5] [i_0])))) : ((+(((/* implicit */int) var_7)))))))));
                            arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = (~(2050385696));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (int i_7 = 3; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_7))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_7] [i_7 - 1] [(_Bool)1] [(_Bool)1])) + (((/* implicit */int) arr_14 [i_1] [i_7 + 2] [i_7 + 1] [i_7 + 1])))))));
                            arr_26 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_15 [i_0 - 2] [i_1] [i_6] [i_7]), (arr_15 [(short)9] [(short)9] [i_6] [i_7 - 2])))) ? ((+(4687074856057641846LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0])))))));
                            var_23 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 16349373888920045914ULL))) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_0 + 1])), ((unsigned char)166))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            {
                                arr_42 [i_8] [i_11] [i_11 + 3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(short)9] [9LL])) >> (((((/* implicit */int) (short)9253)) - (9245)))))) ? (((/* implicit */int) arr_38 [i_8] [i_9 - 1] [i_10] [i_11] [i_11])) : ((~(((/* implicit */int) (_Bool)1))))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4687074856057641860LL)) ? (((((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))))) : ((~((~(3058585676517019995ULL)))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [(short)8] [i_12] [(short)8] [i_11] [i_12] [(short)8])) ? (((3058585676517019995ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (var_14)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 3; i_13 < 15; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((65535LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) arr_8 [i_8] [i_9] [i_13] [i_14])) : (arr_36 [4ULL] [i_9] [i_10] [i_10] [i_10] [i_9])))) && ((!(((/* implicit */_Bool) -7289879963202369392LL))))))))));
                                var_27 *= ((/* implicit */signed char) max((-65535LL), (((/* implicit */long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 1; i_16 < 13; i_16 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */int) (signed char)20)) : (arr_10 [i_9 + 2] [i_15] [i_16 + 1] [i_9 + 2])))));
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_8])) ? ((~(arr_36 [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1] [2] [i_10]))) : (min((((((/* implicit */int) var_17)) & (((/* implicit */int) arr_52 [(short)2] [(signed char)6] [i_10] [i_16] [i_16] [i_15] [i_8])))), ((~(((/* implicit */int) (_Bool)1)))))))))));
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) (unsigned short)61834))))))))))));
                                var_31 = ((/* implicit */unsigned long long int) (+(((min((arr_41 [i_10] [i_16]), (((/* implicit */int) arr_49 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_16])))) + (((/* implicit */int) var_17))))));
                                arr_54 [i_8] [i_9 - 1] [i_10] [i_15] [i_16] = ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_15] [i_9 + 3] [i_8])) < (((/* implicit */int) arr_3 [i_16] [i_9 + 2] [(short)20]))))) - (((/* implicit */int) ((((/* implicit */int) arr_3 [i_16 + 1] [i_9 - 2] [i_9])) < (((/* implicit */int) arr_3 [i_15] [i_9 - 2] [i_9]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61826))) : (var_9)))))));
}
