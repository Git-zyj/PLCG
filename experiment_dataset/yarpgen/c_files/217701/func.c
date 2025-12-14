/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217701
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
    var_15 = var_13;
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-25229))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) max(((short)32761), (((/* implicit */short) var_0)))))))) | (var_11)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_13))), (((/* implicit */unsigned long long int) var_14)))), (max((min((((/* implicit */unsigned long long int) var_10)), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25118)) | (((/* implicit */int) (unsigned char)184)))))))));
        var_19 = ((/* implicit */short) max((var_19), ((short)-32748)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-14))))))) ? ((-((-(((/* implicit */int) (signed char)124)))))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) max(((short)-18453), (((/* implicit */short) var_10)))))))));
                            var_20 = ((/* implicit */int) (short)-14249);
                            arr_16 [(unsigned char)6] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) min((var_7), (var_12)))) : (((/* implicit */int) (short)-32755)))) << (((((/* implicit */int) max(((short)3736), (var_5)))) - (3715)))));
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_3 + 1] = min((((((/* implicit */_Bool) (short)-29329)) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_9)))))), (((/* implicit */int) (signed char)30)));
                        var_21 -= ((/* implicit */short) min(((-(((/* implicit */int) var_8)))), ((+(((/* implicit */int) min((var_12), (var_10))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */signed char) var_14);
        var_23 = ((/* implicit */unsigned char) max(((~(((((/* implicit */int) var_5)) | (((/* implicit */int) (short)4572)))))), (((/* implicit */int) max(((signed char)-9), ((signed char)125))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_24 = max(((((+(((/* implicit */int) var_10)))) % (((/* implicit */int) max(((short)-32755), (((/* implicit */short) var_7))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (+(var_13))))))));
                    arr_25 [i_6] [i_6] [i_7] [i_6] |= var_14;
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) max((((/* implicit */int) (short)-29318)), (max((((/* implicit */int) (short)32767)), ((+(((/* implicit */int) (signed char)93))))))));
    }
    for (signed char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        arr_29 [i_8] &= ((/* implicit */unsigned short) max((min((max((((/* implicit */unsigned long long int) var_7)), (var_11))), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (unsigned char)192)))))))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)29329)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27825)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 4) 
                        {
                            arr_43 [i_8] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-94)) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_10)) - (153)))))));
                            arr_44 [i_8] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (short)29304)) : (((/* implicit */int) var_0))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_6))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            arr_49 [(unsigned char)2] [(unsigned char)4] [i_10] [i_8] [i_8] = var_12;
                            arr_50 [i_8] [i_9] [i_10] [i_11] [i_13] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)53)), (((((/* implicit */_Bool) (unsigned short)10177)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)112))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((var_11) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_6))))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_53 [i_8] [i_8] [i_8] [i_14] = ((((/* implicit */_Bool) (short)-10771)) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_9)))) * (((((/* implicit */int) var_5)) / (((/* implicit */int) (short)-32725))))))) : (var_2));
                            var_29 ^= max((min((var_7), (var_12))), (var_7));
                            arr_54 [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) var_5);
                            arr_55 [i_8] [i_8] [i_8] [i_10] [i_10] [i_11] [i_14] = ((/* implicit */signed char) var_10);
                        }
                    }
                } 
            } 
        } 
    }
}
