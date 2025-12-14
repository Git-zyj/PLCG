/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213666
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) -1136983458))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */signed char) var_4);
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_14))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) var_11))));
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)0)), (2147483641)));
    }
    var_23 = ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) var_17);
                    var_25 -= ((/* implicit */long long int) var_15);
                    arr_11 [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_1 [i_2 + 1]))) / (((((/* implicit */int) (unsigned char)154)) - (((/* implicit */int) arr_1 [i_3]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_2 + 1] [(unsigned char)10] [i_2 + 1] = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (unsigned short)2)))));
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_5))));
                        var_27 = var_14;
                    }
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (unsigned char)154))));
                }
            } 
        } 
    } 
}
