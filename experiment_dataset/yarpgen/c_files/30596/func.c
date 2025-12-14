/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30596
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
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_6))))) * (((((/* implicit */int) var_5)) >> (((var_2) - (9487153140703704397ULL)))))));
        arr_2 [8] = ((/* implicit */unsigned short) ((1883946853) / (721867)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))) : (((/* implicit */unsigned int) var_3)));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((var_10) + (((/* implicit */unsigned int) var_7))));
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_9 [i_2] = ((((var_8) >> (((var_2) - (9487153140703704404ULL))))) | (((var_8) % (((/* implicit */int) var_1)))));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) var_1))))) - (((((/* implicit */_Bool) ((var_12) * (var_2)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_11))) : (var_12)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) < (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((563010980) != (-59105836)));
                            arr_20 [i_6 + 1] [i_5] [i_4] [i_3] [i_2] [i_2] = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (var_7))) << (((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((((/* implicit */int) var_5)) * (((/* implicit */int) var_1))))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) == (var_13))))) >= (var_10))))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_2) * (var_12))) / (var_2)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) > (-352460583))))) & (max((var_13), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_14)))) < (min((var_11), (((/* implicit */unsigned long long int) var_0))))))))));
                            arr_21 [i_2] [i_3] [i_2] [i_5] [i_2] [0U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) + (-1980618879)))) > (min((((/* implicit */unsigned long long int) var_5)), (var_2)))))) > (((/* implicit */int) ((((var_2) & (((/* implicit */unsigned long long int) var_10)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        }
                        arr_22 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((var_0) != (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (2780020863U)))));
                    }
                } 
            } 
        } 
    }
}
