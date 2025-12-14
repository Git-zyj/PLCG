/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51327
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */int) 7972295709454459871ULL);
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    arr_12 [15ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0]))))) ? (10474448364255091744ULL) : ((-(7972295709454459875ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (260096) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (-1891231961) : (((/* implicit */int) var_5)))))))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_0] [i_1] [i_2] [i_0] [i_2 - 1]), (arr_9 [i_2] [9ULL] [2ULL] [i_5] [i_2 - 1]))))) ^ (arr_15 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0])));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) (((-(((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 1318188873)))))));
}
