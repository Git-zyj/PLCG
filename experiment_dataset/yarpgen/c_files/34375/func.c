/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34375
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
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_0)), (var_6)))) ? (var_2) : (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21655))) | (196150446814618152ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))))) : ((~(var_2)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (min((((/* implicit */unsigned long long int) var_4)), (18250593626894933476ULL))) : (((/* implicit */unsigned long long int) var_11))))) ? (var_2) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))) << (((((int) var_2)) + (2097003531)))))));
    var_17 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_4)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (((min((var_13), (((/* implicit */long long int) var_10)))) + (((/* implicit */long long int) ((((/* implicit */int) arr_0 [16U] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) | (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) ((var_12) == (var_9)))) : (max((((/* implicit */int) (_Bool)1)), (903158141)))))));
            var_19 = ((/* implicit */int) var_5);
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)108));
            var_21 = ((/* implicit */signed char) var_9);
            var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max((arr_0 [i_2] [i_0]), (arr_0 [i_0] [i_2])))), (((unsigned short) var_7))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_0] [i_0]))));
                var_24 &= ((/* implicit */long long int) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((long long int) arr_1 [i_0]));
                            var_26 += ((/* implicit */unsigned short) ((_Bool) var_10));
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [10] [i_0])) >> (((1929880797U) - (1929880797U)))));
            }
        }
        arr_19 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)104)));
    }
}
