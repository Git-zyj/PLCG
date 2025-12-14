/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230193
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
    var_15 = ((/* implicit */int) ((unsigned char) 1576644868U));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) % (var_11))) / ((~(((/* implicit */int) var_10))))))) / (((((/* implicit */_Bool) 73562608)) ? (16623161761286454042ULL) : (16623161761286454041ULL))))))));
    var_17 ^= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_2))))) > (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [(unsigned char)7] [(signed char)7] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_7))))));
                                arr_17 [i_2] [i_2 - 2] [(signed char)6] [i_2] [i_2] [i_2 - 2] [1LL] &= ((/* implicit */_Bool) min((((((/* implicit */int) arr_13 [i_1] [i_1] [i_2 - 1] [5ULL] [i_3 + 4] [i_3 - 1] [(_Bool)1])) / (((/* implicit */int) arr_13 [i_1] [i_2 - 3] [i_2 + 1] [i_2 - 1] [i_3 + 1] [i_3 + 3] [i_3])))), (((/* implicit */int) arr_14 [i_0] [(unsigned short)7] [i_2 - 3] [i_3] [i_4]))));
                                arr_18 [i_3] [i_2 - 2] [i_1] [i_0] = ((/* implicit */short) (unsigned short)4517);
                            }
                        } 
                    } 
                    arr_19 [i_0] [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)2] [i_1]))) <= (((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 4] [i_2 - 1] [i_2 - 4])) ? (arr_7 [i_1] [i_2 + 1] [i_2 - 1] [i_2 - 2]) : (arr_7 [i_2 - 3] [i_2 - 2] [i_2 - 4] [i_2 - 3])))));
                    arr_20 [i_0] = ((/* implicit */unsigned char) 536870784);
                    var_18 += ((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((unsigned int) arr_5 [i_2 - 2] [i_2 - 4])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 + 1])) + (((/* implicit */int) arr_6 [i_2 - 4])))))));
                }
            } 
        } 
    } 
}
