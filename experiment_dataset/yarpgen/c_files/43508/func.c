/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43508
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
    var_17 = ((/* implicit */int) ((unsigned short) ((((_Bool) (short)16363)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16361))) : (((((/* implicit */_Bool) 17368361819343347399ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) : (1564604760312710840LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_16))));
                var_19 = ((/* implicit */_Bool) arr_2 [i_0] [12]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 14; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */signed char) ((-585173756) | (arr_9 [i_3 - 1] [i_1] [i_4 - 2] [i_3] [i_0 + 3] [i_3])));
                                arr_11 [i_3 - 1] [10LL] [i_1] [i_0] [i_2] [i_3] = (_Bool)1;
                                var_21 = ((/* implicit */unsigned char) var_13);
                            }
                            arr_12 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((-1748727091) != (((/* implicit */int) var_6))))), (min((var_2), (arr_1 [i_0 + 1])))));
                            arr_13 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16389))) : (min((((/* implicit */unsigned long long int) ((arr_2 [i_2] [i_3]) <= (((/* implicit */unsigned long long int) arr_5 [i_0] [13U] [(_Bool)1] [i_3]))))), (5936379630955451577ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
