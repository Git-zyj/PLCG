/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36451
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */signed char) ((var_6) & (((((/* implicit */int) max(((_Bool)1), (var_17)))) | (var_10)))));
    var_22 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_19))))) || ((!((_Bool)1))))), (max((var_2), ((!(((/* implicit */_Bool) (unsigned short)38383))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -17LL)))))))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(956649813)))) ? ((-((-(((/* implicit */int) var_16)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(1390391750)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 5U)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) (unsigned short)27170))));
                                var_26 ^= ((/* implicit */unsigned short) ((307923672U) != (((/* implicit */unsigned int) max((min((var_12), (((/* implicit */int) arr_6 [i_0] [i_1] [i_4])))), (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)65522)))))))));
                                arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) -1836908454);
                                arr_14 [2U] [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) ((((arr_1 [i_0] [i_0]) != (arr_1 [i_3] [i_4]))) ? (((/* implicit */unsigned int) -66381675)) : (min((((/* implicit */unsigned int) var_13)), (3845258686U)))));
                                var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3647278716U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10258669635751774692ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3])))))))) || (((/* implicit */_Bool) 8897080233440930744ULL))));
                            }
                            arr_15 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : ((~(2984468557U))));
                        }
                    } 
                } 
            }
        } 
    } 
}
