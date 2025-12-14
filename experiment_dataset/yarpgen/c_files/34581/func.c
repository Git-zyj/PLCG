/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34581
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((long long int) var_5)) >> (((/* implicit */int) (unsigned short)0)))))));
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (985162418487296ULL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)65535))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_5)))) - (((/* implicit */int) (!(((/* implicit */_Bool) 7283458497642040874LL)))))));
        var_12 = ((/* implicit */short) ((3794555075682707924LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_2])))) > ((~(((/* implicit */int) var_1))))));
                                arr_18 [i_1] [i_2] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)47996))) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_6))))), (((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (_Bool)0)))))) * (arr_5 [i_1] [i_2] [8LL])))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 1626648681)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned long long int) ((int) var_8)))))) + (((/* implicit */int) min((((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((_Bool) var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_26 [i_1] [i_2] [i_1] [i_6] [i_7] [i_6] [i_6] = max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((arr_25 [i_6] [i_6] [i_6] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) (short)-2579)))))));
                                var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */int) max((var_1), (arr_7 [i_7] [i_3] [i_7])))) > (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
