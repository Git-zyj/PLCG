/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215209
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */short) (_Bool)1))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_13 &= ((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) ((max((((/* implicit */long long int) var_1)), (arr_3 [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                arr_6 [i_2] [i_2 - 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1]);
                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) max((var_0), (((-9019241570267525374LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-68))))))))));
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_8);
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) var_1))))) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            }
            for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) /* same iter space */
            {
                var_16 &= ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_4] [i_4]);
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (((~(arr_14 [2]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_4 - 1])) >= (((/* implicit */int) arr_1 [i_4 - 3])))))))))));
            }
            for (unsigned short i_5 = 3; i_5 < 12; i_5 += 3) /* same iter space */
            {
                arr_17 [i_0] [i_1] [i_5 - 2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) : (max((2312014654U), (((/* implicit */unsigned int) var_5)))))));
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */int) ((short) 4294967273U));
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 11; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (_Bool)1);
                            arr_25 [i_1] [i_1] [i_5] [i_1] [i_1] [1] [i_7] = ((/* implicit */unsigned int) ((var_3) >> (((((/* implicit */int) ((short) arr_5 [i_5] [i_5 - 1] [i_5]))) + (87)))));
                            var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_2)))) ? (max((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)119))))), (max(((unsigned char)118), ((unsigned char)142)))))))));
                            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-32762))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 3; i_8 < 12; i_8 += 3) /* same iter space */
            {
                arr_28 [i_0] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8167092992804428429LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118)))))) > (max((((/* implicit */unsigned long long int) ((7170906113190025338LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))))), (min((10547217073633496082ULL), (((/* implicit */unsigned long long int) (unsigned char)126))))))));
                arr_29 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_8 + 1] [i_1] [i_1]);
                arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_8 - 3] [i_8 - 3]))) : (2487820202U)))) ? (arr_16 [i_0] [i_0] [i_1]) : (((/* implicit */int) var_5))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_8 - 1]))) + ((+(var_4)))))));
            }
            var_21 = ((/* implicit */signed char) ((long long int) var_2));
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            arr_33 [i_9] = ((((((/* implicit */_Bool) var_1)) ? (arr_27 [i_0] [i_0] [i_9] [i_0]) : (arr_3 [i_0] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) > (arr_27 [i_0] [i_0] [i_0] [i_0]))))));
            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+((~(var_8)))));
            var_22 += ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) (unsigned char)137))));
            var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) var_7)) + (72))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (33554431U)))))))) - (var_4)));
        }
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_32 [i_0] [i_0] [i_0]))));
        var_25 += ((/* implicit */int) ((((/* implicit */_Bool) (~(min((12871421396107161690ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32762))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-25162))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) : (-3559819620991688948LL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                {
                    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (unsigned short)46727)), (var_2))))))));
                    arr_39 [i_11] [i_10] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (arr_3 [i_0] [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)42))))))) ? (arr_13 [i_0] [i_10] [i_11] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)59787))))))));
                    var_27 += ((/* implicit */unsigned int) max(((((_Bool)1) ? (12871421396107161690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20853))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -3910062831794221073LL)) ? (arr_19 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >= (max((((/* implicit */unsigned long long int) arr_23 [i_0] [i_10] [i_10] [i_10] [i_10] [i_10] [i_11])), (var_2))))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) arr_7 [i_12] [i_12] [i_12]);
        arr_42 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(14919449513206171511ULL)))) ? (((/* implicit */int) ((min((var_2), (((/* implicit */unsigned long long int) arr_9 [i_12])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [8ULL])))))) : (((/* implicit */int) arr_12 [i_12] [i_12] [i_12] [i_12]))));
    }
}
