/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46647
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
    var_14 = var_9;
    var_15 = ((/* implicit */unsigned short) var_5);
    var_16 = var_2;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 335272012U))));
        var_18 += (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-17415))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) << (((((((((/* implicit */int) (short)-17415)) == (((/* implicit */int) arr_0 [0LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_8))))) - (11850675512600190605ULL))))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)72)));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)49))));
            arr_6 [i_1] [i_1] [i_2] &= ((/* implicit */unsigned int) arr_3 [i_2]);
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)57660), (((/* implicit */unsigned short) (_Bool)1)))))) | (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2])) ? (arr_4 [4ULL] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)165))))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) (unsigned short)16384)) / (((/* implicit */int) (unsigned short)57660))))));
            arr_9 [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_3]);
            var_24 = ((/* implicit */signed char) ((int) ((unsigned char) arr_5 [i_1] [i_3] [i_3])));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) + (arr_7 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))) ? (((((/* implicit */int) ((short) var_12))) << (((var_1) - (6709320828206225963LL))))) : ((~(((/* implicit */int) var_10))))));
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-84)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)9651))))));
    }
}
