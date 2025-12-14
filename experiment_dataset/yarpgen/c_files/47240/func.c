/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47240
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (signed char)43)) - (43)))))) ? (4503049871556608LL) : (-8602959503043020923LL)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_19 *= ((((/* implicit */_Bool) (~(var_14)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (short)14199)) : (((/* implicit */int) (_Bool)1))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned long long int) (+(var_1)))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(9223372036854775792LL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((var_13) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-54))))))))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_22 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)129))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_23 *= ((/* implicit */long long int) (((+(var_18))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                arr_20 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) var_10)));
            }
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                var_24 ^= ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_18))) << (((((/* implicit */int) var_2)) - (33037)))))));
                var_25 = ((/* implicit */int) max((var_25), (max(((~(((/* implicit */int) ((var_18) < (((/* implicit */unsigned long long int) var_13))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))))));
                var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))) && (((((/* implicit */int) min((var_8), (var_15)))) == (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_26 [i_0] [i_7] [i_4] |= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */int) var_3))))) * (((long long int) var_6)))) == (((/* implicit */long long int) ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_3))))))));
                var_27 *= ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_4)))))), (min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_9))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 4; i_8 < 12; i_8 += 3) 
                {
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) (unsigned short)2032))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_29 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_12) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                        arr_31 [(_Bool)1] [i_4] [i_7] [i_8] [(_Bool)1] [i_0] [i_9] = ((/* implicit */long long int) (~((~(((/* implicit */int) (short)-8201))))));
                        var_30 = ((/* implicit */signed char) ((long long int) var_4));
                        var_31 = ((short) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_0))));
                    }
                }
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_16))))), ((+(((/* implicit */int) var_3))))))))))));
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((unsigned long long int) var_10)) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_10))))))))));
        /* LoopSeq 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_34 = ((/* implicit */int) (~(var_11)));
            var_35 *= ((/* implicit */unsigned long long int) (((+(var_11))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
        }
        for (short i_12 = 1; i_12 < 13; i_12 += 1) 
        {
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))));
            var_37 += ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (signed char)-17))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) < (var_11))))));
        }
        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (-(var_12))))));
            var_39 *= ((/* implicit */_Bool) ((short) var_11));
        }
    }
    var_40 = (+(var_1));
    var_41 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
}
