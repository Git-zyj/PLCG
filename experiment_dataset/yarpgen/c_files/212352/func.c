/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212352
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned long long int) ((var_0) == (((((/* implicit */unsigned long long int) min((var_2), (var_2)))) ^ (((481331747672553137ULL) ^ (arr_2 [i_1] [i_2])))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((17549163026154849135ULL) < (var_3)))) ^ ((+(((/* implicit */int) var_8))))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((short) var_1))))) ? (((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) (-(((var_2) & (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            {
                arr_12 [i_3] [i_3] &= min(((+(((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))))), (min((344365469508291170ULL), (((/* implicit */unsigned long long int) var_2)))));
                arr_13 [i_3] [(short)7] [(short)7] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_0 [i_3]))))), (((((unsigned long long int) var_4)) - (max((var_0), (((/* implicit */unsigned long long int) var_14))))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_20 += ((/* implicit */short) min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_14 [i_3] [i_4] [i_3]))))));
                    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (signed char)-1)), (8328424741862539296ULL))) * (((1604404986988738957ULL) / (10708732971546503392ULL)))))) ? (arr_3 [i_5] [i_4]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_5), (var_10)))))))));
                    var_22 += ((/* implicit */signed char) var_2);
                    var_23 -= ((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */unsigned long long int) arr_1 [i_5])) : (max((var_11), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3])))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_25 [i_3] [i_5] [(short)1] [i_3] [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned long long int) var_2)))) : (((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_4] [i_6] [i_7])) ? (var_12) : (17965412326036998480ULL))))));
                                arr_26 [0LL] [i_5] [1LL] [i_5] [0LL] = ((/* implicit */short) min((var_2), (((/* implicit */long long int) var_5))));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((min((min((var_3), (var_3))), (((unsigned long long int) var_14)))) & (((unsigned long long int) arr_6 [i_6] [i_4] [i_6]))))));
                                arr_27 [i_3] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)91)), (-4116809763812651971LL)));
                            }
                        } 
                    } 
                }
                arr_28 [i_4] [i_3] |= ((/* implicit */signed char) 4613191879166265403LL);
                arr_29 [i_3] = ((unsigned long long int) (signed char)48);
            }
        } 
    } 
}
