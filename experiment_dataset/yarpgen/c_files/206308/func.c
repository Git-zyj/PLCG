/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206308
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = (unsigned char)3;
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 2825809170526049347LL))));
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (2825809170526049342LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [13LL] [(unsigned short)4] [i_2])))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_2))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) var_9))))));
                            arr_15 [10U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_2] [i_3] [i_4])) ^ (((/* implicit */int) (unsigned char)112))));
                        }
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) || (((/* implicit */_Bool) 5243282889478240765LL)))))) ^ (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])))));
                    }
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) != (((/* implicit */int) var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_7))))) >> ((((-(((/* implicit */int) var_5)))) + (113)))))) : (max((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (0LL))), (var_6)))));
}
