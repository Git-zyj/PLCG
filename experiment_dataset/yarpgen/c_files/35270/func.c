/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35270
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
    var_10 &= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 4180964911U)) : ((+(var_4))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) >= (((((/* implicit */_Bool) min((-9223372036854775800LL), (((/* implicit */long long int) 4180964893U))))) ? (var_4) : (((/* implicit */unsigned long long int) (+(var_8))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                arr_6 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                var_12 = ((/* implicit */signed char) (-(((((/* implicit */int) var_2)) + (((/* implicit */int) var_7))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (72057589742960640ULL) : (((/* implicit */unsigned long long int) -7367206187922781945LL))))) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL))));
                arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned short) arr_5 [i_1]));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((9223372036854775785LL) >> (((((/* implicit */int) (unsigned short)30114)) - (30107))))) : ((~(1587936872125165500LL)))));
                            arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))) ? ((+(var_6))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_3])) & (((/* implicit */int) arr_9 [i_0] [i_1] [i_1])))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_4) > (arr_10 [i_0]))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_6] [i_6] = ((/* implicit */short) min((min((((((/* implicit */_Bool) (signed char)-34)) ? (6727430254286471829ULL) : (1088407370609926666ULL))), (min((var_3), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6 - 1] [i_0] [i_0]))) / (max((((/* implicit */long long int) 545133645)), (-9223372036854775793LL))))))));
            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42438))) * (var_5))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) arr_4 [i_0] [i_0] [i_6])))))))));
            var_16 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 1352122688)) ? (((/* implicit */unsigned long long int) 9223372036854775773LL)) : (var_4))), (min((((/* implicit */unsigned long long int) arr_8 [i_0])), (var_3))))), (var_3)));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))) : (7559805980084829619LL)));
            var_18 *= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) arr_2 [i_6] [i_6] [i_0])) != (((/* implicit */int) var_9))))) > (((/* implicit */int) ((1018496591807276160LL) != (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((min((((/* implicit */long long int) var_2)), (2850957864953022491LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))))));
        }
        var_19 &= ((/* implicit */signed char) arr_8 [i_0]);
        var_20 = ((/* implicit */unsigned char) -9223372036854775774LL);
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))) != (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))), (((((long long int) 9223372036854775777LL)) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (23229)))))));
    }
}
