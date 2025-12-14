/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235484
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
    var_11 = ((((unsigned long long int) max((((/* implicit */unsigned long long int) var_1)), (var_10)))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_1)) + (140)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((var_7), (((/* implicit */short) var_9))))) < (((((/* implicit */_Bool) var_1)) ? (var_3) : (var_3)))))))));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_3] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((var_10) - (15371646792660180342ULL)))))), ((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (136339441844224LL)))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned int i_4 = 4; i_4 < 10; i_4 += 3) 
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-5438679435617091858LL)))) % (var_10))))));
                                var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (var_4))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_6)))))));
                            }
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-(var_8))))))));
                                arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] [i_2] [i_5] = ((/* implicit */_Bool) var_6);
                                var_16 = ((/* implicit */unsigned long long int) ((var_10) < (((/* implicit */unsigned long long int) var_4))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                            {
                                arr_22 [i_0] [i_2] = ((/* implicit */signed char) ((short) var_1));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-51))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1291387753628400995ULL)) && (((/* implicit */_Bool) 1880700720710771059ULL)))))))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_9))));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                            {
                                arr_27 [i_2] [i_2] [i_2] [i_3] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((11615022720732443290ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (unsigned char)96))))) : (var_5)));
                                var_19 = ((/* implicit */signed char) var_0);
                                arr_28 [i_0] [i_2] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_5)))) : (-5438679435617091861LL)));
                            }
                            arr_29 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (var_3)))), ((~(-5438679435617091858LL))))), (((/* implicit */long long int) max((((var_5) * (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)115))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) -5438679435617091860LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1047552ULL)) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) var_9))))) : (min((((/* implicit */unsigned int) (unsigned char)247)), (var_4)))))));
            }
        } 
    } 
}
