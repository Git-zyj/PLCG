/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28740
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 -= ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < (var_3)))) | (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) min((max((((/* implicit */unsigned short) (signed char)-71)), ((unsigned short)56045))), (((/* implicit */unsigned short) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_2] [i_2] [(unsigned short)14] &= ((/* implicit */unsigned long long int) max((arr_4 [i_1] [(signed char)5]), (((/* implicit */unsigned int) (signed char)31))));
            arr_10 [i_1] = ((/* implicit */signed char) ((unsigned long long int) min((9519000304715419340ULL), (7ULL))));
            var_20 &= ((/* implicit */signed char) arr_7 [i_2] [i_2] [i_1]);
        }
        for (unsigned short i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            var_21 |= 2088960U;
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min(((signed char)-47), ((signed char)-82))))));
                    arr_20 [(signed char)9] [i_1] [i_3] [0ULL] [i_1] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1 + 2] [i_5 + 1] [i_3 - 3])) / (((/* implicit */int) (signed char)-11))))), (min((arr_4 [i_4 - 1] [i_5]), (arr_4 [i_4 - 1] [i_4])))));
                }
                var_23 = ((/* implicit */_Bool) min((arr_16 [i_4 - 1] [(signed char)8] [i_4 - 1] [i_3 + 2] [i_1 + 1]), (arr_16 [i_4 - 1] [18U] [i_4 - 1] [i_3 + 2] [i_1 - 1])));
            }
        }
        arr_21 [i_1] [0U] = ((/* implicit */unsigned char) min((7497076606985102635ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 2]))));
        var_24 -= ((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 2]);
        arr_22 [i_1] [i_1] = ((/* implicit */unsigned int) min(((signed char)-47), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [(_Bool)1])), (9519000304715419350ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [21ULL]))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        arr_26 [(_Bool)1] = ((/* implicit */signed char) min((((arr_5 [i_6] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_6] [i_6] [i_6])) / (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [(signed char)13] [i_6]))))), (min((((/* implicit */unsigned int) (signed char)-82)), (2088960U)))))));
        var_25 = ((/* implicit */unsigned short) arr_23 [i_6]);
        arr_27 [i_6] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min(((signed char)-68), ((signed char)67))))))) || (((((/* implicit */int) (unsigned short)62959)) < (((/* implicit */int) var_0))))));
}
