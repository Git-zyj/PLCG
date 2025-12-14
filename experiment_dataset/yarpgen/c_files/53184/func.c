/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53184
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
    var_14 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) var_4)), (2378905421005767027ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)60865))))) ? (((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1])))))) : (((/* implicit */int) ((short) min((var_1), (var_1)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) var_3);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)32755)) <= (((/* implicit */int) var_3))))) / (((/* implicit */int) var_12)))));
                    var_15 = 3372786648006663402LL;
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_15 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-21791)) : (((/* implicit */int) var_13))))) ? (var_1) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_9)))))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (short)32755)) < (((/* implicit */int) (signed char)-125))))), ((+(((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) min(((unsigned short)65535), (var_13)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1))))) : (min((((/* implicit */long long int) (short)149)), (var_7)))))));
                    arr_16 [i_0] = ((/* implicit */signed char) arr_2 [i_0 + 1]);
                    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) 15513142490524254119ULL)) ? (((/* implicit */int) (short)28899)) : ((~(((/* implicit */int) (unsigned short)23380))))));
                }
            }
        } 
    } 
}
