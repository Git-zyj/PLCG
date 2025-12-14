/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218740
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_4 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [(short)22] [13U] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)15)), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [i_0] [i_3])))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((arr_2 [i_3] [i_0]) > (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-23))))))));
                            arr_12 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)30712)), (((-1324988073) - (((/* implicit */int) (short)32512))))))) && (((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned short)1333))))))));
                            arr_13 [i_0] [i_0] [(signed char)14] [i_3] [i_3] [i_3] = ((/* implicit */int) ((min((((32767U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)7161))))), (((/* implicit */unsigned int) ((signed char) (signed char)-24))))) != (((((/* implicit */unsigned int) 1324988092)) ^ (3207926818U)))));
                            arr_14 [i_0] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */int) (short)32760)) * (((/* implicit */int) (short)-20954))))))), (arr_3 [(signed char)12])));
                            arr_15 [i_0] [i_3] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (short)-13)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) (short)-32761)), (var_5)))) == (((arr_8 [i_3] [i_2] [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_1] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_15 -= ((/* implicit */unsigned short) (short)16373);
        var_16 += ((/* implicit */short) (unsigned short)29423);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_17 [i_5]))));
        arr_21 [(short)0] [i_5] = (unsigned short)33887;
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)32760))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_5]))) : ((+(((/* implicit */int) (_Bool)1))))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) 1324988100);
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4691)) ? (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) min((((short) var_9)), (var_4))))));
}
