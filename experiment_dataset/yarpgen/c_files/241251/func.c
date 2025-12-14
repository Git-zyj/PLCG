/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241251
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
    var_10 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_0))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_1] [i_2] [(_Bool)1]));
                    var_14 = var_4;
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (((~(((((/* implicit */int) (unsigned char)54)) * (((/* implicit */int) (unsigned char)253)))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3] [i_3]))))) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [1ULL] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_11 [i_3] [i_3]))));
    }
}
