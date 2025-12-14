/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31559
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
    var_19 = ((/* implicit */long long int) min((var_19), ((~(((((/* implicit */_Bool) ((int) 15))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) : (var_17)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((signed char) ((unsigned short) 8279152461360585916LL))))));
                                var_21 = ((/* implicit */long long int) arr_7 [i_3] [i_0] [i_0] [i_4]);
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((int) (signed char)-24)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_16 [i_0] = ((/* implicit */long long int) arr_5 [i_0] [14LL]);
                        arr_17 [i_0] = ((/* implicit */int) 9121561841690096180LL);
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) 5372502514773449176ULL);
                        arr_21 [i_6] [i_6] &= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_11 [i_0] [i_0] [i_1 - 1] [i_2])))) ? (((((/* implicit */_Bool) (signed char)36)) ? (arr_11 [i_1 + 1] [i_0] [i_1 + 1] [i_0]) : (arr_11 [i_0] [i_0] [i_1 - 1] [i_6]))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 + 1] [i_0])) ? (arr_11 [(unsigned short)7] [(unsigned short)7] [i_1 + 1] [i_6]) : (((/* implicit */long long int) 1384031362))))));
                    }
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1 + 2])))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))) != (max((5372502514773449179ULL), (((/* implicit */unsigned long long int) arr_3 [(signed char)22]))))))))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */long long int) ((unsigned int) arr_14 [i_1] [i_1] [i_2] [i_1 - 1] [i_7]))) != (-1LL))))));
                        var_27 = ((/* implicit */unsigned char) ((signed char) (+(arr_11 [i_7] [i_1 + 2] [i_1] [i_7]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_8 = 1; i_8 < 19; i_8 += 2) 
    {
        arr_30 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((int) arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [(signed char)12])) - (((arr_9 [(unsigned short)19] [(signed char)5] [i_8]) - (((/* implicit */int) arr_6 [i_8 + 2] [i_8] [i_8]))))))) > ((-(((((/* implicit */_Bool) -8279152461360585942LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8 - 1] [i_8]))) : (3602574943U)))))));
        var_28 = ((/* implicit */unsigned short) -1LL);
    }
    var_29 = var_13;
    var_30 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32))))) | (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) var_15)) > (4044674215999093727LL))))));
}
