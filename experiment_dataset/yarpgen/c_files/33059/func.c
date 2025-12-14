/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33059
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
    var_20 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_1)), (var_15))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)18049)))))));
    var_21 = var_5;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1])))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(1128544998U))) << (((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_19))) - (25067ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((long long int) max((((/* implicit */long long int) (short)18048)), (var_0))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_4 [4ULL] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_12)))))) ? (((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? ((~(((/* implicit */int) (signed char)86)))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (805306368) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))))) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
                                var_26 = ((/* implicit */unsigned long long int) ((short) arr_8 [i_0] [i_1] [i_1] [i_3] [i_4]));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */short) min((((((/* implicit */_Bool) (short)18080)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((short) arr_0 [i_0])))));
                }
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_29 = ((long long int) 1362480244290701974LL);
                                var_30 = ((/* implicit */short) ((unsigned long long int) (((((+(var_7))) + (9223372036854775807LL))) << (((max((var_7), (var_13))) - (1365557665459003503LL))))));
                            }
                        } 
                    } 
                    var_31 += ((/* implicit */short) ((long long int) ((1362480244290701974LL) < (((((/* implicit */_Bool) arr_16 [i_5 + 3] [i_5] [i_1] [i_0])) ? (var_1) : (var_13))))));
                    var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (-(var_13))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5 + 1]))))) : ((+(var_1)))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)18)) ? (-503390329555871919LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18065)))))))));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 4981867752113480907ULL)))) ? (var_1) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_17))))) : ((-(max((((/* implicit */long long int) 3379639275U)), (var_17)))))));
}
