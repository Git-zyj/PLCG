/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4590
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1])), (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525)))))))) ? (((((/* implicit */_Bool) ((short) arr_5 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) > (var_0))))) : (max((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */long long int) (unsigned short)65528)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)7)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_10 [i_2]) : (arr_10 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)68)) / (((/* implicit */int) (unsigned char)187)))))));
                var_19 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned char)174)), (var_8))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))))))));
                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2])))))), (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65528)), (arr_8 [i_2])))) != ((-(arr_10 [i_2]))))))));
            }
        } 
    } 
}
