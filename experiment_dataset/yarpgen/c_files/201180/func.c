/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201180
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 3] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0] [0U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (0U)))))) ? ((+(((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))) : (((/* implicit */int) (!(arr_0 [(unsigned char)11] [i_1]))))));
                            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned char) (short)32747)))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_13 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)2422))));
                                var_14 = min((((int) (_Bool)0)), (((/* implicit */int) (short)(-32767 - 1))));
                            }
                            for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                            {
                                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (max((((/* implicit */long long int) var_6)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1])))))), (15243941053675824053ULL)));
                                arr_20 [i_0] [i_0] [i_3] = ((/* implicit */int) 9ULL);
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                            {
                                var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-9223372036854775787LL)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (~(var_9))))));
                                var_17 += ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)50815))));
                            }
                            for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned short)50808)))), (((/* implicit */int) (unsigned char)8))));
                                var_19 = ((/* implicit */unsigned short) arr_19 [i_3]);
                                var_20 = min((((/* implicit */unsigned int) arr_16 [i_7] [8LL] [i_3] [i_3] [i_1] [i_0])), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)244))))), ((+(8U))))));
                            }
                        }
                    } 
                } 
                arr_25 [i_0 + 3] [i_1 - 1] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1227069880068200603LL), (min((((/* implicit */long long int) -2147483637)), (9223372036854775785LL)))))) ? ((~(104841555))) : ((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_11 [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]) : (arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_7))));
    var_22 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)23115))))) ? (((((/* implicit */long long int) -2147483637)) ^ (-9223372036854775787LL))) : (((/* implicit */long long int) (~(var_3)))))), (((/* implicit */long long int) var_7))));
    var_23 = ((/* implicit */unsigned char) 958438194);
}
