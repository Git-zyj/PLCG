/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47538
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_12)))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((18446744073709551615ULL) >> (((5052620260740225123LL) - (5052620260740225086LL))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 707909822)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_7))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9)) ? (arr_3 [i_1]) : (((/* implicit */int) arr_2 [i_1]))))) : (arr_0 [17U] [i_1])));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) arr_1 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (arr_9 [i_2])))) : (((((/* implicit */_Bool) 60U)) ? (var_1) : (((/* implicit */long long int) arr_8 [i_2]))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294967254U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))) ? (((((((/* implicit */int) (signed char)1)) != (((/* implicit */int) arr_7 [i_2])))) ? ((-(((/* implicit */int) (unsigned short)21709)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3]))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4294967256U)))) != (((arr_7 [i_2]) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)3] [i_4] [i_3]))))))))));
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_3])) ? (((/* implicit */int) ((unsigned char) -698826563))) : (((/* implicit */int) var_10))));
                }
            } 
        } 
        var_19 *= ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) var_13))))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_16 [i_5]))));
            var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) : ((~(-6201152601053685499LL)))));
            arr_22 [i_5] = ((/* implicit */unsigned int) var_13);
            var_21 = ((arr_7 [i_5]) ? (((/* implicit */int) arr_7 [i_5])) : (((/* implicit */int) arr_7 [i_5])));
        }
        arr_23 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [10U])) ? (arr_8 [i_5]) : (((/* implicit */int) (unsigned char)198)))) * (((/* implicit */int) var_7))));
        var_22 += ((/* implicit */unsigned char) ((signed char) (unsigned char)151));
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)116))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_3))))) : (min((((unsigned long long int) 4294967254U)), (((/* implicit */unsigned long long int) ((int) var_4)))))));
    var_24 *= ((/* implicit */unsigned int) var_12);
    var_25 = ((/* implicit */_Bool) (+(((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) * (4294967259U))) >> (((((/* implicit */int) var_5)) - (14278)))))));
}
