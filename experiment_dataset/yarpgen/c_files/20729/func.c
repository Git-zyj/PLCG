/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20729
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61104)) << (((((/* implicit */int) (unsigned short)25454)) - (25447)))))) ? (((long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_9))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)50789)) : (((/* implicit */int) var_7))))));
        var_12 = ((/* implicit */signed char) max((((((/* implicit */int) var_7)) / (((/* implicit */int) var_3)))), (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_2);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_13 = ((/* implicit */long long int) (signed char)2);
            var_14 = ((/* implicit */long long int) max((var_14), ((-(var_10)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (_Bool)1))));
            arr_12 [i_3] = ((/* implicit */long long int) (_Bool)1);
        }
        var_16 = ((/* implicit */signed char) (!((((_Bool)1) && (arr_11 [i_1] [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_0 [i_4] [i_4]))));
            arr_15 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (14637346853774925306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))))))));
            var_18 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) arr_1 [i_4]))))));
            var_19 = ((/* implicit */unsigned long long int) ((arr_9 [i_1] [i_4] [(short)1]) >> (((((((/* implicit */_Bool) (unsigned short)14721)) ? (arr_13 [i_1] [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14696))))) + (5198023567553844298LL)))));
        }
    }
    var_20 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) var_8)))));
}
