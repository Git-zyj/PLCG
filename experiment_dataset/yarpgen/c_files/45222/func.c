/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45222
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
    var_17 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (short)0)))));
    var_18 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned char) var_12);
        var_19 -= var_7;
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((unsigned char) (short)0));
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) ((_Bool) var_6))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((int) var_4)) + (((0) + (((/* implicit */int) (short)11)))))))));
            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */int) var_2);
            arr_15 [i_3] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)26)) / (((/* implicit */int) (unsigned char)173)))) + ((+(((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) var_4))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((unsigned int) ((var_2) >= (((/* implicit */unsigned int) var_13))))) + (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_16)))))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_24 = ((/* implicit */signed char) (~(var_3)));
            arr_18 [i_4] [i_4] [6] = ((/* implicit */signed char) ((((/* implicit */int) (short)-16)) / (-4)));
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-12)) + (((/* implicit */int) (signed char)0))));
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_27 [i_0] [i_6] [i_5] [i_6] = ((/* implicit */int) (+(((unsigned int) var_8))));
                arr_28 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((unsigned long long int) (!(((_Bool) var_13)))));
            }
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_33 [i_7] [0U] [i_0] = ((/* implicit */short) ((signed char) ((unsigned short) var_6)));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))))) | (((((((/* implicit */unsigned int) var_8)) / (var_14))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_8)) >= (var_3)))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned char) var_9);
                var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)71))));
            }
            for (int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                var_28 = ((unsigned char) ((int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11)))));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)71)))));
                arr_38 [i_9] [i_0] = ((/* implicit */unsigned long long int) ((430303519) * (((/* implicit */int) (signed char)0))));
            }
            arr_39 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((25) + (((/* implicit */int) (short)20))));
        }
    }
    var_30 = ((/* implicit */short) ((signed char) ((signed char) 3857386376U)));
}
