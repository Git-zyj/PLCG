/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210861
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
    var_12 += ((/* implicit */unsigned int) 0ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_3] = ((/* implicit */signed char) arr_8 [i_2] [i_1 + 2] [i_3] [i_1] [i_1 + 1]);
                                var_13 = (i_3 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_3] [9ULL] [i_3]) + (arr_8 [i_1] [i_1] [i_3] [i_1] [i_2])))) ? (((((arr_8 [i_1] [i_1 + 2] [i_3] [i_3] [i_4]) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (18324))))) : (((/* implicit */long long int) (~(2002910384U))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_3] [9ULL] [i_3]) + (arr_8 [i_1] [i_1] [i_3] [i_1] [i_2])))) ? (((((((arr_8 [i_1] [i_1 + 2] [i_3] [i_3] [i_4]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (18324))))) : (((/* implicit */long long int) (~(2002910384U)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((short) (short)19752));
                                arr_14 [i_3] = min(((!(((/* implicit */_Bool) arr_9 [i_3])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) var_5)) : (var_10)))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_1 + 1] [2U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) (signed char)17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_1]))))))));
                    arr_16 [i_2] [i_1] [i_0] |= ((((/* implicit */int) ((signed char) arr_6 [i_1 - 1] [(short)18]))) & (((((/* implicit */int) arr_3 [i_0] [i_2])) + (((/* implicit */int) arr_3 [i_0] [i_2])))));
                }
                arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8732))))) ? (((((/* implicit */_Bool) (-(3942376909543004515LL)))) ? (((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (15453946286670241054ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((var_9), (((/* implicit */short) arr_3 [i_0] [i_0])))))))))));
            }
        } 
    } 
}
