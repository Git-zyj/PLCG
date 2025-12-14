/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206189
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) var_5))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) << ((((((-(((/* implicit */int) (unsigned char)192)))) + (210))) - (12)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >= (-1917551739)))), ((~(arr_1 [i_0] [i_0])))));
        var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 570787286U)) ? (((/* implicit */int) (signed char)30)) : (-252686619)))));
        arr_3 [i_0] [i_0] &= arr_0 [i_0];
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_23 ^= ((/* implicit */long long int) (_Bool)1);
                        var_24 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3]);
                    }
                    var_25 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_9 [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) ((unsigned char) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_15 [i_0] [8U] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (signed char)30);
                        arr_16 [i_4] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) << (((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [15U] [i_2] [i_4]))) + (var_5))) - (2687946482225112153LL)))))) - (((((/* implicit */_Bool) var_14)) ? (arr_11 [i_0] [i_0] [(unsigned short)0] [i_0] [i_0]) : (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]))))));
                        var_26 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_1))))));
                    }
                    var_27 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(arr_1 [i_0] [i_1])))), (min((((/* implicit */long long int) arr_7 [i_2] [i_1] [i_2])), (max((var_8), (((/* implicit */long long int) var_13))))))));
                }
            } 
        } 
    }
    var_28 += ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((unsigned char) ((((-1917551739) + (2147483647))) << (((((-1917551739) + (1917551765))) - (25)))))))));
    var_29 = ((/* implicit */_Bool) var_13);
}
