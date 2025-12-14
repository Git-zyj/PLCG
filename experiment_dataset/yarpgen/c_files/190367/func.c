/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190367
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) 18446744073709551615ULL);
                    var_20 = ((/* implicit */int) max((max((-5793030312083111496LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 3] [(signed char)0] [i_2])) : (((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 3] [i_0] [i_0]))))))), (((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned long long int) var_8)), (32ULL)))))));
                }
            } 
        } 
    } 
    var_21 -= max((var_18), (var_15));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) 18446744073709551615ULL))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((((/* implicit */_Bool) ((9ULL) >> (((var_2) - (794107885U)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))))) : (((/* implicit */unsigned long long int) var_5))));
                arr_14 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((((/* implicit */_Bool) 3291629634080637429LL)) ? (-17) : (var_5)))))), (min((arr_13 [20ULL] [i_3] [i_3]), (arr_13 [i_4] [i_3] [i_3])))));
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 24; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (arr_13 [i_5 - 2] [13] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (min((((long long int) arr_13 [i_5 + 1] [i_4] [i_3])), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)121)), ((unsigned char)21))))))));
                            arr_20 [i_4] = ((/* implicit */long long int) arr_12 [i_4]);
                            var_25 ^= ((/* implicit */unsigned int) -629561034);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)112)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) var_9);
}
