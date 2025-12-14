/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242303
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-110)) | (511)));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)-110))) ? (((/* implicit */unsigned long long int) (-(3039801654999263008LL)))) : (max((((((/* implicit */_Bool) (short)252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5348))) : (arr_3 [i_1]))), (((/* implicit */unsigned long long int) ((-1405712020) <= (var_7)))))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -819396810)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (18446744073709551615ULL)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((14586687477453867437ULL), (((/* implicit */unsigned long long int) -1))));
                            arr_12 [i_0 - 1] [i_3] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_1 [i_0] [i_0 + 3]), (((/* implicit */unsigned short) (unsigned char)7))))), ((~(arr_8 [i_0] [i_0 + 1] [i_0 + 1])))));
                            arr_13 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = (+(((((/* implicit */_Bool) ((((-1) + (2147483647))) << (((1593699668) - (1593699668)))))) ? (((/* implicit */int) arr_4 [i_0 + 3])) : (((/* implicit */int) (signed char)-35)))));
                            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 + 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [9] [i_1] [i_3])) <= (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))), (min((1637424954), (((/* implicit */int) (unsigned short)24303))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (+(((int) (unsigned char)168))));
    var_25 = ((/* implicit */int) (~(((long long int) -1405712020))));
}
