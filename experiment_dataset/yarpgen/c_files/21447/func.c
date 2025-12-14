/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21447
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
    var_18 = ((/* implicit */long long int) var_0);
    var_19 &= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))) - (((((/* implicit */_Bool) (short)-26909)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19585))) : (8431253007309762319ULL))))), (((/* implicit */unsigned long long int) (+(max((0U), (((/* implicit */unsigned int) var_4)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [(unsigned char)19]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_1] [(short)19] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_5 [i_1] [i_2] [i_3 - 4] [(short)10])) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3 - 1] [i_4])))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = max((((max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (6849144154411323628ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 + 4] [i_4 + 3] [i_4] [(unsigned char)13] [i_4] [i_4 + 4] [i_4]))))), (((/* implicit */unsigned long long int) min((arr_9 [(unsigned short)11] [i_3 - 2] [i_3 + 2] [i_4] [i_4 + 1] [i_4] [i_4 + 1]), (arr_9 [0U] [i_3 - 3] [i_3 - 3] [18LL] [2LL] [i_4] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) 6849144154411323628ULL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))) : (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45950))) : (((arr_0 [i_0 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)26905)) && (((/* implicit */_Bool) 6849144154411323628ULL)))))) : (min((((/* implicit */unsigned long long int) arr_5 [(short)1] [(signed char)19] [i_0] [i_0])), (arr_3 [10U] [i_0])))))));
        var_23 = ((/* implicit */signed char) max(((!(arr_1 [(unsigned short)8] [i_0]))), (arr_1 [1LL] [i_0])));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_0 - 4])) ? (max(((-(((/* implicit */int) (unsigned short)6377)))), (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [(signed char)5] [i_0])))))) : ((~(((/* implicit */int) (signed char)-17))))));
        arr_13 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (369526417U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)254)))))) >= (((((/* implicit */_Bool) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-244)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [10ULL]))))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) -21LL)) : (6849144154411323631ULL))))));
    }
    var_24 = ((/* implicit */int) var_17);
}
