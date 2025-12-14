/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237523
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) (signed char)43))) ? (min((arr_12 [i_4] [i_3]), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_0]))))) < (((/* implicit */long long int) ((unsigned int) var_9)))));
                            arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-43)), ((unsigned char)178))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned int) 12612379413545646142ULL);
        }
        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 12612379413545646142ULL)))), (((_Bool) ((12612379413545646142ULL) << (((((/* implicit */int) (unsigned short)22882)) - (22863))))))));
        var_19 |= ((int) ((((/* implicit */_Bool) arr_12 [i_0] [8ULL])) || (((((/* implicit */_Bool) (unsigned char)14)) || (((/* implicit */_Bool) 5314184598803660157ULL))))));
    }
    var_20 = ((/* implicit */int) ((4377642555071860438ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (-1437271986)))) - (((((/* implicit */_Bool) 12612379413545646135ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (1LL))))))));
    var_21 = ((/* implicit */short) var_5);
}
