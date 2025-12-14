/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195369
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
    var_16 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((-(((/* implicit */int) var_14)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_3))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13)))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned short) var_14))) == (((/* implicit */int) max((var_14), (((/* implicit */short) var_12))))))) ? (((/* implicit */int) ((var_11) <= (((long long int) 1059118724))))) : (((/* implicit */int) ((signed char) (-(var_6)))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) var_9);
            var_17 = ((/* implicit */short) var_9);
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_12);
            var_18 = ((/* implicit */_Bool) var_7);
        }
        for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_19 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_8)) ? (var_5) : (var_6))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2))))))) << (((((/* implicit */int) ((unsigned char) ((unsigned long long int) var_15)))) - (217)))));
            arr_11 [i_2] [i_2 - 2] = var_9;
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) var_14);
            var_21 = ((/* implicit */short) var_6);
            arr_15 [i_3] [i_3] |= var_14;
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) && (((((/* implicit */int) var_9)) > (((/* implicit */int) var_14))))))) != (((/* implicit */int) ((short) ((1059118724) <= (-1059118725)))))));
            arr_16 [i_0 - 2] [i_3] [i_3] = ((/* implicit */signed char) ((short) var_14));
        }
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_23 = ((/* implicit */short) ((unsigned short) var_9));
        var_24 = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (((long long int) var_15)))));
        var_25 += ((/* implicit */_Bool) ((unsigned char) ((394324759U) < (((/* implicit */unsigned int) -1059118721)))));
        var_26 = var_0;
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_9))));
    }
}
