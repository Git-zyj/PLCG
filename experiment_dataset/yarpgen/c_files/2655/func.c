/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2655
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16457)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)39682)) : (((/* implicit */int) var_10))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (signed char)0)) ? (9066051586588716274ULL) : (var_7)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */short) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_5)))))));
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 + 3] [i_1])) - (((/* implicit */int) arr_6 [i_2 - 2] [i_2] [i_2 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (_Bool)0))))) ^ (((/* implicit */int) arr_3 [i_1]))))) : (arr_5 [i_0] [i_2 + 3] [i_0] [i_2])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-48)) / (((int) var_4)))) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(signed char)11]))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) arr_14 [i_4 + 1] [i_4]);
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            arr_18 [i_4] [i_4] [20ULL] = ((/* implicit */long long int) ((arr_17 [i_4 + 1] [i_4]) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (unsigned short)16448)) : (((/* implicit */int) (_Bool)1))))));
            var_14 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3664822977U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) : (4668261604576857333ULL))) * (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [(_Bool)1] [15])))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_15 = ((arr_19 [i_6] [i_6]) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : (((/* implicit */int) arr_6 [i_6] [i_6] [i_6])));
        arr_22 [i_6] = ((/* implicit */_Bool) (+(var_9)));
    }
}
