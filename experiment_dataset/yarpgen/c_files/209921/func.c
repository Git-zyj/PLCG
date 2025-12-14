/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209921
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
    var_10 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_2)));
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0)))))))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) var_0))))))))));
    var_13 = ((/* implicit */short) max((var_7), (((((((/* implicit */_Bool) 3792276768U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))) >> (((((((/* implicit */long long int) var_4)) % (var_6))) - (3836452967LL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((min((var_7), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) ((unsigned int) 2239007318U)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_5 [i_0] [i_1]));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) -4539141690467079989LL)) ? (arr_3 [i_2]) : (arr_3 [i_0])));
                arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
                arr_9 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_8);
            }
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) >> (((((int) max((((/* implicit */unsigned long long int) 315451798U)), (1ULL)))) - (315451773)))));
        }
        arr_11 [i_0] [i_0] = ((/* implicit */short) max(((unsigned short)65535), ((unsigned short)40267)));
    }
}
