/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242275
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (short)26726);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-26704)), (((((/* implicit */_Bool) -193065967869173613LL)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-5023523007879640041LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_17), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0 + 2]))))))))));
                                var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) min((7289782605768886053LL), (arr_12 [i_3] [i_2] [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (min((((/* implicit */unsigned long long int) (unsigned char)19)), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_11 [i_4] [i_3] [i_2] [i_1] [i_0])))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_12)) ? (var_2) : (var_5))) : (arr_12 [i_3] [i_3] [i_2] [i_0])));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((4710429990111202419LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) : ((((_Bool)0) ? (193065967869173593LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                                arr_16 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_5] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_14))))));
                                var_23 = ((/* implicit */unsigned char) ((long long int) arr_7 [i_0]));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */short) (((~(506201976U))) >> (((arr_4 [i_0 + 2] [i_0] [i_0]) - (4231656962U)))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                arr_20 [i_0] [i_1] [i_3] [i_0] [i_1] [(signed char)10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0]))));
                                var_24 = ((/* implicit */unsigned char) ((short) arr_3 [i_0 + 2] [i_6]));
                            }
                            var_25 = ((/* implicit */signed char) (unsigned short)34480);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((int) (short)32767));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_16);
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) 4294967295U)) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_11))))))) ? (((/* implicit */int) (short)-16491)) : (((/* implicit */int) var_1))));
    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)-26350)), (-6613248472790479454LL))) * (((/* implicit */long long int) ((((/* implicit */int) (short)0)) << (((((/* implicit */int) (short)5942)) - (5938)))))))))));
    var_30 = var_4;
}
