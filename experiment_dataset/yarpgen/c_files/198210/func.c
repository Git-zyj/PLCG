/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198210
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                var_10 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) (short)-12787)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12771))) : (2859351701U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                arr_15 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((var_2) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12808))) >= (1435615605U))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) var_0);
                                var_11 = ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) ((2201578145U) | (((/* implicit */unsigned int) -764971742)))))), (var_8)));
                            }
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_2 [i_2] [18LL])) ? (((/* implicit */int) arr_0 [i_3 + 1] [i_1])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)3223)))) < (((/* implicit */int) arr_11 [16U])))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((arr_7 [i_0] [i_0] [i_0]) ^ (max((15LL), (((/* implicit */long long int) (short)-12782))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        arr_30 [i_5] [i_7] [i_7 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_8] [i_7 + 1] [i_8] [i_7]))) : (1160869114U)))) & (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) arr_5 [i_8]))))))) ? (max((arr_12 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned long long int) min((arr_20 [i_7 - 1]), (arr_20 [i_7 - 1]))))));
                        var_14 = ((/* implicit */signed char) max((max((((unsigned long long int) arr_23 [i_7 + 1])), (((/* implicit */unsigned long long int) ((long long int) var_2))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) -6221161296056921093LL)) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))))))));
                        arr_31 [i_5] [i_6] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_5] [i_7] [i_7 - 1] [i_8])) ? (((((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7 + 1])) ? (((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7]))) : (var_9))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7]))) : (var_4))))) : (min((min((((/* implicit */unsigned int) (short)6885)), (var_7))), (((/* implicit */unsigned int) max((var_6), (var_1))))))));
                        arr_32 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)256))));
                        var_15 = ((/* implicit */_Bool) ((short) -9216271275027102531LL));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */int) (signed char)8)) > (((/* implicit */int) arr_14 [i_5] [10U] [i_5] [i_5] [i_5] [i_5] [i_5]))))), (min((max((146538395U), (((/* implicit */unsigned int) (unsigned char)13)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255)))))))));
    }
    for (int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
    {
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)3242))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -1348565486)) : (9216271275027102531LL)))) ? (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_9] [i_9])) - (75))))) : (((/* implicit */int) var_3)))))));
        arr_36 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? ((+(((/* implicit */int) arr_34 [i_9])))) : ((-(((/* implicit */int) arr_34 [i_9])))))))));
        var_17 = ((unsigned int) ((var_0) ? (((((/* implicit */_Bool) var_2)) ? (-9216271275027102548LL) : (((/* implicit */long long int) var_4)))) : (max((arr_1 [i_9]), (((/* implicit */long long int) var_8))))));
    }
    for (int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned char)246))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_10] [i_10])) : (arr_17 [i_10] [i_10])))))) ? (max((arr_2 [i_10] [6]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3222)) | (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 189671521)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62322))))))))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_25 [2])) == (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) arr_28 [i_10] [i_10] [(unsigned short)12] [i_11])) : (((/* implicit */int) (unsigned char)164))))) : (arr_12 [i_10] [i_11] [i_10] [i_11] [i_10] [i_10] [i_10])))));
            var_20 = ((/* implicit */short) (+(arr_7 [i_10] [i_11] [i_11])));
        }
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_6), (arr_39 [i_10] [i_10])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_10] [i_10])) | (((/* implicit */int) var_6))))) : (arr_1 [i_10]))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_24 [i_10] [i_10] [i_10]) < (((/* implicit */long long int) var_4))))))));
    }
}
