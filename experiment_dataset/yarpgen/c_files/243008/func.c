/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243008
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
    var_10 = ((/* implicit */unsigned char) max(((((-(11093279142653943496ULL))) - (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned short) (signed char)60)), (var_1)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */short) (-(((/* implicit */int) (signed char)110))));
                        arr_9 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) 2041369267U))));
                    }
                } 
            } 
            var_13 |= ((/* implicit */signed char) ((unsigned short) arr_2 [i_0] [i_1] [i_0]));
            arr_10 [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
        }
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((((/* implicit */int) arr_11 [i_4])) >> (((var_9) - (12686025355612026352ULL))))), (((/* implicit */int) var_1))))), (var_5))))));
        arr_13 [i_4] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (unsigned short)65111))))), (var_2))));
        arr_14 [i_4] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_12 [i_4] [i_4])))) & (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)62)) || (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) max((arr_11 [i_4]), (((/* implicit */unsigned short) (signed char)-51))))))))));
    }
    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (min(((signed char)-64), ((signed char)-64)))))) << (((/* implicit */int) ((arr_16 [i_5 - 1] [i_5 - 1]) >= (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) (unsigned short)24169))))))))));
        var_16 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) (signed char)119)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) 2041369267U)))), (((/* implicit */unsigned long long int) (short)-10469))))));
    }
    var_17 &= var_5;
}
