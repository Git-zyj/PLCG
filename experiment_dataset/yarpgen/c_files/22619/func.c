/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22619
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_10 ^= ((/* implicit */signed char) max((arr_4 [i_3] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_1] [i_2 + 2] [i_0] [i_3] [i_3]))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                    }
                    var_11 = ((/* implicit */long long int) max((((unsigned short) arr_5 [i_0] [i_0] [i_2])), (((/* implicit */unsigned short) ((short) arr_3 [i_0] [i_0])))));
                }
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_6)))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (max((((/* implicit */unsigned long long int) var_7)), (609313836564474923ULL)))))));
}
