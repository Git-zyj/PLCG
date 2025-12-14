/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209878
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (min((((/* implicit */unsigned int) -3)), (var_1)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 309411377)) ? (((/* implicit */long long int) arr_3 [(signed char)4] [i_0])) : (var_2)))) ? ((-(17))) : (-4))) * ((-(((/* implicit */int) (unsigned short)28578))))));
        var_14 = ((int) min((min((var_7), (((/* implicit */long long int) arr_3 [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18184)) && (((/* implicit */_Bool) var_7)))))));
        var_15 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_11))))), (((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (arr_0 [i_0])))))));
        var_16 = ((/* implicit */unsigned short) min(((-((-(((/* implicit */int) (short)-27958)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)135)) - (((/* implicit */int) (short)28011))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_7))));
        var_18 = ((/* implicit */unsigned int) min((max((min((((/* implicit */unsigned short) (short)4)), (var_9))), (((/* implicit */unsigned short) ((unsigned char) arr_4 [i_1]))))), (var_9)));
    }
    for (int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-((-(9223372036854775800LL))))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) (-(var_5)))), (-2767666094796724202LL)))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) (short)1022)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36961)))))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) max((var_0), (var_0)))) + (2147483647))) >> ((((+(((/* implicit */int) var_0)))) + (54))))))));
        var_22 = ((/* implicit */unsigned long long int) max((max((arr_10 [i_3 - 1] [i_3 + 1]), (((/* implicit */long long int) (signed char)-72)))), (((/* implicit */long long int) (((-(((/* implicit */int) arr_9 [i_3])))) * (((/* implicit */int) min(((unsigned short)36961), (((/* implicit */unsigned short) (short)11175))))))))));
        var_23 = ((/* implicit */short) ((((-8) >= (((/* implicit */int) (unsigned char)0)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8)))))) * (min((((/* implicit */unsigned int) arr_4 [i_3])), (var_8))))))));
        var_24 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)36944)), (((((/* implicit */_Bool) 18446744073709551585ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)36932))))));
    }
    var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((((-(((/* implicit */int) var_9)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47352))) >= (3932160U))))))), (max((((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((1113135709U) == (var_1))))))));
    var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((-9223372036854775807LL - 1LL))))))) ? (((((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) 3)))) << (((max((1113135718U), (((/* implicit */unsigned int) (signed char)-95)))) - (4294967201U))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_3)) | (var_1))))));
}
