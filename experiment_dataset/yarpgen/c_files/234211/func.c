/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234211
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 6; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (((-(arr_10 [i_0 - 4] [i_0 + 3] [i_1] [i_2] [i_2] [i_3]))) < (((/* implicit */long long int) (+(arr_9 [i_0] [i_1] [i_1] [i_3]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_0 - 4] [i_3] [i_1] [i_4] = (~(((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 1] [i_2])));
                            var_20 *= ((/* implicit */unsigned int) ((arr_12 [i_2]) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                        }
                        var_21 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_1)))));
                        var_22 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) 5712449650148881468LL)) ? (((/* implicit */int) (_Bool)0)) : (-564905606)))))), (min((((/* implicit */long long int) var_12)), (min((((/* implicit */long long int) var_2)), (var_8)))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (arr_1 [(unsigned short)0] [(unsigned short)0])));
        arr_16 [i_0] = (((+(((/* implicit */int) var_12)))) >> ((((+(((/* implicit */int) max(((unsigned short)51888), (((/* implicit */unsigned short) arr_3 [i_0 - 4]))))))) - (51884))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (min((((((/* implicit */int) (unsigned short)13648)) + (((/* implicit */int) (short)-32760)))), (((/* implicit */int) arr_24 [i_5 - 1])))) : ((-(((/* implicit */int) (unsigned char)51))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(((/* implicit */int) var_7)))))));
                }
            } 
        } 
        var_27 *= ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)21660)))) || ((!(((((/* implicit */_Bool) (unsigned char)240)) || (((/* implicit */_Bool) (unsigned short)13663))))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        var_28 |= ((_Bool) (short)31284);
        /* LoopSeq 3 */
        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_29 = ((/* implicit */unsigned int) (-(789317735)));
            var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)113))));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */int) (short)-15)) > (0))))));
        }
        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26963)) - (((/* implicit */int) (short)-21471)))))));
            var_33 = ((/* implicit */int) min((var_33), ((-((+(((/* implicit */int) (unsigned char)49))))))));
        }
        for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            arr_35 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_8] [i_11]))))) ? (arr_30 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3))))));
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (unsigned short)38572))));
        }
        arr_36 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) (signed char)22))));
        var_35 = ((/* implicit */int) 4717996248751792153ULL);
        arr_37 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 3230432727U))) ? ((+(arr_22 [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned int) ((int) arr_28 [i_8] [i_8])))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 2) 
    {
        arr_42 [i_12 + 4] [i_12 - 2] |= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_12 - 2] [i_12 + 2] [i_12 + 3])) ? (((/* implicit */unsigned long long int) arr_20 [i_12])) : (var_3))) % (((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_12 + 3])) : (((/* implicit */int) ((_Bool) var_14))))) : ((-(((/* implicit */int) arr_21 [i_12 + 4] [i_12 - 1] [i_12 + 1])))));
        var_36 *= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) min((arr_24 [i_12 + 3]), (((/* implicit */unsigned char) arr_18 [i_12 + 1])))))))));
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)88)))))));
        /* LoopNest 2 */
        for (short i_13 = 2; i_13 < 14; i_13 += 1) 
        {
            for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1003677535), (((/* implicit */int) (unsigned char)56))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12 + 2] [i_12 + 3] [i_13 + 1]))) : (arr_40 [i_12 + 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_24 [i_12 + 2])) ? (arr_22 [i_12 + 4] [i_12] [i_13 - 2] [i_14]) : (var_18))))))));
                    arr_48 [i_12 + 3] [i_13 - 1] [i_14] = ((/* implicit */long long int) max((arr_39 [i_13 + 1]), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)232))))) ? (min((var_3), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_12 + 1])) ? (((/* implicit */int) arr_21 [i_12 + 4] [i_12 + 3] [i_12 + 3])) : (((/* implicit */int) arr_44 [i_13 - 1] [i_14])))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)52691))))) ? (((/* implicit */unsigned long long int) arr_43 [i_12 - 1] [i_12 + 3] [i_12 - 1])) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1003677517))))))) ? (((unsigned long long int) (short)-8403)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1904156491)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) == (9488009048186474678ULL))))))))));
    }
}
