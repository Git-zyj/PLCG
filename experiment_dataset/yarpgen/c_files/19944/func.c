/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19944
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
    var_10 += ((/* implicit */unsigned long long int) min((var_2), (((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32747)) ^ (((/* implicit */int) (unsigned char)90))))) + (((var_4) * (var_9)))))));
    var_11 = ((/* implicit */unsigned long long int) var_3);
    var_12 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)22586)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)8))))) ? ((+(((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-17875)), (5836637616487564184ULL)))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) (short)-32726)) : (((/* implicit */int) (short)-30894)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                var_14 &= ((/* implicit */short) ((((/* implicit */int) max((arr_6 [i_3 + 1] [i_3 - 1]), ((short)-26578)))) != (((/* implicit */int) arr_5 [i_2]))));
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_3 - 2] [i_4] [i_3 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)39)) <= (((/* implicit */int) var_6))))))))), (min((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (((unsigned long long int) arr_8 [i_4] [i_3 - 1]))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3 + 1]))) - (1U)))) ? (((/* implicit */int) arr_7 [i_2] [i_3 + 1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3 + 1]))) < (600739432U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_6] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) max(((signed char)-52), (arr_14 [i_2 + 1] [i_3] [i_3] [1U] [i_6]))))));
                                var_17 = ((/* implicit */short) (~((-(arr_15 [i_5] [i_3 + 1] [i_4])))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (unsigned char)47))))), (arr_14 [i_2 + 1] [i_3] [i_7] [i_2] [i_3 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) max((arr_7 [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned short) var_5))))) ? (min((5U), (((/* implicit */unsigned int) arr_7 [i_3] [i_7])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_7)))))))));
                    arr_22 [i_2] [i_3] [(_Bool)1] [i_2 + 1] = ((/* implicit */unsigned int) (~(8658726921535382292ULL)));
                }
                arr_23 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-10786)) ? ((((!(((/* implicit */_Bool) (signed char)-52)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((4294967277U), (((/* implicit */unsigned int) (short)-30897)))))) : (((((/* implicit */_Bool) (short)-13155)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_3 + 1]))) : (var_9)))));
            }
        } 
    } 
}
