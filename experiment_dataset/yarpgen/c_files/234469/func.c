/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234469
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((2U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)46)))))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (max((-1229466592), (((/* implicit */int) (unsigned char)241))))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((-1229466592) / (((/* implicit */int) max(((unsigned char)14), (var_15)))))))));
                }
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) * (((((/* implicit */long long int) var_12)) / (6835388388298963182LL))))) : (min((var_6), (((/* implicit */long long int) ((((/* implicit */unsigned int) -1229466592)) | (3516619321U))))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) var_5);
                                arr_17 [i_0] [i_6] [i_4] [i_5] [i_6] &= ((/* implicit */unsigned char) var_8);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) (-2147483647 - 1)))))) ? (max((((/* implicit */unsigned long long int) ((unsigned int) var_12))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) == (0ULL)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        for (unsigned char i_8 = 3; i_8 < 12; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */signed char) max(((-(max((((/* implicit */int) (signed char)127)), (0))))), (max(((~(((/* implicit */int) (signed char)37)))), (((/* implicit */int) var_1))))));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)171)))))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */_Bool) (+(min((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
}
