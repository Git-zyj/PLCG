/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245707
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (-(var_7))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [13ULL]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_2));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [(short)6] = ((/* implicit */short) ((((/* implicit */int) ((((unsigned long long int) var_0)) >= (var_0)))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) != (arr_5 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (10358698287231135504ULL))))))));
            var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((unsigned long long int) arr_0 [i_0])) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_1])))) : (((var_7) + (arr_4 [2LL] [i_0]))))))))));
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_8))));
            var_13 ^= var_7;
        }
        arr_7 [i_0] &= ((/* implicit */unsigned long long int) var_4);
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_14 [1LL] [1LL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_3)) : (((int) var_7))))) ? (((unsigned long long int) ((unsigned long long int) var_8))) : (var_5)));
            arr_15 [(unsigned char)1] [i_2] [i_3] = ((/* implicit */unsigned int) var_1);
            arr_16 [i_2] = ((/* implicit */short) var_4);
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_6))));
        }
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_4))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_5)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_24 [i_6] [5LL] [i_4] [i_6] = ((/* implicit */long long int) ((_Bool) ((unsigned short) var_3)));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_0 [i_2]))));
                    }
                    arr_25 [(short)8] [i_4] [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */long long int) arr_13 [(short)11] [i_4] [i_4])) + (((long long int) var_8))))));
                }
            } 
        } 
    }
}
