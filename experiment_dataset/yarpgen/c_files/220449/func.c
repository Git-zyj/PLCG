/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220449
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
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) (short)-8627))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((((int) arr_11 [i_2] [i_1 - 1] [i_1 + 3] [i_2])) | (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1))))))))));
                        var_17 -= ((/* implicit */signed char) var_10);
                        var_18 = ((/* implicit */signed char) var_5);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [(unsigned short)3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(1092890273)))))))));
                        arr_16 [i_1] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) min((min((arr_7 [i_1 - 3] [i_1 + 1] [i_1]), (arr_7 [i_1 + 1] [i_1 - 3] [i_0]))), (((signed char) var_1))));
                        var_19 = ((/* implicit */long long int) max((((/* implicit */short) ((_Bool) ((int) arr_11 [i_1] [(_Bool)1] [i_0] [i_1])))), ((short)32048)));
                        arr_17 [i_1] [i_1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_3);
                    }
                    arr_18 [8U] [i_1] = ((/* implicit */unsigned char) ((((min((arr_13 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_2])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 4280753393U))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)107)) >= (((/* implicit */int) (_Bool)1))))))))) : ((~(((((/* implicit */_Bool) 1092890301)) ? (((/* implicit */unsigned long long int) 2147483641)) : (arr_13 [(unsigned short)8] [(short)7] [(short)6] [i_0] [(unsigned char)1] [i_0])))))));
                }
            } 
        } 
    } 
}
