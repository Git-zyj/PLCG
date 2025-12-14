/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29200
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 3])) * (((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 3])))), (((/* implicit */int) var_10)))))));
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (short)15608))))))) ? (((/* implicit */int) arr_2 [(unsigned char)2] [i_2] [(unsigned char)8])) : (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */int) min((((short) var_10)), (((/* implicit */short) max(((unsigned char)255), ((unsigned char)221))))))), ((+(((/* implicit */int) (unsigned char)225)))))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_6 [i_1] [(unsigned char)6] [i_4]))));
                                var_22 ^= ((/* implicit */short) (unsigned char)10);
                                var_23 *= ((/* implicit */short) max((((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) arr_7 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))))), (((/* implicit */int) (unsigned char)12))));
                                var_24 -= ((/* implicit */short) (-(((/* implicit */int) (short)19057))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */short) ((max(((~(((/* implicit */int) (unsigned char)1)))), (((((/* implicit */int) var_11)) % (((/* implicit */int) var_11)))))) > (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)-10137))) > (((/* implicit */int) max((arr_8 [i_6 - 1] [i_5] [(unsigned char)4] [i_1] [i_1] [i_0 - 3]), (((/* implicit */short) (unsigned char)226))))))))));
                                var_26 *= ((/* implicit */short) ((unsigned char) max(((unsigned char)12), (max((var_12), ((unsigned char)255))))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (short)4318)) : (((/* implicit */int) (unsigned char)161)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 4] [i_0] [i_2] [i_5 - 2] [i_5] [i_6]))))) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_10)))))))));
                                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-28228)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned char)223))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (short)-15711))) & (((((/* implicit */int) (short)28221)) | (((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
}
