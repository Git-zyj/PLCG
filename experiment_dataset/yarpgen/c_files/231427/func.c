/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231427
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 *= ((/* implicit */long long int) ((_Bool) arr_1 [i_0] [i_0]));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((signed char) (unsigned short)59964)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : ((-(((/* implicit */int) var_11)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_8 [i_2] = ((((((/* implicit */_Bool) 14124998137550146558ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (4159077804U))) << (((4321745936159405058ULL) - (4321745936159405051ULL))));
            var_22 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) var_15)))));
            arr_9 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((1360814984987306728ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_2]))))));
        }
    }
    var_23 = ((/* implicit */int) ((-17LL) ^ (((/* implicit */long long int) 622572539U))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            {
                var_24 = ((/* implicit */_Bool) -1739949516);
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_19 [i_3] [i_3] [i_6])), (arr_14 [i_3] [i_4 - 1] [i_6])));
                            arr_20 [i_4] [i_3 + 1] = (((~(((/* implicit */int) var_8)))) / (min((arr_13 [i_3 + 1]), (arr_13 [i_3 + 1]))));
                        }
                    } 
                } 
                var_26 += ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_8))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (4321745936159405057ULL))))));
            }
        } 
    } 
}
