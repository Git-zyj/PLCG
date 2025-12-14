/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21925
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_7 [(signed char)11] [2ULL] [(signed char)11] [2ULL]))));
                        arr_12 [(short)5] [(unsigned short)8] [i_2 + 2] [(short)5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 4294967293U)) & (1272145787396009847LL)));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_13))));
                            var_19 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)64210)) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(unsigned short)12] [i_0] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_15 [(short)14])))))));
                        }
                    }
                    for (unsigned char i_5 = 4; i_5 < 20; i_5 += 1) 
                    {
                        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 1] [(unsigned char)9]))))) : (min((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1] [8LL]))) : (arr_16 [i_0] [i_1] [i_1] [12] [i_2] [(unsigned short)2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_6 [(signed char)20] [(signed char)20] [(signed char)20] [i_5 - 2])))))))));
                        arr_21 [6LL] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) < ((+(796809201)))));
                        arr_22 [(signed char)12] [i_2] [i_1] [3ULL] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (signed char)3)), (2470865519U))), (((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) == (arr_16 [i_0] [(short)16] [i_2 + 2] [i_2 + 1] [(signed char)1] [i_0]))))));
                    }
                    var_20 = ((/* implicit */signed char) min((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((long long int) min((407865506), (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_1] [(unsigned short)17]);
                                arr_29 [i_2] [13LL] [i_2] [i_2] [13LL] [4LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8388607LL)) - (arr_13 [i_7] [i_6 - 1] [i_1] [i_1] [(signed char)11] [i_0])))) || (((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_13))))), (arr_6 [i_0] [i_0] [15LL] [i_6 - 1]))))));
                                var_22 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 8304185310491945337LL)) == (5446986869299561624ULL)));
                                var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64210)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775806LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 2; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_15))));
                                var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_30 [(short)1] [i_0] [i_2] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_30 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_9 + 3] [i_9])) : (((/* implicit */int) arr_30 [i_0] [(signed char)10] [(unsigned short)19] [i_9 + 1] [(unsigned short)19])))) <= (var_1)));
                                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_26 [i_8 - 1] [15LL] [(short)10] [i_9 + 3] [i_2 + 2])))) ? ((~(arr_26 [i_8 - 1] [i_1] [i_8 - 1] [i_9 + 3] [i_2 + 2]))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)0))))));
                                arr_35 [16ULL] [i_8 - 1] [i_8] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5667))));
                            }
                        } 
                    } 
                    arr_36 [i_0] [(unsigned char)15] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((arr_16 [i_2] [i_2 - 2] [7U] [i_2 + 1] [i_2 + 1] [i_2]) > (((/* implicit */long long int) 1054810493U))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_12)))) ? (((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_16))))) + (((((/* implicit */_Bool) min((7123332298944005886ULL), (((/* implicit */unsigned long long int) 4294967284U))))) ? (min((((/* implicit */long long int) var_16)), (var_12))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))))));
    /* LoopNest 3 */
    for (long long int i_10 = 1; i_10 < 9; i_10 += 4) 
    {
        for (unsigned short i_11 = 2; i_11 < 6; i_11 += 3) 
        {
            for (short i_12 = 1; i_12 < 9; i_12 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(unsigned char)7] [i_11] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2429225186U)))))));
                    arr_46 [i_11] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_41 [(short)5] [1ULL] [i_12]), (var_9))))))), (((((/* implicit */int) ((2073431123U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)5698)))))) / ((~(270878290)))))));
                    var_29 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_30 -= ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) arr_44 [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5))) : (18446744073709551597ULL))), (((/* implicit */unsigned long long int) 4294967295U)))));
                }
            } 
        } 
    } 
}
