/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241196
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_1 [i_0]))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) var_2));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2] [0U] [i_2 - 2] [i_2 + 2])) ? (arr_6 [i_0] [i_1] [i_2 + 2] [i_1]) : (((long long int) var_6))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((4541353601634515655ULL) - (4541353601634515654ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (558999161U) : (3735968116U)))) : (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) 558999191U)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [4LL] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_4 [i_0] [i_0])))))) : ((-(558999161U))))))));
    }
    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        var_19 = ((/* implicit */short) 5196733164299376957LL);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min(((unsigned char)22), ((unsigned char)31))))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_10))));
        arr_12 [i_3] [i_3] = arr_11 [i_3 + 1];
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_10)))), (var_3)))) ? (((/* implicit */long long int) (-(2147483645)))) : (var_4))))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_23 [i_7] [i_5] = (-(((((/* implicit */_Bool) arr_13 [i_7])) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) var_14)))));
                            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_20 [i_6] [i_6 - 1] [i_6] [i_6 + 2])))) ? (((((/* implicit */int) (unsigned char)234)) / (((/* implicit */int) arr_16 [i_6 + 2] [i_6] [i_6])))) : (((/* implicit */int) var_11))));
                            arr_24 [i_4] [i_4] = ((/* implicit */int) max((((558999178U) * (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (1177750371U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) arr_15 [i_4] [i_5]))) != (max((arr_17 [i_4] [i_5]), (((/* implicit */unsigned long long int) -2259202055482936115LL)))))))));
                            arr_25 [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max(((-(((/* implicit */int) var_6)))), ((+(((/* implicit */int) (unsigned char)22)))))))));
                var_25 = arr_18 [i_4] [i_4] [i_4];
            }
        } 
    } 
}
