/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32530
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((int) arr_5 [i_3 + 1] [i_3] [(unsigned short)0] [i_3 + 1]));
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_0]))) / (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) : (var_1));
                        var_18 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)46))));
                        arr_9 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_3] [i_2] [i_1] [i_0]) : (var_10))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_6 [i_0] [i_1] [(_Bool)1] [i_4]))));
                        arr_14 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4]))))) : ((+(((/* implicit */int) var_7))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)38683)) != (arr_8 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) arr_0 [(unsigned char)8] [i_0])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_6])))))));
                                var_22 = ((/* implicit */short) (+(1910853073)));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_0 [4LL] [4LL])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_2]))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned int) var_15);
    }
    var_24 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)86)) / (-293983696)))) / (1099511627775ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 16261165077512921030ULL)))))))));
}
