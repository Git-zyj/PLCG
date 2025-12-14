/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248459
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
    var_19 = ((/* implicit */unsigned short) var_17);
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (arr_1 [2U])));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_0 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        arr_7 [i_1 - 3] = ((((/* implicit */int) var_17)) << (((((/* implicit */int) (unsigned char)232)) - (230))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 4; i_2 < 7; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (short i_3 = 4; i_3 < 7; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_17)) <= (((/* implicit */int) var_14))))))));
                            arr_20 [i_1] [i_1] [i_2] [i_1] [i_5] [i_4] &= ((/* implicit */unsigned int) ((var_10) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)254)))) : (var_3)));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_2] [i_2])) % (((/* implicit */int) arr_12 [i_1 + 1] [i_2] [i_2]))))))))));
        }
        arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) ^ (arr_17 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 3])));
        var_25 = ((/* implicit */short) arr_2 [i_1 - 1]);
        var_26 = ((/* implicit */unsigned char) min((var_26), (((unsigned char) arr_8 [i_1 - 2] [i_1 + 1]))));
    }
}
