/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248444
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? ((+(((/* implicit */int) arr_0 [(signed char)8] [(short)11])))) : ((~(1729705331))))) * (((/* implicit */int) arr_1 [i_0])));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_7 [(signed char)11] [i_2 - 1] [i_2]))))) + (max((((/* implicit */unsigned long long int) var_14)), (arr_6 [i_0] [i_2 - 1] [i_0] [i_0])))));
                    var_18 = ((/* implicit */short) ((((min((7291421536337252985ULL), (((/* implicit */unsigned long long int) var_8)))) << (((((/* implicit */int) arr_0 [i_1] [i_1])) - (1516))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((((/* implicit */int) (short)20651)) | (((/* implicit */int) var_12))))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) max((7291421536337252986ULL), (((/* implicit */unsigned long long int) var_2))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_5]))))) > (max((((arr_8 [i_4]) << (((((/* implicit */int) (signed char)-15)) + (53))))), (min((7291421536337253008ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                    arr_18 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_6)) - (25)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [15U] [i_3 - 1])) ? (((/* implicit */int) var_14)) : (-165898219))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) * (7291421536337252964ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1040187392U))) : (((((/* implicit */_Bool) 62967662U)) ? (8079352676276061668ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767)))))))));
                }
            } 
        } 
    } 
}
