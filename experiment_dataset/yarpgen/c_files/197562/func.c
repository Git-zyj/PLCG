/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197562
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [8LL] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)53476))))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5224266159458001958LL))))) : (((/* implicit */int) (!((_Bool)0))))))));
                    arr_9 [(unsigned char)3] [i_1] [i_1 + 3] [i_1 + 3] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_4)))), ((((-(((/* implicit */int) var_6)))) * (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (arr_0 [i_0] [i_1 + 1]))))))) : (((((/* implicit */_Bool) ((5224266159458001938LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219)))))) ? (((/* implicit */int) arr_1 [i_3 + 3] [i_4])) : ((~(((/* implicit */int) var_8)))))))))));
                                var_16 = ((/* implicit */unsigned int) ((-3541385617668604433LL) != (((/* implicit */long long int) 0))));
                                var_17 = ((/* implicit */long long int) (-((~((~(((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_0] [i_1] [i_2] [i_5]))) : (((/* implicit */long long int) (-(0)))))) + (max((((/* implicit */long long int) ((arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_5 + 1]) ? (var_1) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_5 + 1] [i_2] [i_0]))))), (arr_11 [i_2] [i_6] [i_5] [i_5])))));
                                arr_20 [i_0] [i_0] [i_2] [i_5 + 1] [i_5 + 1] = ((/* implicit */short) min((0), (2147483636)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_13 [i_7] [i_0] [i_1 + 2] [i_0]))));
                        var_20 ^= ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((((/* implicit */_Bool) 2097151)) && (((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_2] [i_7 + 4] [i_0] [i_0])))))))));
                        var_21 = ((/* implicit */_Bool) max((min((((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_2] [i_7 - 1])), (arr_5 [i_0] [i_7 + 1] [i_2] [i_7]))), ((-(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_16 [i_0] [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_7])))))))));
                    }
                    for (unsigned char i_8 = 3; i_8 < 15; i_8 += 3) /* same iter space */
                    {
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-16)) : (-1715657393)));
                        var_23 = ((/* implicit */unsigned char) max((((((arr_23 [i_8 - 3] [i_0] [i_0]) + (9223372036854775807LL))) >> (((arr_23 [i_1] [i_2] [13LL]) + (8378973517571327181LL))))), (max((((/* implicit */long long int) var_4)), (arr_23 [i_0] [i_0] [i_8])))));
                    }
                    for (unsigned char i_9 = 3; i_9 < 15; i_9 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((-5224266159458001939LL), (((/* implicit */long long int) var_3))))))) ? ((((+(arr_12 [i_9] [i_9] [i_2] [i_9] [i_0] [i_2]))) | ((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_9 - 1] [i_2] [i_0])))))) : (((((/* implicit */int) arr_16 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 2])) & (((/* implicit */int) var_0))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((~(arr_5 [i_1 + 3] [i_1 + 1] [i_9 - 2] [i_9 - 2]))) / (min((arr_5 [i_1 - 1] [i_1 - 1] [i_9 + 2] [i_1 - 1]), (arr_5 [i_1 + 3] [i_1 + 1] [i_9 - 2] [i_9]))))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+((~(arr_23 [i_9 + 2] [i_2] [i_1 + 3]))))))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3541385617668604423LL)) || (((/* implicit */_Bool) -5224266159458001943LL))));
                        arr_29 [i_0] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 5224266159458001938LL)) * (((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_9 + 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_0] [i_9] [i_2] [i_9 + 1] [i_0] [i_0]))))) : (min((arr_6 [i_0] [i_1] [i_2] [i_9]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_2] [i_1 + 1] [i_1] [i_0]))))))));
                    }
                    for (unsigned char i_10 = 3; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)176))))) ? (((((/* implicit */int) arr_19 [i_10] [(unsigned short)16] [i_2] [i_1] [i_1 + 1] [i_0])) >> (((arr_7 [i_10] [i_2] [(signed char)1] [i_0]) + (1594451838))))) : ((+(((/* implicit */int) arr_18 [i_10] [i_1 + 1] [i_0])))))))))));
                        arr_32 [i_0] [i_1] [i_10] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_31 [i_10 - 2] [i_1 + 3] [i_10 + 1] [i_2])) / (((/* implicit */int) arr_31 [i_0] [i_1 + 3] [i_10 + 2] [i_10 + 1]))))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(var_1)))) ? (((var_1) / (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) (_Bool)1)))))) ^ ((~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_13)))))))));
    var_30 = (((((+(-2097151))) + (2147483647))) >> (((((/* implicit */int) var_3)) + (128))));
    var_31 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) var_12)))) ? ((+(-8947133774065227298LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))));
}
