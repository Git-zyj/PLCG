/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44864
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_4 [(unsigned char)0] [i_0] = ((((/* implicit */int) arr_3 [i_0])) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (-1421183180) : (((/* implicit */int) var_1)))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1463346158540289334ULL) & (13100667899614531849ULL)))) ? (((((/* implicit */int) (unsigned char)17)) - (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)31787)) : (((/* implicit */int) var_3))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_20 = var_4;
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_1])), (arr_5 [i_1] [i_1])))) ^ (11980316915939959367ULL)))) ? (((((/* implicit */_Bool) (unsigned char)85)) ? (((((/* implicit */_Bool) 1463346158540289334ULL)) ? (5346076174095019769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
        var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (1421183175))) / (((/* implicit */int) var_11))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 1852577872)) ? (((/* implicit */unsigned int) var_7)) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_2] [i_3] [i_2])), (-8006921821928996076LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)98), (((/* implicit */signed char) var_17)))))) : (arr_10 [i_2] [i_2] [i_2])))));
            var_24 = ((/* implicit */short) arr_8 [i_2]);
            var_25 = ((/* implicit */unsigned char) max((var_25), ((unsigned char)156)));
        }
        var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_2])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) * (var_4)))))) ? (arr_9 [i_2]) : ((+(((/* implicit */int) min(((unsigned char)162), (((/* implicit */unsigned char) (_Bool)1)))))))));
        var_27 = ((/* implicit */unsigned long long int) arr_10 [i_2 + 1] [i_2 + 1] [i_2]);
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) var_5))))) ? (((((((/* implicit */int) var_11)) + (2147483647))) >> (((arr_11 [i_2]) - (17881286258140682072ULL))))) : (((arr_9 [i_2]) & (var_8)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((arr_8 [i_2]), (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13549)))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_29 ^= ((/* implicit */unsigned char) arr_13 [i_4]);
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                var_30 = ((/* implicit */int) ((((((/* implicit */int) arr_15 [i_5])) * (((/* implicit */int) (unsigned char)254)))) != (((/* implicit */int) (signed char)30))));
                var_31 = ((/* implicit */unsigned int) var_14);
            }
            var_32 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)209)) % (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) arr_13 [i_4])))))));
        }
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_4] [(_Bool)1])) ? ((-(((/* implicit */int) arr_12 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_16 [20LL] [i_4] [14])) ? (((/* implicit */int) arr_15 [(unsigned char)20])) : (arr_17 [i_4] [i_4] [i_4])))));
    }
    var_34 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_3)) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_4))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8719)) ? (1105160061) : (var_8)))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_4)))))));
}
