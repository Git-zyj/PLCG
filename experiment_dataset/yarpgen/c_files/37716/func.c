/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37716
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
    var_12 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((5ULL), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                var_14 = ((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (+((~(((/* implicit */int) var_8)))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3] [i_3 + 1] [i_3]))))))));
                            arr_13 [i_2] [i_2] [i_0] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)209)) * (((/* implicit */int) arr_8 [(unsigned char)0] [i_1] [i_2] [i_3 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [9ULL] [i_2] [i_3 - 1] [i_2]))) : (var_1))));
                            var_16 = ((/* implicit */_Bool) ((unsigned long long int) (((+(((/* implicit */int) (unsigned char)209)))) <= (((/* implicit */int) (unsigned char)47)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                            {
                                var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_10 [i_0] [i_5 - 1] [i_4] [i_1] [i_0]))))) > (max((var_4), (((/* implicit */long long int) arr_8 [i_6] [i_5] [i_4] [i_1])))))))) > ((~(var_1))));
                                arr_22 [i_0] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)95)))) + (min((min((((/* implicit */long long int) arr_11 [i_6] [i_0] [i_4] [i_0])), (-7532013847784615869LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_4])))))))));
                                arr_23 [i_0] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_10)) | (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
                            }
                            for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                            {
                                arr_27 [i_7] [i_5] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */short) 4294967294U);
                                arr_28 [i_0] [i_1] [i_5 - 1] [i_5 - 1] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7] [i_5] [2LL] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_0] [i_4] [i_0]))))), (((((-16LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_6)) + (16537))) - (22)))))))));
                            }
                            var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_7))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_19 += (!(((/* implicit */_Bool) (unsigned char)109)));
                        var_20 *= arr_26 [i_8] [0ULL] [i_0] [i_9] [i_9];
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_8])) + (((/* implicit */int) arr_32 [i_9] [i_8] [i_1] [i_1] [i_0] [i_0]))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) % (arr_20 [i_9] [i_1])));
                        var_23 = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 3; i_10 < 9; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned char) (~(arr_21 [i_11] [i_1] [i_11 - 1] [i_1] [i_10 - 3])));
                                var_25 = ((/* implicit */unsigned long long int) var_7);
                                var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -7532013847784615888LL)))))) : (var_4)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-85))))) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (2144617092612082141ULL)))))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (short)32767))));
                    var_29 &= ((/* implicit */unsigned long long int) (_Bool)0);
                }
            }
        } 
    } 
}
