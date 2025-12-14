/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54815
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 5404002881403573447LL)) ? (((/* implicit */int) (short)-24386)) : (((/* implicit */int) (signed char)125)))));
                    arr_11 [i_0] [7U] [i_0] [i_0] = ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -1358231253781576147LL)) ? (1670343759) : (((/* implicit */int) arr_2 [i_0] [i_1])))));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193)))))))))) & (max(((~(arr_1 [1]))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) arr_0 [i_0])))))))));
                }
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    var_20 = ((/* implicit */int) (+(9223372036854775807LL)));
                    arr_16 [i_0] [i_1 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_0), ((~(8286606429229641428LL)))))) ? (max((((/* implicit */long long int) (short)13253)), ((-(5404002881403573443LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_4 [i_0])))))))));
                    var_21 = ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)-53)) : (0));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((1369160819274908363ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1]))))))) ^ (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4281630424U)) < (4572032405112420160ULL)))), (arr_5 [i_0 + 3])))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned char)169)))))) ? ((-(14588346797601179618ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_9 [i_0]) < (((/* implicit */long long int) arr_0 [i_0])))))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_24 = (+(((/* implicit */int) arr_7 [i_0])));
                    var_25 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_1])) >> (((((((/* implicit */_Bool) 4572032405112420160ULL)) ? (arr_15 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))))) - (1041546215U)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_26 |= ((/* implicit */short) (-(962021902589776314ULL)));
                                var_27 = ((/* implicit */int) ((arr_13 [i_1 + 1] [i_5] [i_0 - 1]) ^ (arr_13 [i_1 - 1] [i_4] [i_0 - 1])));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) 2954738000U);
                }
                var_29 = (-(2169251369368066021LL));
                arr_27 [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_21 [i_1] [(short)11] [i_0 - 1] [i_0] [14U] [14U]))));
                var_30 = ((/* implicit */unsigned short) arr_17 [i_0]);
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    arr_30 [i_0] = ((/* implicit */int) arr_21 [1] [0] [1] [i_7] [i_7] [i_7]);
                    var_31 = ((/* implicit */unsigned short) ((long long int) min(((unsigned short)30629), (((/* implicit */unsigned short) arr_17 [i_0])))));
                }
            }
        } 
    } 
    var_32 = var_14;
}
