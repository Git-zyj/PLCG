/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19109
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)38)) ? (7945968563050812927LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)448))))))));
    var_18 = ((/* implicit */short) var_6);
    var_19 = ((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_20 = (unsigned short)65088;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (~(3204380787U)))) ? (((arr_4 [i_2]) % (3204380787U))) : (arr_4 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_3 [i_0]))))) : ((+(5U)))));
                                var_22 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_10)), (arr_13 [i_0] [i_2] [i_0] [i_0] [i_1]))) * ((-(arr_13 [i_0] [i_0] [i_1] [i_0] [14LL])))));
                }
                var_24 -= ((/* implicit */unsigned short) (short)30378);
                var_25 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0]);
                arr_14 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)18792)) * (((/* implicit */int) var_1)))) / (((((/* implicit */_Bool) var_8)) ? (arr_6 [22LL] [i_0] [i_0] [i_1]) : (((/* implicit */int) arr_0 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_7 [5U])) : (((/* implicit */int) (unsigned short)8025))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) (signed char)-23)))))) : (arr_4 [0])))));
                arr_15 [i_1] = ((/* implicit */_Bool) (+(-1815399492)));
            }
        } 
    } 
}
