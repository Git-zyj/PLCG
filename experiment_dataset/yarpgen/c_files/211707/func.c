/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211707
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
    var_15 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-84)) >= (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) -1131215625))));
                arr_5 [i_0] [i_0] |= ((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [14] [i_0 + 2] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (-1131215638) : (((/* implicit */int) (short)32766))))))))));
                var_17 = ((/* implicit */unsigned short) ((var_0) < (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1]))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    var_18 = (signed char)93;
                    var_19 += ((/* implicit */unsigned short) 1131215621);
                    arr_8 [i_0] = ((/* implicit */unsigned short) (unsigned char)62);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                                arr_16 [i_2] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33976)) ^ (((/* implicit */int) arr_4 [i_0]))));
                                var_20 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)31575)), (12114079263995570602ULL)));
                                var_21 = ((/* implicit */int) arr_7 [i_0] [i_1] [i_4]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) min(((unsigned short)31559), ((unsigned short)33984)));
                }
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    arr_21 [i_0] [i_0] [i_5] [(_Bool)1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)17505)) ? (arr_20 [i_5] [i_1] [(unsigned char)2] [i_0 - 2]) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || ((_Bool)1))))))) | (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)244)), (((((/* implicit */int) (signed char)127)) ^ (1696200496))))))));
                    arr_22 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_13);
                    arr_23 [i_5] [i_1] [1U] [i_0] = ((/* implicit */unsigned char) arr_4 [i_5]);
                    arr_24 [19LL] [(short)16] [i_5] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) -1341056041)), (((unsigned long long int) arr_2 [i_0] [i_0] [i_5]))));
                }
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned long long int) var_1);
}
