/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241884
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 6; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8695560167245126352ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5572550161797638100ULL)))))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) 4294967295U))))))))) : (3879627084U)));
                                var_12 -= ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_2 [i_0])))))) ? (var_8) : (((/* implicit */unsigned int) ((int) ((unsigned char) var_7)))));
                                var_13 = ((/* implicit */short) (-(12874193911911913515ULL)));
                                arr_13 [i_0] [i_1] [i_3 + 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(3879627078U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) 4892511389008263732ULL)) ? (((/* implicit */unsigned long long int) (-(1U)))) : (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_0] [(short)2] [i_1] [(short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_1]))))))))));
                                arr_14 [i_1] [i_1 - 2] [i_1] [i_1] [i_3 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((5154414291628003265ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [7ULL]))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_11 [i_1] [i_0] [i_3] [i_3] [(unsigned char)2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2042)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : (var_3)))) ? (((14785556933154055117ULL) | (((/* implicit */unsigned long long int) 415340203U)))) : (min((var_0), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16003317)) ? (((/* implicit */int) (unsigned char)252)) : (2147483627)))));
                            }
                        } 
                    } 
                } 
                var_14 = arr_7 [i_1] [8ULL] [i_0] [8ULL];
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (~(min(((+(7133271797529912203ULL))), (var_0)))));
}
