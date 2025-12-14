/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3996
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
    var_15 &= ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) arr_2 [i_0])))))) & (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
        var_16 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_2 [i_0]))))));
        var_17 ^= ((/* implicit */long long int) (((~(((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_1 [i_0] [i_0])))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(max((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))))) ? (((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_6 [i_1])))) - (((/* implicit */int) arr_6 [i_1])))) : ((((!(arr_4 [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) arr_6 [i_1])))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(4294967267U))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), ((!(((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3] [i_2] [i_2]))))) && ((!(((/* implicit */_Bool) arr_9 [i_3]))))))))));
            arr_16 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_3])), (arr_15 [i_2] [i_2])))))) : (((/* implicit */int) (!(arr_10 [i_2] [i_2]))))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                var_21 = ((/* implicit */short) arr_10 [i_2] [i_2]);
                var_22 = ((/* implicit */_Bool) (+(max((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_2]))) ^ (arr_18 [i_2] [i_2] [i_2]))), (((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_18 [i_2] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_10 [i_2] [i_2]) || (arr_4 [i_3])))) % (((((/* implicit */int) arr_10 [i_2] [i_4])) ^ (((/* implicit */int) arr_13 [i_4] [i_3] [i_2]))))))) ? (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_12 [i_2] [i_3] [i_2])))));
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_4 [i_3]))))))) >= (((14117639458250996906ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57903)))))));
            }
            arr_19 [i_2] [i_3] = ((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_2]);
        }
    }
    var_25 += ((/* implicit */signed char) var_2);
}
