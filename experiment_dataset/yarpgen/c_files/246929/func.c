/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246929
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] &= ((max((var_7), (((/* implicit */unsigned long long int) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) <= (((unsigned long long int) arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_7);
        arr_5 [i_0] |= ((/* implicit */_Bool) ((arr_0 [(_Bool)1]) ? (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) arr_2 [(signed char)1])))) : (var_8))) : (var_2)));
        arr_6 [i_0] [i_0] = ((/* implicit */int) max((arr_2 [1ULL]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [7LL]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (var_1)))))))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_7 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (arr_8 [i_1] [i_1 + 1]))))))) | (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_7 [i_1]))))) >> (((((/* implicit */int) var_0)) + (114)))))))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [7ULL])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) var_5)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_1]))) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned char) arr_8 [7] [7])))))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_11 [i_1 - 1] [i_1]) : (((/* implicit */int) arr_8 [i_2] [i_1]))))) ? (arr_7 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) && (var_6)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_9))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_3)) : (arr_11 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))) : (((((/* implicit */_Bool) arr_7 [13LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1]))) : (arr_7 [i_1])))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_12 &= ((/* implicit */unsigned int) arr_8 [i_1] [i_2]);
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_1] [i_2])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) arr_12 [i_1 - 1] [i_2] [i_3]))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (arr_13 [i_2] [(unsigned short)4] [(_Bool)1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)13] [i_2])) ? (((/* implicit */long long int) arr_13 [i_2] [i_2] [2LL])) : (arr_12 [i_1 - 1] [i_1] [i_1])))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (var_2))))))) : (min((arr_12 [i_1] [i_2] [i_2]), (arr_7 [(_Bool)1])))));
            }
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_10 [15ULL]) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) var_2))))))));
            arr_14 [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((signed char) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((long long int) arr_11 [i_1] [i_2]))) ? (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_8 [(signed char)4] [i_1 + 1]))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) != (max((((/* implicit */long long int) arr_11 [i_4] [i_1])), (arr_12 [4] [4] [4]))))))));
            arr_17 [i_4] = ((/* implicit */unsigned int) var_2);
            var_16 &= ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (arr_7 [i_4])))) ? (((((/* implicit */_Bool) arr_8 [14LL] [14LL])) ? (arr_15 [i_1]) : (((/* implicit */unsigned long long int) arr_12 [16U] [6U] [(_Bool)1])))) : (((/* implicit */unsigned long long int) min((arr_11 [(short)9] [1ULL]), (((/* implicit */int) var_5)))))));
            var_17 = ((/* implicit */unsigned short) var_4);
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 1) 
        {
            arr_20 [i_1] = var_7;
            var_18 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_7 [i_1])) <= (var_4))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) : (arr_19 [9LL] [i_5 - 4] [i_1 - 1])));
        }
        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) var_3);
            var_20 = (i_6 % 2 == zero) ? (((/* implicit */unsigned short) min((((var_7) >> (((arr_13 [i_6] [i_6] [i_6]) - (1057654971))))), (var_2)))) : (((/* implicit */unsigned short) min((((var_7) >> (((((arr_13 [i_6] [i_6] [i_6]) - (1057654971))) - (223241277))))), (var_2))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (arr_19 [10U] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)14] [i_6 + 3])))))) ? (max((var_8), (((/* implicit */unsigned long long int) ((_Bool) var_2))))) : (((/* implicit */unsigned long long int) arr_19 [i_1 + 1] [11ULL] [i_1])))))));
        }
        arr_23 [i_1] = ((((/* implicit */_Bool) max((min((var_2), (var_8))), (((unsigned long long int) var_9))))) ? (arr_21 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */int) ((min((var_8), (((/* implicit */unsigned long long int) var_6)))) <= (((unsigned long long int) var_0))))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_9))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2))))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4)))))) > (((((/* implicit */_Bool) var_7)) ? (var_1) : (var_1)))))))))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_9)) - (var_4)));
    var_25 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_5)) ? (var_9) : (var_9))) + (9223372036854775807LL))) >> (((var_9) + (2886075514272251052LL)))))) ? (min((max((((/* implicit */unsigned long long int) var_3)), (var_7))), (((/* implicit */unsigned long long int) ((int) var_8))))) : (((/* implicit */unsigned long long int) ((long long int) ((short) var_5)))));
}
