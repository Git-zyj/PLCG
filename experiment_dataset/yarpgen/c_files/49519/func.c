/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49519
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
    var_12 = ((/* implicit */unsigned char) min((290269870277900016ULL), (18156474203431651599ULL)));
    var_13 = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_5))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (290269870277900016ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                                var_14 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_4 + 3] [i_4] [3LL] [i_4] [i_4 + 3] [i_4 + 3] [i_4]))));
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (arr_2 [(signed char)1]) : (((/* implicit */unsigned long long int) var_8)))) << (((/* implicit */int) ((arr_0 [i_1] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [(_Bool)1]))))))));
                            }
                        } 
                    } 
                    arr_13 [13LL] [13LL] = ((short) ((((/* implicit */int) arr_5 [i_2])) >> (((((/* implicit */int) arr_5 [i_0])) - (56141)))));
                }
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59755)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [7ULL] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_1]))))) ? (((((/* implicit */long long int) ((932970977U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & ((~(8165096225809852940LL))))) : (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (unsigned short)59755)), (var_4))))))));
                var_16 = ((/* implicit */unsigned short) max((932970977U), (((/* implicit */unsigned int) (unsigned short)29956))));
            }
        } 
    } 
}
