/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224302
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), ((+(((/* implicit */int) (signed char)26))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) == ((+(((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_16))));
                var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0 - 1] [i_0])) << (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) > (((/* implicit */int) var_7))))))) * (((((/* implicit */int) var_18)) / (((/* implicit */int) (short)32767))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                    var_24 = ((/* implicit */signed char) ((unsigned char) max((max((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((var_2), (var_6)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_0] [i_0] [i_2]))) - (-3464683473412117393LL)));
                        arr_12 [i_0] [i_0] [i_0] [13ULL] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((arr_1 [i_0] [i_0]) ? (var_4) : (var_4))));
                        var_25 = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_0] [i_0 + 1] [i_0 + 1]);
                    }
                }
                /* vectorizable */
                for (unsigned short i_4 = 3; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_15 [i_0 + 1] [(signed char)2] [i_1] [i_4] |= ((/* implicit */unsigned int) (~(((var_12) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (short)-32767))))));
                    var_26 = ((/* implicit */unsigned int) (unsigned char)255);
                }
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) var_18)), (arr_2 [i_0] [i_1])))) == (((/* implicit */int) ((var_19) == (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_7);
}
