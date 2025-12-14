/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44137
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
    var_19 = ((/* implicit */signed char) ((unsigned int) (unsigned char)69));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)186)) << (((min((var_12), (((/* implicit */long long int) (unsigned char)186)))) + (6784581595937075135LL)))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */int) (unsigned char)187)) >> (((((((/* implicit */_Bool) (unsigned char)253)) ? (arr_5 [i_1]) : (((/* implicit */int) arr_3 [i_1])))) + (1205472405)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_2 [i_0])), (var_3))))))) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (12798091071503929497ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)0)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (_Bool)0);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) min((arr_8 [i_0] [(_Bool)1] [i_2] [i_0]), (var_1)))) : (((/* implicit */int) ((_Bool) ((unsigned char) arr_2 [i_0]))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_1]), (((/* implicit */short) arr_9 [i_1] [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8)))))))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_9 [i_1] [i_2])))) ^ (((((/* implicit */_Bool) 3820505648U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)70)))))) : (((/* implicit */int) (unsigned char)187))));
                }
                arr_12 [i_0] [i_1] = (!(((/* implicit */_Bool) arr_9 [i_0] [i_0])));
            }
        } 
    } 
    var_23 = var_15;
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_3] [i_3] [i_4] [i_5] [i_3] [i_6] [i_5] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (short)-18633)) : (((/* implicit */int) (unsigned char)186)))))));
                                var_24 *= min((((/* implicit */unsigned long long int) ((unsigned int) arr_25 [i_3] [i_3] [(short)8] [i_6] [i_3] [i_7] [i_3]))), ((~(arr_25 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [i_3]))));
                                arr_29 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)60))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) ((signed char) 0ULL));
            }
        } 
    } 
}
