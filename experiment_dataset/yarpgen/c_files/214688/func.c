/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214688
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    var_15 *= ((/* implicit */short) arr_1 [i_0 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_16 ^= ((/* implicit */signed char) (-((~(var_14)))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] |= ((/* implicit */signed char) ((_Bool) ((arr_4 [i_3] [i_2] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((int) arr_0 [i_0 - 1])))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-70)) ? (((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_0])) << (((arr_9 [i_0] [(unsigned char)2] [9U] [i_2 + 1] [i_3] [i_0]) - (16600627292431056938ULL))))) : ((~(((/* implicit */int) arr_13 [i_0 + 1] [i_1] [13] [i_1] [i_4])))))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))))))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned long long int) (-(arr_4 [i_2 - 3] [i_0 - 1] [i_0 + 1])));
                    var_22 = ((/* implicit */short) 1048765356U);
                    arr_15 [(signed char)13] [i_1] [i_2 - 2] = ((/* implicit */signed char) 4294967295U);
                }
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (short i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (short)5796)) : (((/* implicit */int) (signed char)-121))))))));
                                var_24 *= ((/* implicit */_Bool) var_2);
                                var_25 -= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_12)) & (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_23 [i_0 - 2] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)69)), (-567323578)))) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_5] [i_5] [i_5])) : (18014398509481984ULL)))) ? (min((arr_20 [i_1] [i_0 - 2] [i_5] [(short)5]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2])))) : (270215977642229760ULL));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_0 [i_1])) + ((~((+(arr_7 [(signed char)14] [i_1] [i_0])))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) (_Bool)1);
    var_28 = ((/* implicit */signed char) ((((var_13) + (((((/* implicit */_Bool) var_5)) ? (3147066242U) : (var_7))))) - (((/* implicit */unsigned int) var_6))));
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (unsigned short i_10 = 2; i_10 < 9; i_10 += 2) 
            {
                {
                    arr_32 [i_8] [i_9] [0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (signed char)-120)), (var_7))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_9] [(_Bool)1] [i_10]))) - (arr_19 [i_10])))));
                    var_29 *= ((short) ((((arr_17 [i_8] [(short)12] [i_10]) | (((/* implicit */unsigned long long int) var_13)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) < (((/* implicit */int) arr_27 [1]))))))));
                }
            } 
        } 
    } 
}
