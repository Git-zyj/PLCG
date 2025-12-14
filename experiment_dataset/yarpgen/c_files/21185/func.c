/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21185
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (unsigned char)106)))))) ? (min((var_13), (((/* implicit */unsigned int) (unsigned char)149)))) : (((/* implicit */unsigned int) min((arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3] [i_1]), (((/* implicit */int) arr_9 [(_Bool)1] [4] [i_2] [i_2] [i_4] [i_4] [i_2]))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) ((signed char) (signed char)60))) : (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0] [i_0] [i_0 - 3])) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (signed char)60))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [2U] [i_1] [i_1] [i_1] [6U])) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_9))))), (arr_5 [(unsigned short)4] [i_1] [i_1] [i_2])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))) != (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)50095)))))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)255))) ? ((~(((/* implicit */int) (signed char)59)))) : (((((/* implicit */_Bool) arr_11 [i_0 + 1] [16ULL] [(_Bool)1] [i_1] [i_2] [i_2] [14U])) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned short)65535))))))));
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) min((arr_4 [(_Bool)1] [i_1] [i_2]), (((/* implicit */unsigned char) arr_6 [i_2] [i_0] [3ULL]))))) : (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0])) : (arr_12 [i_1] [i_1] [i_2] [i_0] [i_1] [(_Bool)1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_10);
    var_23 -= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_0)))) << (((var_14) - (1682423236)))));
}
