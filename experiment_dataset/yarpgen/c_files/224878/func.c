/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224878
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            arr_7 [(unsigned char)14] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_0 [i_1 - 1]) > (9223372036854775807LL)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)11] [i_1]))))))) : (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1]))) : (2LL)))))));
            arr_8 [i_0] [(_Bool)0] [i_0] = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) (short)30916)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22230))) : (920953341991572933ULL))))) + (1977489848039141179ULL)));
            arr_9 [i_0] [i_0] [i_1] = (short)32737;
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_0]))), (((/* implicit */unsigned long long int) var_17))));
            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */short) max((var_10), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2]))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            arr_18 [i_3] [i_0] = ((/* implicit */_Bool) 5762390033529417199LL);
            arr_19 [i_0] [(short)2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [2LL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29282))))))) : (arr_11 [i_3 - 1] [(short)12])));
        }
        arr_20 [i_0] = ((/* implicit */_Bool) var_17);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_30 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)198)) << (((((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) - (32))))), (((((/* implicit */_Bool) arr_4 [i_6] [i_5] [i_4])) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_6]))))));
                    arr_31 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (short)32767)))), (((/* implicit */int) (short)32171))));
                    arr_32 [(short)4] [(unsigned char)0] [(_Bool)0] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_4]))));
                }
            } 
        } 
    } 
}
