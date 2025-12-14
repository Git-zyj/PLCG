/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26438
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
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) min((var_5), (((/* implicit */signed char) ((var_10) <= (((/* implicit */int) var_7))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */short) (+(((/* implicit */int) (signed char)37))));
                    var_17 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) (unsigned short)18373)) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 1])))) : ((+(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1])))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) 664698367))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) 12801587491639796649ULL)) ? (((/* implicit */int) var_11)) : (arr_2 [i_2] [i_1] [i_4])))))) + (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_12))), ((+(var_12))))))));
                            var_19 = (+(min((var_3), (((/* implicit */int) var_9)))));
                            var_20 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))) - (3663747514U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3 - 1] [(unsigned char)6] [17] [i_3 - 1] [i_3 - 1] [i_3 - 1])) >= (((/* implicit */int) arr_8 [4] [i_3] [10ULL] [(signed char)13] [i_3 - 1] [i_3 - 1])))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((arr_16 [i_1]), (((/* implicit */unsigned char) var_7))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_0) + (3138074609184648847LL))))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (((unsigned int) arr_9 [i_1] [i_1]))))) + (min((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 2] [i_5] [i_2] [1U] [17ULL]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (arr_10 [(_Bool)1] [i_1] [23LL] [i_5])))))));
                        }
                        var_24 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (var_12)))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (arr_9 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))))));
                        arr_20 [i_1] [10U] [22LL] [i_1] = ((/* implicit */unsigned short) ((unsigned int) 925885633U));
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)37)), ((unsigned short)18373))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_2);
}
