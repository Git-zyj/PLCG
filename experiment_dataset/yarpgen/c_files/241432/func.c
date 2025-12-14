/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241432
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
    var_20 &= ((/* implicit */long long int) (~(((/* implicit */int) var_18))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_21 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_3 [i_0] [i_1]))), (((((/* implicit */_Bool) 12990993882864695156ULL)) ? (((/* implicit */int) (short)4827)) : (((/* implicit */int) (signed char)-38))))))), (((unsigned int) min((((/* implicit */signed char) arr_3 [i_1] [i_0])), (arr_1 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_22 &= ((/* implicit */_Bool) min(((~(((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (arr_6 [i_3])))))), (((/* implicit */int) arr_7 [i_0]))));
                        var_23 *= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_2] [i_3])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) min((arr_8 [i_1] [13LL] [(short)10] [i_1]), (((/* implicit */short) arr_10 [i_1] [i_1] [i_2] [i_3]))))) : (((/* implicit */int) ((_Bool) arr_1 [i_3])))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_24 ^= ((/* implicit */short) ((long long int) min((((arr_14 [2ULL] [2ULL] [i_1] [(unsigned short)6]) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_4]))))), (max((-1433281087128990519LL), (((/* implicit */long long int) (short)4827)))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) arr_14 [17ULL] [i_1] [i_1] [(short)14])) ? (((/* implicit */int) arr_3 [i_2] [i_4])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4])))) : (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (short)4815)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))) ? (min((((/* implicit */unsigned long long int) 483511746)), (5455750190844856446ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_7 [i_0])), (arr_12 [i_0] [i_1] [i_2] [i_1])))) ? (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */int) arr_6 [i_0]))))) : (min((((/* implicit */long long int) 4294967290U)), (-4853684127267237762LL))))))));
                        var_26 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) arr_7 [i_4])))));
                        arr_15 [i_4] = ((/* implicit */signed char) ((min((min((21U), (((/* implicit */unsigned int) (signed char)113)))), (min((((/* implicit */unsigned int) arr_4 [i_1] [i_0])), (arr_13 [i_0] [i_0] [i_0]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_4])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((((((arr_9 [i_6] [i_5] [i_1] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [8] [i_6]))))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (arr_13 [i_1] [i_2] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [16] [i_1] [i_2] [i_5]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (arr_0 [i_0])))))), (((/* implicit */unsigned int) max((max((arr_12 [i_0] [i_1] [i_2] [i_6]), (arr_8 [10ULL] [i_1] [10ULL] [i_5 - 2]))), (arr_12 [i_0] [i_1] [i_5] [i_6]))))));
                                var_28 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (short)10727)) ? (63LL) : (((/* implicit */long long int) min((8132214), (((/* implicit */int) (short)-4825))))))));
                                arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_5] [i_6])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_16 [i_0] [i_1] [i_1] [i_6])))), (((((/* implicit */_Bool) 0ULL)) ? (-2055211731033805785LL) : (-2638220603704562681LL)))))) ? (((9919777134095631729ULL) >> (((((/* implicit */int) arr_7 [i_0])) + (180))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_5 - 2] [i_2] [i_5 - 2])) ? (((((/* implicit */int) arr_4 [i_1] [i_2])) | (arr_16 [i_0] [i_0] [i_0] [i_0]))) : ((~(((/* implicit */int) (short)-16732)))))))));
                                arr_21 [i_0] [i_1] [i_6] [i_5 - 1] [i_6] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 437042337)), (0ULL)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) (+(((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
                }
            } 
        } 
    } 
}
