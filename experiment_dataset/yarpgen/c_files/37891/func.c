/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37891
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32745)) ? (2346433347U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-32750))))), ((-((+(var_3)))))));
                    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min((arr_5 [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_2])))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (min((var_0), (((/* implicit */unsigned int) arr_1 [i_1])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)10151))))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)9436)))))))));
                    var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned int) arr_0 [i_0] [(unsigned short)3]))))))) ? (((((/* implicit */int) arr_2 [i_0] [i_1])) << (((arr_4 [i_2] [i_2] [i_1] [i_0]) - (975714281823062101ULL))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_3 [4ULL] [i_1])) - (((/* implicit */int) var_14)))) : (((/* implicit */int) var_5))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_3] [i_4 + 3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [10LL]))) % (((((/* implicit */_Bool) arr_4 [(short)4] [i_1] [i_1] [i_4 + 1])) ? (var_11) : (((/* implicit */long long int) arr_10 [i_1]))))));
                                var_20 |= ((((/* implicit */long long int) var_0)) - (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_4])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    var_21 = ((((var_11) + (9223372036854775807LL))) << (((((arr_0 [i_0] [i_0]) + (198031921))) - (48))));
                    arr_15 [i_0] [i_0] = ((arr_5 [i_0] [i_1] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_3]))));
                    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(unsigned char)9] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                }
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_0)))))))) : ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) (unsigned short)9436))))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_14))))))) * (var_0)));
}
