/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198376
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned int) ((int) (+(((/* implicit */int) (unsigned char)238)))))))));
                var_19 = (-(((/* implicit */int) ((short) min((var_1), (((/* implicit */int) var_15)))))));
                var_20 = ((/* implicit */_Bool) (-(var_4)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((4082695556U) >> (((((/* implicit */int) var_15)) - (46)))))))))));
                            arr_14 [i_0] = (+(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_16))), (((/* implicit */int) var_13)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (-(((var_16) & (var_1))));
                    arr_20 [i_4] = ((/* implicit */unsigned int) var_2);
                    var_21 *= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) (short)24121)))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) var_7));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_28 [i_0] = ((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
                                var_22 &= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_4)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) (+(var_4)));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */int) var_13);
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)23)))))));
                        arr_31 [i_0] [i_1] [i_5] [i_5] = 3726815599U;
                    }
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((short) var_16)))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 2) 
                        {
                            {
                                var_27 = ((((/* implicit */_Bool) (-(1761589310)))) ? (((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_5)) - (8675))))) : ((~(((/* implicit */int) var_6)))));
                                arr_38 [i_0] [i_11] [i_0] [i_10] [i_11] = ((1099759237U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))));
                            }
                        } 
                    } 
                    arr_39 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (short)-32286))))) : (((/* implicit */int) var_15))));
                    arr_40 [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) (~(51603811U))));
                }
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) (unsigned char)228);
                    var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)126))))) ? ((-(-1498156071))) : (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-20653))))))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (unsigned char)65))), (((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_2)))) | (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            {
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)241))))) ? (min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (var_15)))), (max((((/* implicit */unsigned int) var_10)), (92285139U))))) : ((~((((_Bool)1) ? (51603818U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20662)))))))));
                var_32 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)176)) | (((/* implicit */int) var_17)))), (((/* implicit */int) var_13))))) % (((((/* implicit */_Bool) ((long long int) (unsigned char)24))) ? (3913089635U) : (((/* implicit */unsigned int) ((int) (unsigned char)45)))))));
                arr_51 [i_13] [i_13] = ((/* implicit */unsigned char) ((signed char) (-(var_16))));
            }
        } 
    } 
}
