/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215743
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned short)39876)) : (((/* implicit */int) (unsigned char)140))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : ((-(arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12248))) ^ (arr_1 [i_0])))) ? (((/* implicit */int) ((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) == (2952447601U))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned int) -1695285247))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((arr_11 [i_1] [i_2] [i_2] [i_3 - 1]) < (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_12 [i_3])))) ? (-6816618937639026276LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) -1170896798)), (2074152649U))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((max((arr_7 [i_1] [i_1 - 1]), (((864691128455135232LL) - (((/* implicit */long long int) ((/* implicit */int) (short)12248))))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)112)) * ((+(((/* implicit */int) arr_16 [i_1 + 1] [i_2] [(short)4] [i_4] [i_5] [i_5])))))))));
                                arr_20 [i_5] [i_4] [i_3] [i_3] [i_2] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1])) >> (((((/* implicit */int) arr_17 [i_3 - 1] [i_3] [(short)9] [i_3 - 1] [i_3] [i_2])) - (91))))) < (((/* implicit */int) (unsigned char)114))));
                                arr_21 [i_5] [i_2] [i_3] [i_2] [i_1 - 1] = ((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_4);
    var_21 |= ((/* implicit */unsigned char) var_0);
}
