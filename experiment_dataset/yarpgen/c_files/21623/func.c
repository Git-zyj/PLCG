/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21623
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 2620502102287796932LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2620502102287796932LL)));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (_Bool)1)))))) : (((-2620502102287796938LL) + (-2620502102287796948LL)))))) ? (((int) ((((/* implicit */int) (unsigned short)64)) / (var_1)))) : ((-((((-2147483647 - 1)) * (((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */int) 4294967293U);
        var_17 = ((/* implicit */signed char) ((((int) 524287U)) ^ (max((((((/* implicit */int) (short)32767)) & (((/* implicit */int) var_7)))), (((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_1 [i_1]))));
                    arr_12 [i_3] [i_2 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1039)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((var_9) ^ (var_8))) : ((~(var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */long long int) arr_2 [(unsigned short)16] [i_3 + 1])) : (((((/* implicit */long long int) 4294967293U)) % (-2620502102287796950LL))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 273859295945331392LL)) == (18446744073709551615ULL)));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) max((arr_5 [6LL] [i_1] [i_1]), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_1]))))) < (min((11075427453151067994ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))))) || (((((/* implicit */int) (_Bool)1)) == (2065970973)))));
    }
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned long long int) (unsigned short)65470);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((3717009543495801325LL), (((/* implicit */long long int) (unsigned short)64))))) && (((((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) arr_2 [i_4] [i_4]))))));
        var_21 = ((/* implicit */signed char) (unsigned short)65492);
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_20 [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775797LL) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (530298164U))));
            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) -7346188221599949132LL))), (((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) (short)20092)) : (((/* implicit */int) (short)(-32767 - 1)))))))) && (((((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16U])))))) >= (min((arr_2 [i_4] [i_4]), (arr_2 [(unsigned char)19] [i_5])))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_6 - 1]))));
            arr_23 [i_6] [i_4] [i_6] = (unsigned char)144;
            var_24 = var_11;
        }
        for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 1) 
        {
            arr_26 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_7])) < (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [(unsigned char)1]))))), (((unsigned short) (short)(-32767 - 1)))));
            var_25 = ((/* implicit */_Bool) max((((((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) 933863531732744401LL))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))) == (arr_6 [i_4])))))), ((+(((/* implicit */int) var_5))))));
            arr_27 [i_4] = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-4429190001200702843LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_7] [i_7 - 1]))))));
            arr_28 [i_4] [i_7] = ((((/* implicit */int) ((max((arr_15 [i_4]), (((/* implicit */unsigned int) 742248182)))) >= (((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_7])) ? (945408671U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20092)))))))) >= (((/* implicit */int) arr_25 [i_4] [12LL])));
        }
    }
    var_26 = ((/* implicit */long long int) var_5);
    var_27 = max((((var_10) && (((/* implicit */_Bool) 8087300062390720195LL)))), (((((/* implicit */_Bool) 8191ULL)) || (((/* implicit */_Bool) 1022)))));
}
