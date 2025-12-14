/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50722
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
    var_11 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)10755)), (8865919446054586330ULL)))) ? (((/* implicit */int) (!(var_9)))) : (((/* implicit */int) ((short) (unsigned char)108))));
    var_12 = ((/* implicit */unsigned short) ((short) min((var_0), (((/* implicit */unsigned long long int) ((signed char) var_2))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 2])) ? (arr_2 [i_2] [i_1]) : (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (signed char)-67)), (-2061344523))))))));
                    arr_10 [i_1] [i_1] [i_2 + 1] = ((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))));
                    var_13 = ((/* implicit */_Bool) 67108736ULL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) & ((+(12545627081020299947ULL))))))));
                        var_15 += ((/* implicit */unsigned char) 18446744073642442880ULL);
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) ((7203726467274144278ULL) & (12545627081020299947ULL))))), (((((/* implicit */_Bool) (short)-31300)) ? ((~(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))));
                }
            } 
        } 
    } 
}
