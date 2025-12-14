/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24586
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
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -446506087)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1287026542833075719ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) max((var_7), (((/* implicit */short) var_9))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_0])) % (((var_2) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)7923);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */short) ((long long int) (unsigned char)129));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (unsigned short)65535))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                arr_18 [i_4] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4] [i_4 + 3]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_6))))));
                arr_19 [i_5] [i_5] [i_5] = ((/* implicit */int) var_3);
                arr_20 [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (arr_17 [i_5] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))))));
            }
        } 
    } 
}
