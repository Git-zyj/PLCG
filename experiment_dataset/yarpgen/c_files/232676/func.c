/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232676
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
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) ((min((var_8), (((/* implicit */long long int) arr_4 [i_0 + 3] [i_0 + 1])))) < (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)4), ((unsigned char)249)))))))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (signed char)124))));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_4 [i_1] [i_0])), (3730694239U))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)8115)) : (((/* implicit */int) (signed char)39))))))))) & (((((/* implicit */_Bool) min(((unsigned char)4), (((/* implicit */unsigned char) (signed char)8))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (var_5))) : (((/* implicit */unsigned int) max((898995420), (((/* implicit */int) (short)-27477))))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) (unsigned short)35175)))) : (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1016))))) >= (-8644956954964079470LL))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            {
                arr_9 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)53813))))) : (var_6)))) ? ((~(((((/* implicit */_Bool) 1664778440339633330LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10932)))));
                var_14 = ((/* implicit */long long int) min((((/* implicit */int) min((arr_8 [i_2 - 2] [i_3]), (arr_5 [i_3 - 1] [i_2 - 1])))), (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_3])) : (((/* implicit */int) arr_5 [i_3 - 2] [i_2 - 1]))))));
                arr_10 [i_3] [(short)15] [i_3] = ((/* implicit */unsigned char) arr_8 [i_3] [i_3]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned int) var_7)), (var_5)))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))))) : (((/* implicit */int) (((-(17217496807827314354ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))))))));
}
