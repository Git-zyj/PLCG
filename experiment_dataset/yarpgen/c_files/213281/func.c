/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213281
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
    var_11 = ((/* implicit */long long int) (+(((/* implicit */int) (short)26501))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) (+((-(((/* implicit */int) max((((/* implicit */short) (signed char)8)), ((short)-16439))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (short i_3 = 4; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_15 [i_2] [i_2] [i_1] [i_2] [i_0] = (!(((/* implicit */_Bool) (short)-16439)));
                            var_13 = ((/* implicit */signed char) (+((+(((((/* implicit */int) (signed char)51)) * (((/* implicit */int) (unsigned short)65519))))))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */long long int) (+((-((+(12851494953429627410ULL)))))));
            arr_16 [i_1] = ((/* implicit */unsigned short) ((-59335288) ^ (((/* implicit */int) (short)-26498))));
        }
        arr_17 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0])), ((-(((/* implicit */int) (short)-16448))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0]))) & (arr_7 [24LL])))));
    }
    var_15 |= ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1))))))), (8796090925056LL)));
}
