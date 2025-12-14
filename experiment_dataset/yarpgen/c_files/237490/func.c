/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237490
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_10 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), ((~(arr_4 [i_0 + 3] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-3)) == (((/* implicit */int) (short)31776))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-3)), (7635552325686440205LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_3] [i_1] [i_3] [i_3])), (((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))))) : ((~(max((arr_3 [i_0 + 1] [i_1]), (((/* implicit */unsigned long long int) (signed char)-31))))))));
                            arr_11 [i_1] = (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_2])))) && (((/* implicit */_Bool) 17462311365090905967ULL))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_2] [i_1]))))));
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((long long int) var_3)))));
                            }
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [17U] [i_2])) ? (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (unsigned char)0))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 3] [i_0 + 3])), (arr_13 [i_0 + 3] [i_3] [i_2] [i_3] [i_2] [i_0 + 2] [i_0 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) var_1);
    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned char) ((signed char) var_5))))));
}
