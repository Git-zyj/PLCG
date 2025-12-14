/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231180
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */short) arr_1 [2U] [2U]);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned char)57)))) >= (((((/* implicit */_Bool) (+(536608768U)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_13 = (+(((/* implicit */int) arr_4 [i_1])));
                        arr_13 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3024)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (8433464201071791919LL)))), (arr_8 [i_1] [i_3] [i_1])))));
                        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)35501))));
                    }
                } 
            } 
        } 
    }
    var_15 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
}
