/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210357
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 371603965954072799ULL))));
                                arr_14 [i_4] = ((unsigned int) (-(arr_6 [i_0 + 1])));
                                var_15 *= ((/* implicit */signed char) arr_12 [i_4] [i_1 + 1]);
                                var_16 &= ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) arr_10 [i_4 - 1] [22] [i_4 - 2] [i_0 - 1] [i_4 - 2] [i_0 - 1])))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */signed char) ((unsigned int) max(((~(371603965954072812ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 371603965954072799ULL)) ? (1302396196U) : (2992571100U)))))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26010))) : (((((/* implicit */_Bool) 4040882824U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))))) ? (((unsigned long long int) (~(((/* implicit */int) (unsigned char)215))))) : (((((_Bool) 3193742156U)) ? ((-(10689066978569040117ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 371603965954072799ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                var_19 *= ((unsigned long long int) ((unsigned short) min((3193742151U), (arr_9 [i_5] [i_5] [(signed char)18] [i_5] [23] [16U]))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5] [17])) ? (((/* implicit */int) (short)-19274)) : (405789465)))) ? (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5] [19U] [i_6] [i_6])) : (((unsigned long long int) (signed char)-1)))));
            }
        } 
    } 
}
