/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246682
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
    var_10 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_5) >> (((((/* implicit */int) arr_1 [(short)7])) - (6744))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) || (((/* implicit */_Bool) var_9))));
        var_12 *= ((/* implicit */unsigned char) var_0);
        var_13 -= ((/* implicit */int) min((992U), (max((var_3), (((((/* implicit */_Bool) -1866521590)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : (4294967280U)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_14 -= min((min((((/* implicit */unsigned int) -1866521590)), (arr_4 [i_0]))), (arr_4 [i_0]));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_15 += ((/* implicit */short) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_2] [i_4])))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned int) ((int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [14ULL] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) 14948761178292776504ULL)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            arr_19 [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_3] [i_0] [i_0] [10ULL] [i_0])) > (((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [(short)12] [i_3] [i_4]))))) ^ ((-(((/* implicit */int) arr_9 [i_4] [i_3] [i_0] [i_2] [i_3] [i_0]))))));
                            var_16 += ((/* implicit */unsigned short) max(((~(-1866521577))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */int) (signed char)22))))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 += ((/* implicit */signed char) -1746804951);
                            var_18 = 16U;
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_0] = ((/* implicit */int) (-(((unsigned int) var_5))));
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_19 -= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)64394)), ((~(((/* implicit */int) arr_24 [i_6]))))));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6]))) % (var_3)));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_1))));
}
