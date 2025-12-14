/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/349
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((short) ((unsigned long long int) arr_4 [i_1] [(_Bool)1] [i_0]));
                var_18 ^= ((/* implicit */unsigned int) (short)-18416);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2]);
        var_19 = ((/* implicit */signed char) ((arr_1 [i_2 + 2]) ^ (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) arr_6 [i_2] [9] [2ULL]))))));
        var_20 -= ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2 + 3] [8U]);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) -8855094395244984517LL))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                arr_17 [i_2] [(_Bool)1] [i_4] [0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21817))) ^ (arr_2 [i_2 + 2])));
                var_22 = ((/* implicit */unsigned long long int) arr_14 [i_2 + 2]);
                var_23 = ((/* implicit */short) arr_13 [i_2] [(signed char)8]);
                var_24 += ((/* implicit */unsigned long long int) var_7);
                arr_18 [i_2] [i_2] [(short)8] [5ULL] = ((/* implicit */long long int) arr_13 [i_3] [i_3]);
            }
            var_25 = ((/* implicit */_Bool) -387204891);
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_2])) <= (((unsigned long long int) 12592573368736806847ULL)))))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 = ((/* implicit */signed char) ((((/* implicit */int) (short)21814)) <= (arr_20 [(signed char)20])));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((arr_19 [i_5] [7]) / (((/* implicit */long long int) arr_20 [i_5])))))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)21817)) && ((_Bool)1)))))))));
        arr_21 [i_5] = ((var_15) ^ (((arr_20 [i_5]) - (((((/* implicit */int) (unsigned short)35911)) * (((/* implicit */int) (short)12290)))))));
    }
    var_29 ^= ((/* implicit */unsigned short) var_1);
    var_30 = ((/* implicit */unsigned char) var_11);
}
