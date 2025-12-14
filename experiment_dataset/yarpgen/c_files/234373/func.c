/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234373
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
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)89))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(max((4286578688LL), (((/* implicit */long long int) (unsigned short)61764))))))) ? (((((/* implicit */_Bool) max((-1897892851), (((/* implicit */int) (short)-30632))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (5917594433401778132ULL))) : (((/* implicit */unsigned long long int) ((2147483647) * (((/* implicit */int) (signed char)0))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-30632)), (3655077679U))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned char) ((unsigned int) (unsigned char)73));
                                arr_14 [i_0] [i_0] [i_1] [5U] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) arr_0 [i_1] [i_3]);
                                arr_15 [i_4] [i_0] [9ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [1LL])) ? (min((((/* implicit */unsigned long long int) (unsigned char)70)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1]))) * (13119862840821581498ULL))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)70), (((/* implicit */unsigned char) (signed char)-106)))))) : (arr_5 [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(var_0)))) - (max((((/* implicit */unsigned long long int) var_0)), ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) 149765712U))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)30615)) ? (min((((4016709U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))))), (((/* implicit */unsigned int) ((_Bool) arr_17 [i_6]))))) : (4294967295U)));
                arr_22 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((((int) arr_20 [i_6] [i_5] [i_5])) >= (((int) 4294967272U))));
                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)1367)), (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [20U]))))), (min((((/* implicit */unsigned int) (unsigned char)186)), (4294967295U)))))));
                arr_23 [i_5] [i_5] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_5])) ? (arr_16 [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93)))))), (((((/* implicit */_Bool) arr_21 [i_5] [(short)14] [i_5])) ? (arr_21 [i_6] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [(signed char)5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4611686018427387904LL)) || (((/* implicit */_Bool) 3ULL)))))));
            }
        } 
    } 
}
