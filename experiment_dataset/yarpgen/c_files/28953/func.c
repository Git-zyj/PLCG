/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28953
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
    var_19 = var_11;
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((unsigned int) var_18)), (((/* implicit */unsigned int) var_11))))), (14352726707736468631ULL))))));
    var_21 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(unsigned char)8] &= ((/* implicit */short) arr_1 [i_0] [8ULL]);
        arr_5 [(short)2] &= ((/* implicit */signed char) ((unsigned short) max((870820800), (((/* implicit */int) (short)-32750)))));
        arr_6 [i_0] = ((/* implicit */short) (-(arr_3 [i_0] [i_0])));
        var_22 &= arr_2 [i_0] [i_0];
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */int) var_6)))))) & (((/* implicit */int) ((2861203645U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_3 [i_0] [(signed char)5]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])))), (((/* implicit */unsigned long long int) var_15))))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_7))) < ((+(((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
            var_25 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (4094017365973082969ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
            arr_10 [i_0] [3U] [i_1] = ((/* implicit */int) ((unsigned long long int) (~(arr_1 [i_0] [i_0]))));
        }
    }
}
