/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51606
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
    var_11 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (var_1)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_2]);
                        var_12 = ((/* implicit */unsigned int) ((short) (short)26046));
                    }
                    arr_11 [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)4] [i_1])) != (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])))))) != (min((((/* implicit */unsigned int) arr_2 [i_0])), (min((var_3), (((/* implicit */unsigned int) var_8)))))));
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_0])))));
                }
                arr_13 [i_0] [i_1] = ((/* implicit */signed char) min((min((2147483647), (((/* implicit */int) (unsigned char)143)))), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0]))))));
                var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((11615363493737021064ULL), (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13311))))))))) ? (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]))) < (arr_1 [i_0])))))) : (((/* implicit */int) (unsigned char)109))));
            }
        } 
    } 
}
