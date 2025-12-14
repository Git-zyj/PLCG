/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3660
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
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_1)))) | (((unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [19]))))) : (var_11)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2131)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        {
                            arr_13 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (((((/* implicit */_Bool) (unsigned short)2131)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63386)))) : (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)112))))));
                            var_16 = ((/* implicit */short) min((min(((unsigned short)61832), ((unsigned short)61823))), (((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) != (((/* implicit */int) (_Bool)1)))) && (arr_6 [i_0] [i_1] [i_2] [i_3]))))));
                            var_17 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) (unsigned short)59463))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_18 = min((min((((/* implicit */unsigned int) (unsigned short)61825)), (var_10))), (((/* implicit */unsigned int) var_13)));
}
