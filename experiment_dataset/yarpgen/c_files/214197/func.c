/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214197
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
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) min((((int) (-(((/* implicit */int) var_10))))), (arr_5 [i_0] [i_1] [i_0])));
                            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_0 + 1]))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [1U] [1U] [i_3])) <= (1485048286))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_10))))))) : (((long long int) arr_3 [i_0 + 1]))));
                            arr_10 [i_0] [(_Bool)1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */int) (!(var_3)))) : (((((/* implicit */int) var_10)) >> (((/* implicit */int) (_Bool)1)))))));
                            var_13 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_1] [i_3])), (arr_5 [i_0] [i_2] [i_3])))), ((-(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (arr_6 [i_2] [i_2])))))))));
                        }
                    } 
                } 
                arr_11 [i_0 + 1] [i_0] = ((/* implicit */signed char) var_9);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [i_0 + 1] [i_1] [i_4] = ((/* implicit */short) var_4);
                    arr_17 [i_0] [i_1] [i_4] |= ((arr_3 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (18446744073709551601ULL));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_5] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [3] [i_6 + 1])) ? (((/* implicit */int) arr_6 [i_5] [i_6 + 1])) : (((/* implicit */int) arr_6 [i_5] [i_6 + 1]))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))));
                arr_22 [i_6] [i_6 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_5] [i_6 - 1])), (arr_21 [i_6 + 1]))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_8 [i_6] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5]))))))) | (((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_6]))) : ((+(arr_8 [i_6 + 1] [i_6] [i_6 - 1] [i_5])))))));
                arr_23 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_6 - 1]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32073))) ^ (1307400319U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_0))) ? ((~(((/* implicit */int) (unsigned char)130)))) : (((/* implicit */int) ((_Bool) arr_13 [i_5]))))))));
                var_15 = ((/* implicit */unsigned long long int) arr_2 [i_5] [i_6]);
            }
        } 
    } 
}
