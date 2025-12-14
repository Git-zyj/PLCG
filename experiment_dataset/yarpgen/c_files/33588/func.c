/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33588
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
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0])))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16197)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_0 [i_2]))))))) ? (((/* implicit */int) max((arr_11 [(unsigned short)9] [i_2 - 2] [i_1] [i_1 + 3] [(signed char)4]), (arr_11 [i_1 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1])))) : (((/* implicit */int) ((short) arr_3 [i_0] [i_3] [(short)0])))));
                                var_14 = ((/* implicit */int) -4082405989548576715LL);
                                var_15 -= (!(((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3])));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) ((long long int) ((arr_11 [i_1 + 3] [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 - 3]) ? (((/* implicit */int) arr_7 [1] [i_1 - 3])) : (((/* implicit */int) arr_7 [i_1] [i_1 - 3])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            {
                var_17 = ((((/* implicit */long long int) ((/* implicit */int) (short)16197))) % (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (min((((/* implicit */long long int) var_6)), (-8068601906269487551LL))))));
                var_18 = ((/* implicit */signed char) max(((-((-(((/* implicit */int) (short)-29252)))))), (((/* implicit */int) (short)-29255))));
                var_19 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned int) 3383035790U))) ? (((/* implicit */int) arr_15 [i_5 - 1])) : (-1)))));
            }
        } 
    } 
}
