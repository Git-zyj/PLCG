/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229701
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
    var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_3))))))) ? ((+(((/* implicit */int) ((unsigned char) var_6))))) : (((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_13)))) ? (min((arr_1 [i_0]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_21 = arr_0 [i_0] [i_0];
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)14193)) ? (((/* implicit */int) (unsigned short)14211)) : (536613507)));
        var_23 += ((/* implicit */unsigned char) ((unsigned short) 1288180698));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)97)), ((unsigned short)51343)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) var_5)) : (arr_5 [i_2])))));
        var_25 -= ((/* implicit */unsigned short) ((var_1) - (((/* implicit */int) (unsigned short)51343))));
        arr_6 [i_2] = ((/* implicit */_Bool) (unsigned short)24832);
        var_26 *= ((/* implicit */_Bool) arr_0 [i_2] [i_2]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */short) ((4825097054568978052LL) >> (((arr_1 [i_3]) - (1405576832129833291LL)))));
        var_27 *= ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) (signed char)-125))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16774684182692209991ULL)) ? (5691955411335624691ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2029)))));
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((int) (short)13794));
            var_29 = ((/* implicit */_Bool) ((arr_8 [i_3] [i_4]) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)51342))));
        }
    }
    var_30 ^= ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) var_13)) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-26871))) < (var_14))))))), (var_9)));
    var_31 = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) <= ((~(((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_6)))))) : ((-(var_8))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) var_8))))), (min((((/* implicit */short) (_Bool)1)), (var_15)))))))));
}
