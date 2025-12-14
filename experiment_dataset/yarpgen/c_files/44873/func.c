/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44873
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_7 [i_2 + 1] [i_3] [i_3]))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11629)) != (((((/* implicit */int) (short)-11630)) / (((/* implicit */int) arr_4 [i_1] [i_3])))))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_4 [i_0] [i_0])))) != (((((/* implicit */int) (short)-11611)) - (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                            {
                                var_18 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0] [i_1]))));
                                var_19 = ((/* implicit */unsigned short) (short)-503);
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                            {
                                arr_21 [i_7] = ((/* implicit */unsigned int) (unsigned short)0);
                                arr_22 [i_0] [i_1] [i_4] [i_4] [i_0] [i_7] [i_4] = (short)-11624;
                                var_20 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_7]);
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))));
                                var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
                            }
                            var_22 = ((/* implicit */_Bool) min((var_22), (arr_14 [i_0] [i_1] [i_4] [i_1])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) 855109363U);
                arr_26 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((-(3449775545U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)11629)))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((arr_12 [i_0]) == ((~(arr_12 [i_0]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) && ((!(((/* implicit */_Bool) 2477006285U))))));
}
