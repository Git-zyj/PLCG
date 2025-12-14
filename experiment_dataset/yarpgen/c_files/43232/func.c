/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43232
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (~(max((arr_1 [i_0 - 3]), (arr_1 [i_0 + 2])))));
        arr_2 [i_0] = 1190432256U;
    }
    for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
    {
        var_17 = (-((+(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)255))))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_18 *= ((/* implicit */short) ((min(((~(-5555836408607746103LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58108)) ? (((/* implicit */int) arr_0 [i_1 - 3] [i_1])) : (arr_1 [19])))))) <= (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)5))) % (arr_1 [4U]))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (-1507657810326954458LL)))) || (((/* implicit */_Bool) (~(arr_5 [i_1 - 1]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)53)) ^ (((/* implicit */int) ((arr_1 [i_3]) < (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)(-32767 - 1))))))))));
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1] [i_4]))));
                        arr_14 [i_3] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) 971339751U)), (min((((long long int) 3104535039U)), (((/* implicit */long long int) (unsigned short)18))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) min((min((var_5), (((/* implicit */long long int) arr_8 [i_2] [i_1])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1 - 3] [i_2] [i_1 - 3])))))));
        }
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) /* same iter space */
            {
                arr_20 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_6 - 2] = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) >= (arr_8 [11U] [i_6])))));
                var_23 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_5] [i_6 - 1]))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (arr_15 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34)))))) ? ((-(4294441662U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 4] [i_5] [i_6 - 1] [i_6 - 2] [i_1] [i_8 - 1])))));
                            var_25 = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_14))));
            }
            for (unsigned char i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) >> (((((/* implicit */int) (signed char)101)) - (87)))))), (((((/* implicit */_Bool) arr_19 [i_1 - 4] [i_5])) ? (arr_24 [i_1 - 1] [i_5] [i_5] [i_5] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 4] [i_1 + 1])))))));
                arr_28 [i_1] [i_1] [i_5] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_9 + 1])) ? (var_7) : (((((/* implicit */_Bool) 1928627590U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))) : (-1LL))))), (max((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_9 - 1]))))), (max((((/* implicit */long long int) arr_19 [i_1 - 3] [i_5])), (var_5)))))));
                var_28 = ((/* implicit */int) ((max((arr_27 [i_1 - 3]), (arr_27 [i_1 + 1]))) - (((((/* implicit */_Bool) arr_27 [i_1 + 1])) ? (arr_27 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)10588)))))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_10 = 3; i_10 < 16; i_10 += 1) 
            {
                var_29 = ((/* implicit */long long int) arr_3 [i_5]);
                arr_31 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((~(min((((/* implicit */unsigned int) arr_25 [i_1] [i_5] [i_5] [i_10 - 3] [i_10])), (arr_29 [i_1] [i_5] [i_5] [i_1 + 1])))))));
                var_30 ^= ((/* implicit */signed char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) 1491250940U)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) var_9))))) / (-5761293093973030462LL))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_25 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1])))))))));
                arr_32 [i_1] [i_5] [i_10 + 1] = ((/* implicit */int) arr_29 [i_1] [i_1 - 2] [i_10 - 1] [i_10]);
            }
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_43 [i_12] [i_12] [i_12] [i_12] [i_11] = ((/* implicit */short) ((unsigned int) -1507657810326954458LL));
                            var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_12] [i_5])), ((+(((/* implicit */int) var_15))))))), ((-(var_1)))));
                            arr_44 [i_11] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max(((~(max((arr_38 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (3578360908U))))), (((/* implicit */unsigned int) arr_1 [i_5]))));
                        }
                    } 
                } 
                arr_45 [i_1 - 4] [i_11] [i_1] = ((/* implicit */_Bool) var_10);
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) | (1774726602)));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_18 [i_1 - 1] [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7867511952715182216LL)) ? (((/* implicit */int) arr_40 [i_1 - 3] [i_1 - 3] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_4))))) ? (var_1) : (arr_34 [i_1] [i_1] [i_14] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1])))));
                var_34 = ((/* implicit */long long int) var_2);
            }
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                arr_52 [i_1] = ((/* implicit */signed char) -1774726603);
                var_35 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_1])), (var_7)))) ? (((/* implicit */long long int) min((arr_34 [i_1] [i_5] [i_1] [i_15]), (((/* implicit */unsigned int) var_11))))) : (max((var_8), (((/* implicit */long long int) arr_1 [i_5])))))) % (min((((/* implicit */long long int) max((((/* implicit */unsigned int) 1774726593)), (4294967294U)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_34 [i_1] [i_5] [i_5] [i_15])) : (var_7)))))));
            }
        }
        var_36 = ((/* implicit */unsigned int) (unsigned char)104);
        arr_53 [i_1 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_25 [i_1 - 3] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])) > (max((arr_39 [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 3]), (arr_17 [i_1] [i_1] [i_1] [i_1]))))), (((((/* implicit */int) arr_42 [i_1 - 1] [i_1 - 1] [i_1 - 1])) < ((+(((/* implicit */int) (unsigned short)65533))))))));
    }
    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((-7867511952715182217LL) / (((/* implicit */long long int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13))))))) : (((/* implicit */int) (unsigned char)64)))))));
}
