/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235188
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
    var_13 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_1)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */unsigned short) min((max((-702968425), (((/* implicit */int) (unsigned short)65516)))), (((((/* implicit */_Bool) (unsigned short)1708)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) <= (var_10))) ? (max((var_7), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) (unsigned char)197)))) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_2])) | (((/* implicit */int) arr_0 [i_0] [i_3]))))) ? ((-(var_7))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) << (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                            arr_12 [(_Bool)1] [(_Bool)1] [i_2] [i_3] &= ((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_3])) >= ((((((-(var_9))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_4)) / (((/* implicit */int) arr_2 [i_1] [i_3])))) - (189)))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) (unsigned short)0)) | (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_2]), (arr_3 [i_1] [i_1])))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((_Bool) (unsigned short)16383)))));
                            }
                            for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                            {
                                var_18 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)30)))));
                                arr_17 [i_0] [i_0] [i_2] [14] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)46)), ((unsigned char)252))))) & (arr_4 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) ((unsigned int) arr_3 [i_0] [i_0])))));
                            }
                            var_19 = ((/* implicit */unsigned int) ((_Bool) (+((-(3709541776U))))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned char)2]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 4; i_6 < 15; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) (unsigned short)65535)));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)65535))))))) <= (min((var_9), (((/* implicit */long long int) var_4)))))))));
                arr_22 [i_7] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_7 [i_6] [12])) ? (((/* implicit */long long int) arr_9 [i_6] [i_6 + 2] [i_6] [i_6 - 3] [i_7])) : (arr_4 [i_6] [i_7] [12U]))))) <= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)17)))))));
            }
        } 
    } 
}
