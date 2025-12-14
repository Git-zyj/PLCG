/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19488
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
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((unsigned char) arr_0 [i_0 + 2]);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((arr_1 [i_0 - 1]), ((((_Bool)1) ? (1506532356142098295ULL) : (4505121095735836004ULL))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_0))))) ? (max((arr_1 [(short)0]), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    }
    for (signed char i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_12 *= ((/* implicit */signed char) ((unsigned char) var_1));
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1 + 1] [i_1 - 1]))), (((arr_3 [i_1 - 1] [i_1 + 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 1]))))))))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) + (var_8)))) : (max((((/* implicit */long long int) (signed char)55)), (arr_3 [i_1 - 2] [21LL])))))) : ((+(min((((/* implicit */unsigned long long int) (unsigned char)1)), (1506532356142098308ULL)))))));
        }
        var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 4])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        arr_9 [i_3] = ((/* implicit */unsigned int) ((min((1506532356142098309ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8911800366795040291ULL)) ? (512005902U) : (948701776U))))));
        var_16 = ((/* implicit */unsigned char) (signed char)-107);
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min(((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(signed char)8]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [19U])) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((unsigned int) -7038828165015944174LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))))))));
        arr_14 [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_6), ((+(arr_3 [i_4] [i_4])))))), (((((/* implicit */unsigned long long int) max((arr_3 [i_4] [(short)1]), (((/* implicit */long long int) (_Bool)1))))) % (min((((/* implicit */unsigned long long int) (short)-4096)), (11761173071879880219ULL)))))));
        var_18 *= ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)-63)))));
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)10))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (var_1))))))))));
    var_20 = ((/* implicit */short) min((((/* implicit */int) var_5)), ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)13)) && ((_Bool)1))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)8254)) ? (2004637385U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16816))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))))))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)1))))), (max((4294967295U), (var_8)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
