/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220527
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 + 1] [12U])) ? (((/* implicit */int) arr_1 [i_0 - 1] [6ULL])) : (((/* implicit */int) arr_3 [i_0 - 2])))) % (((/* implicit */int) ((signed char) (signed char)8))))))));
                    var_18 = ((/* implicit */unsigned long long int) var_10);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_3] [(unsigned char)8]))));
                    arr_18 [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((arr_16 [i_3] [i_3] [i_5]), (((/* implicit */unsigned short) (signed char)12))))) ? (((/* implicit */int) (signed char)-1)) : ((~(((/* implicit */int) (unsigned char)57))))))));
                    arr_19 [i_3] [i_5] = ((/* implicit */long long int) (~(var_7)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 19; i_6 += 4) 
    {
        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            {
                var_20 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((signed char) arr_24 [i_6] [i_6] [i_7 + 1]))) ? (((/* implicit */unsigned long long int) arr_24 [i_6] [i_6 - 2] [i_6 - 1])) : (arr_21 [i_6 - 1]))), (((((/* implicit */_Bool) arr_23 [i_7])) ? ((-(arr_21 [(signed char)10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -8132026698613230873LL)), (arr_21 [(unsigned char)9])));
                            arr_30 [i_6 - 1] [(signed char)16] [i_6] [i_6 - 1] &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_29 [i_6 + 1] [3U] [3U] [i_9] [i_6 + 1] [i_6 + 1])) * (((/* implicit */int) var_0)))));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_1))));
                            var_23 = ((/* implicit */int) ((var_15) ? (((((/* implicit */_Bool) 3383004477U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (911962818U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_24 [i_6 - 3] [1ULL] [i_6 - 3]), (((/* implicit */int) var_9))))) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) max(((signed char)18), (var_14)))))))));
                        }
                    } 
                } 
                arr_31 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7]))) : (-8132026698613230873LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)31475)) : (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_27 [i_6 - 3] [i_7 + 3] [i_7])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (147)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) : (max((((/* implicit */unsigned int) var_1)), (var_16)))))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_38 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) min((arr_24 [i_6] [i_6] [i_6]), (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 958945790U)) || (((/* implicit */_Bool) 911962819U)))))) : (arr_21 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (3383004489U))) > (((/* implicit */unsigned int) arr_25 [i_6] [7U]))))))));
                            var_24 = ((/* implicit */unsigned int) ((unsigned short) arr_28 [i_6 - 1] [i_6] [8U] [i_6 - 1] [i_6]));
                            arr_39 [i_7] [i_10] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_24 [i_7] [i_10] [i_7]) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 1]))) : (max((((/* implicit */unsigned int) var_2)), (var_10))))) | (((/* implicit */unsigned int) ((((/* implicit */int) max((var_1), (var_13)))) << (((((/* implicit */_Bool) 3336021528U)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)20)))))))));
                            var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_29 [i_6] [i_6] [i_6] [i_10] [i_6] [i_11])), (var_8)))) ? ((-(((/* implicit */int) arr_34 [i_10])))) : (((/* implicit */int) max(((signed char)-8), (((/* implicit */signed char) (_Bool)1)))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */long long int) ((/* implicit */int) var_5))) != (arr_33 [6U] [i_10] [6U]))) ? (((((/* implicit */_Bool) arr_23 [(unsigned short)2])) ? (((/* implicit */int) arr_28 [i_6] [i_7] [i_6] [(unsigned short)11] [i_7])) : (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) min((arr_27 [i_10] [i_10] [i_10]), ((unsigned char)192))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
