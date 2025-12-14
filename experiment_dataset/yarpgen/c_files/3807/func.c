/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3807
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_1)), (var_15)))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) min(((!(arr_3 [i_1]))), (arr_3 [i_0])))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_0)))))))));
                var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), ((+(arr_2 [(_Bool)0] [(_Bool)0])))))) ? (((/* implicit */int) max((var_8), ((!(((/* implicit */_Bool) 854682111))))))) : ((-(((((/* implicit */_Bool) (signed char)-60)) ? (854682111) : (((/* implicit */int) (signed char)-52))))))));
                arr_6 [i_0] [(unsigned char)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1499469951)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (6588289868096159284LL)));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_12);
    var_20 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((signed char) (signed char)99));
                /* LoopNest 3 */
                for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2 + 1] [i_5] &= ((/* implicit */unsigned int) -854682140);
                                var_22 = ((/* implicit */int) 1821840516U);
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_10 [i_4]))));
                                var_24 -= ((/* implicit */unsigned char) arr_18 [i_4] [3U]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 2; i_7 < 14; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 2])) ? (arr_13 [i_9 + 2] [i_8] [i_2 + 1] [i_8]) : (((/* implicit */long long int) 1092550224))))) ? ((+(((/* implicit */int) arr_14 [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 - 1])))) : (((/* implicit */int) var_0))));
                                var_26 = var_13;
                                var_27 |= ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)97)), (arr_9 [i_2] [i_3 + 1])));
                                arr_30 [i_7] [i_3] [2LL] [i_8] [i_9] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (arr_8 [i_7] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51)))))))) ? (((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_7 + 1] [i_8])) ? (7513855550622813418LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) max((1092550224), (-1092550225)))));
                                var_28 += ((/* implicit */long long int) arr_17 [i_2] [i_8] [i_7] [i_2] [i_3] [i_2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
