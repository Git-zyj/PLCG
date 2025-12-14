/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190962
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((long long int) var_1)))) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551615ULL)));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_16 = ((/* implicit */signed char) var_13);
            var_17 |= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) - (max((arr_0 [i_0]), (arr_0 [i_0]))));
            var_18 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) 11ULL))), ((+(((/* implicit */int) arr_3 [i_1]))))));
        }
        for (short i_2 = 1; i_2 < 7; i_2 += 3) 
        {
            arr_7 [(short)2] [i_2 + 2] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            var_19 *= (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 2]))) : (39ULL))));
        }
        for (short i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 18446744073709551604ULL))) ? (min((((/* implicit */unsigned long long int) (signed char)-107)), (2828298928564844873ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? ((-(arr_5 [i_3 - 1] [i_3 - 1]))) : (((/* implicit */int) var_14))));
            arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 + 1] [i_3 + 1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23367)))))) ? (((/* implicit */int) ((_Bool) arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1]))) : (((((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1])) >> (((-151730457652620403LL) + (151730457652620431LL)))))));
            arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) max((arr_4 [i_3 + 1] [i_3 - 1] [i_3 + 1]), (((/* implicit */unsigned int) var_7))))) ? (min((arr_4 [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_4 [i_3 + 1] [i_3 - 1] [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15000))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 2) 
                {
                    {
                        arr_18 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) arr_1 [i_3] [i_0]);
                        arr_19 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_3 + 1])) : (3ULL)))) ? (min((18446744073709551598ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3 + 1]))));
                        var_21 -= (-(min((((/* implicit */unsigned long long int) arr_15 [i_4 + 1] [i_3 + 1] [i_5 - 2])), (min((var_13), (((/* implicit */unsigned long long int) var_10)))))));
                        arr_20 [i_0] [i_4 + 1] [i_3] [i_5] = ((/* implicit */signed char) ((min((((((/* implicit */int) arr_8 [i_3] [i_3 - 1])) % (((/* implicit */int) arr_17 [i_0] [i_3] [i_4 + 1] [i_0] [i_3 - 1] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) arr_14 [i_0] [i_4] [i_4 - 1])))))) | (((/* implicit */int) ((((/* implicit */int) (short)-32514)) == (((/* implicit */int) (unsigned short)19342)))))));
                        var_22 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (short)0))))) % (((((/* implicit */unsigned int) ((/* implicit */int) (short)23363))) + (arr_9 [i_5]))))) > (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */signed char) ((arr_4 [i_0] [i_0] [i_5 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))))));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [4LL])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_11)) >= (var_8)))))))) ? ((+(var_12))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))) <= (((/* implicit */int) max(((short)32756), ((short)-8)))))))));
}
