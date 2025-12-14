/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32381
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)11740)) ? (arr_4 [i_2]) : (arr_2 [i_0]))))))));
                    var_12 = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        for (long long int i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            {
                arr_13 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_4 + 4] [i_4 + 1] [i_4 + 3])) ? (((int) var_6)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (-875325865))))) * (((/* implicit */int) ((_Bool) 7843028033427780473LL)))));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((_Bool) ((_Bool) arr_12 [i_6 - 1] [i_4 + 2] [i_3 + 1]))))));
                                arr_21 [2LL] [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)7652)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (-2147483626) : (arr_16 [i_3] [i_3] [(unsigned char)6] [6LL])))) : (arr_8 [i_3 - 1]))), (((/* implicit */unsigned int) ((var_6) >> (((((/* implicit */int) arr_12 [9] [(unsigned char)6] [(unsigned short)6])) - (20429))))))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_3] [i_4] [(unsigned short)4] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) != (var_0))))) * (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (11LL))), (((/* implicit */long long int) (unsigned short)52579)))));
                var_14 = ((/* implicit */long long int) ((((arr_20 [i_4 + 4] [i_4 + 3] [i_4 + 2] [i_3] [i_3 + 1] [i_3] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_4]))))) < (((/* implicit */unsigned long long int) 875325864))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned short i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned short)16] [i_4] [(unsigned short)16])) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3 + 1])) / (arr_17 [4LL] [4LL] [i_3])))) || ((!(((/* implicit */_Bool) var_6)))))))));
                            var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_3] [i_4] [i_3])) < (arr_9 [i_3 + 1] [i_3 + 1])))), (9223372036854775807LL)));
                            var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55813))))) ? (((-1LL) & (((/* implicit */long long int) arr_17 [i_3] [(_Bool)1] [i_3 + 1])))) : (((/* implicit */long long int) ((arr_8 [i_3 + 1]) >> (((16777215LL) - (16777196LL)))))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -268435456)) && (((/* implicit */_Bool) 1LL))))))))));
                            arr_27 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max((arr_1 [i_3]), (7253028299530743056LL))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) max((875325864), (((/* implicit */int) (unsigned short)0))))) ^ (arr_26 [i_3] [3LL] [3LL] [i_4] [i_4]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
