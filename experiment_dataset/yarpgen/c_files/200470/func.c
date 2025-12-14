/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200470
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [19U] [19U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)64))))) & (max((((/* implicit */unsigned int) (signed char)60)), (1525207512U)))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 1778662344U))))) / (var_7))) * (((/* implicit */int) ((((2983211425U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) == (3343449645U)))))))));
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_21 &= ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                            var_22 &= ((/* implicit */int) ((72057593769492480LL) / (9208860022789268191LL)));
                            var_23 = ((/* implicit */unsigned int) var_12);
                        }
                        arr_17 [i_1] [i_2] [i_3] [i_3] = ((((2083030946880733058LL) << (((/* implicit */int) var_0)))) >= (((/* implicit */long long int) ((390000138U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144)))))));
                        arr_18 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(-4453578364039858364LL)));
                        arr_19 [i_1] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) 951517645U);
                        arr_20 [i_3] [i_3] [6ULL] [i_3] = ((((3610949393U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)62801)) >= (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (int i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_6))));
                                var_25 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) == (((((/* implicit */int) var_16)) % (((/* implicit */int) (_Bool)1))))))), (((((((/* implicit */long long int) ((/* implicit */int) (short)28672))) - (9208860022789268191LL))) - (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)148)), (1843466953))))))));
                            }
                        } 
                    } 
                    arr_35 [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) 3110352535U);
                    arr_36 [i_1] [i_6] [i_7] [i_7 - 1] |= (short)28672;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_26 -= ((/* implicit */unsigned long long int) var_16);
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)0)))))));
                        var_28 = ((/* implicit */long long int) var_3);
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) ((var_11) >= ((+(((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
}
