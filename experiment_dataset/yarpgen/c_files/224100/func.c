/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224100
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = var_0;
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */short) (signed char)18)), ((short)-4509))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) (short)4751))));
                                var_22 ^= ((/* implicit */signed char) (!(((((/* implicit */int) var_16)) != (((/* implicit */int) (signed char)17))))));
                                arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)115)) % (((/* implicit */int) (signed char)20)))) | (((/* implicit */int) (signed char)-115))));
                            }
                            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */signed char) ((((((/* implicit */int) min((var_5), (var_1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))) ^ (((/* implicit */int) ((((((/* implicit */int) var_16)) & (((/* implicit */int) var_3)))) != (((((/* implicit */int) (signed char)-15)) & (((/* implicit */int) (signed char)17)))))))));
                                arr_14 [i_0] [i_0] = (signed char)-19;
                                var_24 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)104)) % (((/* implicit */int) (short)-4509))));
                                arr_15 [(short)2] |= ((/* implicit */short) ((min((((((/* implicit */int) (signed char)-19)) + (((/* implicit */int) (signed char)104)))), (((/* implicit */int) var_10)))) + (((/* implicit */int) (signed char)123))));
                            }
                            var_25 ^= ((/* implicit */signed char) (+((+((+(((/* implicit */int) (short)-26415))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        {
                            var_26 = (signed char)104;
                            /* LoopSeq 1 */
                            for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
                            {
                                var_27 = ((/* implicit */short) max((((((/* implicit */int) (short)11829)) & (((/* implicit */int) (signed char)20)))), (((/* implicit */int) ((((/* implicit */int) (signed char)104)) < (((/* implicit */int) (signed char)123)))))));
                                var_28 = ((/* implicit */short) min(((signed char)53), (((/* implicit */signed char) (((+(((/* implicit */int) var_13)))) != (((/* implicit */int) (signed char)-58)))))));
                                var_29 += ((/* implicit */signed char) (-(((((/* implicit */int) var_4)) | (((/* implicit */int) var_14))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) var_6);
}
