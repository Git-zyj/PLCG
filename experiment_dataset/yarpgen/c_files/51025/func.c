/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51025
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((min((arr_2 [i_0] [i_0] [i_1 - 1]), (arr_2 [i_0] [i_0] [i_1 + 2]))) < (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) (short)-1834))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned short) ((_Bool) arr_0 [i_1 + 1]));
                    var_17 -= ((/* implicit */unsigned long long int) var_9);
                    var_18 *= ((/* implicit */unsigned long long int) (unsigned char)181);
                }
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_3 + 2]))));
                                var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)9951)) != (((/* implicit */int) (short)-9951))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) && (((/* implicit */_Bool) arr_11 [i_4] [i_1 + 2] [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)67)), ((short)-9928)))) | (((/* implicit */int) min((arr_10 [i_0] [i_1 - 1] [i_3 + 1] [i_1 - 1]), (arr_10 [i_0] [i_1 - 1] [i_3 + 1] [i_3]))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30)))))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((var_9) || (((/* implicit */_Bool) var_7)))))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_1]))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_18 [i_7] [i_7] = ((/* implicit */long long int) ((10754273694449967025ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22641)))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((long long int) arr_10 [i_7] [i_7] [i_7] [i_7]))))) / (max((arr_17 [i_7]), (((/* implicit */long long int) arr_1 [i_7])))))))));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 1; i_8 < 14; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) arr_10 [i_11] [i_11] [i_11 - 1] [i_11 - 1]);
                            var_27 = ((/* implicit */signed char) (short)-23235);
                            var_28 = ((/* implicit */unsigned short) (short)9951);
                            var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_8] [i_9])), (var_7)));
                        }
                    } 
                } 
                arr_29 [i_9] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) 1399749762628254617LL)), (7692470379259584591ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                {
                    var_30 = max((((((/* implicit */int) (short)-1)) - (((/* implicit */int) var_2)))), (var_11));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((11452277203781512986ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22637))))))));
                    arr_39 [i_13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_16 [i_14])), (((max((arr_11 [i_12] [i_13] [i_13] [i_12] [i_13] [9U]), (((/* implicit */unsigned int) (unsigned char)168)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_38 [i_12] [i_12] [i_12] [i_12]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((2989861075945784648ULL), (((/* implicit */unsigned long long int) (signed char)-60))))) ? (((/* implicit */int) ((unsigned char) (short)-26371))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-48)) && (((/* implicit */_Bool) (unsigned char)106)))))));
                }
            } 
        } 
    } 
}
