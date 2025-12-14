/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214344
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_19 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0 + 1]))));
            var_20 = ((/* implicit */short) (((-(var_10))) >> (((arr_2 [(_Bool)1] [i_0]) - (1375691051)))));
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_6 [i_0] = ((((/* implicit */int) max((arr_5 [i_2] [i_0 + 1]), (arr_5 [i_0 - 2] [i_0 - 2])))) & (((/* implicit */int) ((unsigned char) var_16))));
            var_21 *= ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_2])))) <= (max((6272213598616228669ULL), (((/* implicit */unsigned long long int) var_16))))));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (~(min((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])), (3087137664939173888ULL))))))));
            var_23 &= ((/* implicit */int) (~(max((((arr_0 [(_Bool)1]) + (((/* implicit */unsigned long long int) var_2)))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_4 [0U] [(signed char)20] [i_0]))))))));
        }
        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18437))) * (0U)));
        var_25 = arr_2 [i_0] [i_0];
        var_26 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [8])) > (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_4 [(signed char)22] [(signed char)18] [i_0])))))))) << (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 2] [(signed char)2] [i_0])) <= (((/* implicit */int) (_Bool)1)))))));
    }
    var_27 = ((/* implicit */long long int) var_14);
}
