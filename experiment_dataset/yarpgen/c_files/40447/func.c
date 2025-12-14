/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40447
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
    var_17 = ((/* implicit */_Bool) (+(857818842796818334ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1] [i_0] [i_2]));
                    var_18 = ((/* implicit */long long int) min((var_18), (((min(((-(var_0))), (-3736429156748433539LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] = ((/* implicit */int) (unsigned short)64240);
                        var_19 = ((/* implicit */unsigned int) (unsigned short)54347);
                        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3]))) / (var_10)))))) ? ((+(-2LL))) : (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)11190)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_2 - 1] [i_2 - 1])), (arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                        var_20 = ((/* implicit */_Bool) var_15);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_2 - 1] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned short)54347)) ? (-26LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40650))));
                        arr_15 [i_4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 3736429156748433543LL)) : (6103091853398984627ULL)))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14ULL)));
                            arr_20 [i_6 + 2] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_5) + (var_10)))) / (arr_18 [i_6 - 1] [i_6] [i_6] [i_5] [i_0])));
                            arr_21 [i_0] [i_1] [i_1] [i_6 + 2] = ((((arr_4 [i_0] [i_0] [i_0]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (((((/* implicit */unsigned long long int) 27LL)) / (6103091853398984630ULL))));
                            var_22 = ((/* implicit */unsigned short) (+(2077576162)));
                        }
                        var_23 *= arr_9 [i_0] [i_2] [i_2 - 1] [i_5];
                        arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_2 - 1] [i_5] [i_2 - 1])) / (((/* implicit */int) arr_16 [i_0] [i_5] [i_2] [i_5] [i_2 - 1]))));
                    }
                }
            } 
        } 
    } 
}
