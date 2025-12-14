/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28809
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
    var_12 = ((/* implicit */_Bool) max((var_12), (var_7)));
    var_13 ^= ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */signed char) 2644488127U);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_12 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_11 [i_4] [19U] [i_2 - 1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))))))));
                                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65531))));
                                arr_13 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 2] [i_4] [i_4])))))));
                                var_16 = ((/* implicit */short) (+(((/* implicit */int) (signed char)114))));
                                var_17 += ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 2])))), (((((/* implicit */int) (unsigned short)65531)) * (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 2]))))));
                            }
                            for (short i_5 = 3; i_5 < 21; i_5 += 4) 
                            {
                                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((arr_16 [i_0] [i_1] [i_0] [i_2] [i_5] [i_0] [i_2]) > (((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */int) (unsigned short)65531))))))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max(((~(min((((/* implicit */unsigned long long int) (unsigned short)20)), (var_6))))), (min(((-(8329623437577228270ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0]))))))))))));
                            }
                            for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
                            {
                                arr_19 [i_2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65513)) && ((!(((/* implicit */_Bool) (unsigned short)65513)))))) ? (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (932118228)))))))));
                                var_20 = ((/* implicit */long long int) (~(var_6)));
                                arr_20 [i_2] [i_1] [i_2] [i_1] [0] [i_1] = ((/* implicit */_Bool) (short)32761);
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((max((var_9), (var_9))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ^ (((((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned short)12241)))) - (var_10))))))));
                            }
                            var_22 = ((/* implicit */unsigned int) ((var_9) << (min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (var_10)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
