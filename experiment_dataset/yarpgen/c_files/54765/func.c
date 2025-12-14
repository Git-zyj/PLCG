/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54765
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) ((short) (((!(((/* implicit */_Bool) arr_1 [10])))) || (((/* implicit */_Bool) 4294967295U)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((_Bool)1) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (short)-22354))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_12 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22354)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-2)) - (((/* implicit */int) (_Bool)1))))) : ((~(arr_13 [12ULL] [i_4] [i_5])))))));
                            var_19 = ((/* implicit */int) (_Bool)1);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13446)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (short)-13450))))) : (((((/* implicit */_Bool) 16126470623357177458ULL)) ? (arr_11 [i_4] [i_4] [i_5]) : (arr_11 [i_3] [i_3] [i_3])))))) && (((/* implicit */_Bool) (unsigned char)255)))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-5)) ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) (unsigned char)201))))) : (arr_13 [i_3] [i_4] [i_6]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (short)-13450)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (arr_11 [i_3] [i_3] [i_3]))))) <= (arr_12 [i_3])))) : (1929016951)));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_16))))), (((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) var_0)))))));
    var_24 = ((/* implicit */unsigned int) (unsigned char)255);
}
