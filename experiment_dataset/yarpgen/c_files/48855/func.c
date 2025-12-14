/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48855
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_17 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_2] [i_2] [i_0])) : (var_14)))) ? (min((var_3), (((/* implicit */int) arr_1 [i_0])))) : (arr_8 [i_2]))), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) / (((arr_10 [i_0] [(signed char)2] [i_2] [i_2] [i_0] [i_3]) / (((/* implicit */int) arr_1 [i_2])))))));
                            var_18 = ((((((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) var_4)) : (((int) arr_6 [i_0] [i_0] [i_2])))) | ((~(((/* implicit */int) arr_2 [i_2] [i_1])))));
                            var_19 = ((/* implicit */signed char) min((min((var_1), (((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [(short)12])) > (((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_3])))))));
                            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_8 [i_2])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)4451)), (((((/* implicit */_Bool) var_14)) ? (-2142726546) : (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (unsigned short)4451)) : (703203238)))))));
                var_22 = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) != (3490133376446183488ULL))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) << (((/* implicit */int) (signed char)0))))))), (((((/* implicit */int) arr_2 [i_0] [i_1])) >= (((/* implicit */int) var_8))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = arr_4 [i_0] [i_4];
                                var_24 = ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4] [i_4] [i_5] [i_6])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_4] [i_5] [i_6])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+((-(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) ((var_14) ^ (((((/* implicit */int) var_6)) + (((/* implicit */int) var_12))))));
                    var_27 = ((/* implicit */signed char) max((var_27), (arr_1 [i_0])));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14774))) : (3490133376446183498ULL)))) || (((/* implicit */_Bool) (unsigned short)32557))))) & (((/* implicit */int) var_7))));
}
