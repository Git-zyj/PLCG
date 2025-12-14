/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36705
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
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) var_9)) | (var_4))))));
        arr_3 [i_0 - 4] &= ((/* implicit */long long int) ((unsigned long long int) var_6));
    }
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)187)) ^ (((/* implicit */int) (short)2428))));
    /* LoopSeq 1 */
    for (short i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) ((short) (+(var_8))));
            var_15 = ((/* implicit */signed char) var_0);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_11 [i_2] [i_3] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (+(var_10)))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) <= (26LL)));
            }
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_18 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
                arr_16 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_7)))));
            }
            arr_17 [i_1] [i_2] = ((/* implicit */unsigned int) var_1);
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) ((short) ((var_11) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_2)))))));
                var_20 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))) + (((1905578730U) & (((/* implicit */unsigned int) ((((/* implicit */int) (short)2428)) & (((/* implicit */int) (short)-12837))))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42)))))));
            }
        }
        var_22 += ((/* implicit */signed char) ((unsigned char) ((short) (-(var_8)))));
        var_23 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_1)) > (var_10)))))));
    }
    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - ((+(((var_0) / (((/* implicit */unsigned long long int) var_4))))))));
}
