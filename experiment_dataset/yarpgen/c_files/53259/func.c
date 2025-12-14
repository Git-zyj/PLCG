/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53259
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) (~((~(arr_0 [i_0])))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 2] [(signed char)9]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2 - 3] [i_3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((signed char) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) (short)7013)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)116)))) : (arr_15 [i_1 + 1] [i_2 - 4] [(unsigned short)7])))))));
                                var_16 = ((/* implicit */short) arr_9 [i_1 + 2] [i_1 - 1] [i_1] [i_1]);
                                arr_17 [i_1] [6LL] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) min(((short)29018), (((/* implicit */short) (unsigned char)130))))) != (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -6334644507243242036LL)))) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned char)116))))));
                                var_17 = ((/* implicit */unsigned char) ((min((arr_14 [i_2 + 1] [(unsigned char)9] [i_2] [i_2] [i_2 - 1] [i_3]), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_2] [i_1] [i_2 - 1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [11LL] [i_2 - 4] [i_2] [i_2 - 1])))));
                            }
                        } 
                    } 
                    arr_18 [i_1 - 1] [(short)15] [i_3] [i_3] = min((max((((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_3]))))), (((/* implicit */long long int) 1530633040)))), ((~(-1LL))));
                    arr_19 [i_1] [(signed char)4] [i_1] = ((/* implicit */signed char) (~(((unsigned int) arr_16 [4] [i_1 - 1] [10] [10] [i_2 - 3]))));
                    var_18 = ((/* implicit */unsigned int) arr_6 [2ULL]);
                }
            } 
        } 
    } 
}
