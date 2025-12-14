/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35545
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
    var_15 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0] [(unsigned char)7] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_2 [i_1]), (((/* implicit */unsigned long long int) (signed char)48)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)159)))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19396))) < (var_11))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (15025610329038963826ULL)))))) == (((/* implicit */int) (_Bool)1))));
                        var_16 = max((min((var_11), (((/* implicit */unsigned long long int) (signed char)-2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19413)) || (((/* implicit */_Bool) arr_2 [i_3]))))));
                    }
                    for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_4 - 1] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))), (((((/* implicit */_Bool) arr_7 [i_4 - 1])) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) arr_7 [i_4 + 1]))))));
                        arr_16 [i_0] [(unsigned short)0] [i_0] [(signed char)6] [i_0] = arr_9 [i_4 + 1] [i_2] [(unsigned short)8] [(unsigned short)8];
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_22 [i_6 - 1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)36))))) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_5])) : ((-(((/* implicit */int) (signed char)-42)))))) >> ((((~(((unsigned long long int) arr_0 [i_6])))) - (18446744073709551526ULL)))));
                                var_17 *= ((/* implicit */_Bool) var_1);
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) max((arr_3 [i_0] [i_5] [i_0]), (((/* implicit */unsigned short) (signed char)102)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) var_5)))));
}
