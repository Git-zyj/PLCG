/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244570
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
    var_18 = ((/* implicit */signed char) var_11);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (min((4078095033U), (216872270U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) var_0))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) 536870912)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15))))) : ((~(3207999304U)))))));
                        arr_11 [i_0] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)160)) ? (1988961080013197754ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86)))));
                        var_21 = ((/* implicit */unsigned short) var_17);
                        var_22 *= ((/* implicit */unsigned int) var_17);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        }
        arr_12 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((216872263U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6)))))));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_24 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (17261679931847054625ULL))), (((/* implicit */unsigned long long int) var_8)))) * (((((((/* implicit */_Bool) (unsigned char)108)) ? (var_14) : (var_14))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)108)) ^ (((/* implicit */int) (signed char)-15)))))));
            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((12120325472983215520ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) (signed char)42)) : (((((/* implicit */_Bool) var_12)) ? (arr_9 [i_4] [i_5] [i_4] [16]) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 1988961080013197751ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (2147483647))))) : (((((/* implicit */_Bool) 63)) ? (18446743798831644672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) : (((arr_10 [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))))));
            var_27 = ((/* implicit */unsigned short) var_17);
            arr_20 [i_4] = ((/* implicit */unsigned int) var_0);
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (unsigned short i_8 = 4; i_8 < 16; i_8 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) 9845395439286804231ULL);
                        arr_30 [i_4] [15ULL] [i_6] [2ULL] [i_4] = ((/* implicit */unsigned long long int) -8566122151893255225LL);
                        var_29 += ((/* implicit */unsigned char) ((signed char) var_6));
                    }
                } 
            } 
        } 
        var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) var_0))))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        var_31 = ((/* implicit */unsigned long long int) var_5);
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_15 [(unsigned short)12])) : (var_1)))) ? (var_17) : ((~(var_1)))));
    }
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        var_33 ^= ((/* implicit */unsigned char) (~(min((arr_33 [i_10] [i_10]), (((((/* implicit */_Bool) 8980829265523227498ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_33 [i_10] [i_10])))))));
        arr_35 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((unsigned int) (~(arr_33 [i_10] [12ULL]))))) : (min(((~(8180918225004556310ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16457782993696353867ULL)) ? (((/* implicit */long long int) var_3)) : (arr_33 [i_10] [i_10]))))))));
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 536870912U)) ? (((/* implicit */int) (unsigned char)95)) : (75110454)));
    }
    var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
}
