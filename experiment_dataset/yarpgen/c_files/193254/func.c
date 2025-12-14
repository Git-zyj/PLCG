/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193254
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
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) var_1))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [(unsigned short)2] [i_1] = (-(max((((var_11) / (((/* implicit */int) (short)25776)))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_9)))))));
                                var_16 = (-2147483647 - 1);
                                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_13)))) : (min((((/* implicit */int) var_1)), (2147483630))))) < (((/* implicit */int) (short)15215))));
                                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((min((((/* implicit */int) var_3)), (-1584668617))) == ((-(786432))))))));
                                var_19 = ((/* implicit */int) max((var_19), (min((((/* implicit */int) var_12)), (((((/* implicit */int) (signed char)33)) & (((/* implicit */int) (signed char)-17))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)64512)) != (((/* implicit */int) (short)15229)))))))) : (((unsigned long long int) (short)-15221))));
                                arr_20 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) > (min((min((((/* implicit */int) (unsigned char)128)), (0))), (((((/* implicit */_Bool) var_4)) ? (536870912) : (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 8; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-108)) != (477593955))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned short) (signed char)13);
                            arr_32 [i_1] [i_1] [(short)10] [i_7] [(short)10] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)33)) : (((-1) * (((/* implicit */int) (unsigned char)248))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_23 |= ((/* implicit */unsigned long long int) (short)0);
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (var_10)));
                            arr_39 [i_0] [(unsigned char)0] [i_0] [i_8] [i_8] [(_Bool)1] [i_11] = (!(((/* implicit */_Bool) 1554697479)));
                            var_26 = ((/* implicit */unsigned char) var_7);
                            var_27 = ((/* implicit */_Bool) var_4);
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_45 [i_0] [i_1] [i_0] [i_12] = ((/* implicit */_Bool) (((((_Bool)1) ? (14581580338868960047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) % (((/* implicit */unsigned long long int) ((2147483647) << (((14581580338868960063ULL) - (14581580338868960063ULL))))))));
                                var_28 = (unsigned char)222;
                                arr_46 [i_0] [5] = ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-15245)) : (((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)47807)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned short)53519)))) : (((/* implicit */int) (signed char)13))));
                    var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)2737)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))));
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_13))));
                    arr_51 [i_0] = ((/* implicit */_Bool) var_0);
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (short)-15215))))))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) (short)25)) : (((/* implicit */int) var_9))))))))));
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (_Bool)1))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) (unsigned short)46689))), ((-(((/* implicit */int) (signed char)-21))))));
    /* LoopNest 3 */
    for (signed char i_15 = 2; i_15 < 15; i_15 += 4) 
    {
        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                {
                    arr_58 [(unsigned char)8] [i_16] [i_15] |= ((/* implicit */unsigned short) min((2021156703), (((/* implicit */int) ((((unsigned long long int) (signed char)102)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    arr_59 [i_16] = ((/* implicit */unsigned char) max(((short)15215), (((/* implicit */short) (signed char)-44))));
                    arr_60 [i_16] [i_16] [i_17] = ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-86)))) >= (((((/* implicit */int) (signed char)118)) << (((((/* implicit */int) var_9)) - (86)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))))));
                }
            } 
        } 
    } 
}
