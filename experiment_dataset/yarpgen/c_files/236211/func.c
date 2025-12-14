/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236211
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_15), (((/* implicit */unsigned long long int) (short)-32746)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-84)), ((unsigned short)0)))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((((/* implicit */unsigned long long int) (unsigned short)23)), (12410776572512464910ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (12410776572512464910ULL))))) : (((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [(signed char)2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [(signed char)7] [i_0]);
                            var_21 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0] [i_0])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)3] [i_1] [(unsigned char)12])) && (((/* implicit */_Bool) 6035967501197086722ULL))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_1] [i_1] [i_3])) ? (arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3]) : (arr_7 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0]))) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
                            arr_10 [(unsigned short)7] [i_0] [i_1] [i_2] [15LL] [15LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) - (arr_2 [i_0] [i_0]))) & (((((/* implicit */_Bool) -4214484738007386627LL)) ? (((/* implicit */int) (short)32569)) : (((/* implicit */int) (short)635))))))) >= (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) var_11)) : (9805331271216740919ULL))) : (68719476735ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)16)), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) >= (var_1))))) : (((((/* implicit */_Bool) (signed char)-25)) ? (721446896U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_14), (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) var_6)))))))))) : ((-((~(var_4)))))));
}
