/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45799
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
    var_13 &= ((/* implicit */unsigned char) (+(((max((((/* implicit */unsigned long long int) (_Bool)1)), (255ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_3)))))))));
    var_14 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1558)) + (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) min((max(((unsigned short)2), (((/* implicit */unsigned short) (unsigned char)126)))), (((/* implicit */unsigned short) arr_4 [i_2 - 1]))))), ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_9 [i_0] [i_2] [i_2] [16ULL] = (~((((!(((/* implicit */_Bool) -8295388669169208758LL)))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) : (var_12))));
                }
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_0])))) ^ (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
}
