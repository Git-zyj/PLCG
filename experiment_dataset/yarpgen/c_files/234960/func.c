/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234960
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */int) (signed char)-46)) <= (((/* implicit */int) (signed char)-46))))) << (((arr_2 [i_0] [i_0] [i_1]) - (1723500764))))), (((/* implicit */int) arr_0 [i_0]))));
                arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((max((((/* implicit */signed char) arr_1 [i_1])), ((signed char)48))), (((/* implicit */signed char) arr_1 [i_0]))))), (min((((/* implicit */long long int) var_7)), (max((var_6), (((/* implicit */long long int) (signed char)-115))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2] [i_2 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_4])) % (arr_5 [i_2] [i_2] [i_2])))) : (max((((/* implicit */long long int) var_7)), (var_0))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (unsigned short)65510)))))))));
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) ((unsigned char) (signed char)56)))), (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */signed char) arr_1 [i_0]))))), (((arr_1 [i_3]) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_4])) : (arr_6 [i_0] [i_1] [i_2] [i_0])))))));
                                arr_13 [i_4] = ((/* implicit */short) (((((~(((/* implicit */int) var_8)))) + (2147483647))) >> (((((unsigned int) var_0)) - (2118771798U)))));
                                var_15 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 2] [i_3 + 1] [(unsigned char)6] [(unsigned char)6] [i_4 - 1])))) != (((int) arr_11 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_3 + 1] [i_4 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = max((var_10), (((/* implicit */unsigned short) var_1)));
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) <= (var_0))))) % (((((/* implicit */unsigned long long int) var_11)) | (((((/* implicit */_Bool) var_8)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))))));
}
