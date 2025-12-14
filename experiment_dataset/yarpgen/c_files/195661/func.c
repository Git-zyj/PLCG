/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195661
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) (short)-10658)))), (((/* implicit */int) ((signed char) -1226124271)))));
        arr_3 [5ULL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [3U])) << (((arr_0 [i_0 + 1]) - (5888172658128436737ULL)))))), (arr_0 [i_0])));
    }
    for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (16140901064495857664ULL) : (((/* implicit */unsigned long long int) 2147483647))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)12])) ? (arr_5 [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) -4293317689405254062LL)))) : (((/* implicit */unsigned long long int) (~(var_8)))))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_2] [0ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_10 [i_1 - 3] [13U] [i_1 - 3])))) | (((((/* implicit */_Bool) (short)-29501)) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [15])) : (arr_5 [i_1 + 1] [14ULL])))));
            arr_12 [(unsigned short)2] [(_Bool)1] = ((/* implicit */_Bool) (-(((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2674450548585625857LL) : (((/* implicit */long long int) -1226124271)))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) ((int) min((14217323117845234525ULL), (((/* implicit */unsigned long long int) arr_14 [4LL])))))) ? (((((/* implicit */int) arr_7 [i_1 - 4])) ^ (((/* implicit */int) var_1)))) : (((int) var_9))))));
                        var_13 = ((/* implicit */unsigned long long int) 288230376151711744LL);
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_5 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((int) arr_5 [12ULL] [i_3 + 3]))) : (arr_5 [0] [i_3 + 2])));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [0U] [3])) ? (((/* implicit */int) arr_7 [i_5])) : (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
}
