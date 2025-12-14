/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219699
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_3)) : (((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) (signed char)31))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2694093207U)) ? (((/* implicit */int) (short)-17048)) : (((/* implicit */int) (unsigned short)65535))))) <= (((((/* implicit */_Bool) var_12)) ? (var_0) : (arr_1 [i_0] [7LL])))))) ^ (((((((/* implicit */int) (short)-17048)) | (-339553021))) % (((/* implicit */int) max((arr_0 [i_0]), ((unsigned char)215))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))) ^ (9223372036854775807LL)));
            arr_6 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)41840))));
            var_14 = arr_1 [i_0] [i_0];
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [(short)0] [i_4] [i_4] = ((/* implicit */signed char) ((9223372036854775798LL) & (((/* implicit */long long int) var_7))));
                    var_15 = ((/* implicit */int) ((unsigned short) arr_14 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]));
                }
            } 
        } 
        arr_16 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)17048)) : (((/* implicit */int) arr_12 [i_2] [(signed char)2] [i_2])))) | (((/* implicit */int) arr_9 [i_2 - 1]))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2 - 2])) ^ (var_4))))));
        var_17 = ((_Bool) ((((/* implicit */_Bool) var_4)) ? (339553004) : (((/* implicit */int) var_6))));
    }
    for (int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            arr_22 [(_Bool)1] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_5])), (min((((/* implicit */int) arr_11 [i_5 - 2] [i_5] [i_5 - 1])), (((((/* implicit */int) (signed char)-3)) % (((/* implicit */int) (_Bool)1))))))));
            arr_23 [(unsigned char)8] [i_6] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) -1768023784)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5 - 2] [i_5 + 1] [i_5 - 1]))) : (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)17048)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((((/* implicit */int) arr_11 [i_6] [i_5] [i_5])) ^ (1501857677))))))));
        }
        arr_24 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((((((/* implicit */_Bool) (short)-17048)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_5])))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55910))) <= (3649815748521181586LL)))))) : (((/* implicit */int) ((((17591917608960LL) ^ (var_12))) <= (((/* implicit */long long int) 339553015)))))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        arr_28 [i_7] = ((/* implicit */_Bool) max((((((/* implicit */long long int) var_4)) / (arr_25 [i_7]))), (((/* implicit */long long int) (-2147483647 - 1)))));
        var_18 ^= ((/* implicit */unsigned short) min((max((var_11), (((/* implicit */int) arr_27 [i_7])))), (((((/* implicit */int) ((_Bool) arr_25 [i_7]))) | (((((/* implicit */int) (unsigned short)65510)) >> (((((-9223372036854775803LL) - (-9223372036854775794LL))) + (31LL)))))))));
        arr_29 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_27 [i_7])), (var_10)))) ? (((((/* implicit */_Bool) (short)17048)) ? (2646745476U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_7]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25032)) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) var_1)))))));
        arr_30 [i_7] = ((/* implicit */unsigned short) arr_26 [i_7] [i_7]);
        arr_31 [i_7] = (~(0));
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        arr_34 [i_8] [i_8] = ((/* implicit */signed char) var_6);
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned char) arr_32 [i_8] [i_8]);
    }
    for (short i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_1))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9]))) <= (18446744073709551612ULL))))))), (((/* implicit */long long int) (-(((/* implicit */int) max((var_5), (var_6)))))))));
        arr_38 [i_9] [i_9] = ((/* implicit */signed char) min((min((2147483647), (((/* implicit */int) arr_36 [i_9])))), (max((var_4), (1768023801)))));
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)16019)) ^ (((((/* implicit */int) (unsigned char)74)) >> (((/* implicit */int) (_Bool)0))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 23; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                {
                    arr_46 [i_11] [i_11] [i_11 + 2] = ((/* implicit */int) (_Bool)1);
                    arr_47 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)55910), ((unsigned short)27141)))) % (((-1768023784) ^ (((/* implicit */int) (signed char)7))))));
                    arr_48 [i_11] [i_11 - 1] [i_11] = ((/* implicit */int) max(((short)-17048), (((/* implicit */short) (_Bool)0))));
                    var_20 = ((/* implicit */long long int) arr_44 [i_11] [i_11] [i_11]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 1; i_14 < 24; i_14 += 3) 
            {
                {
                    arr_54 [i_13] [i_14] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_49 [i_10] [i_13] [i_14])) <= (((/* implicit */int) arr_49 [i_10] [i_13] [i_14]))))) % (((/* implicit */int) ((((/* implicit */int) (signed char)-119)) <= (((/* implicit */int) arr_49 [i_10] [i_10] [i_10])))))));
                    arr_55 [i_14] = ((/* implicit */short) max((((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_39 [i_10])), (7851899338629417225LL))) <= (((/* implicit */long long int) ((var_4) | (((/* implicit */int) (unsigned short)55931)))))))), (((unsigned int) 1077228982U))));
                    arr_56 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -970696015)) ? (((/* implicit */int) (signed char)105)) : (-1785333612))), (1913769494)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_9)) ? (2024560455) : (((/* implicit */int) max(((unsigned short)1983), (var_5))))))));
                    arr_57 [i_14] [6U] [6U] [i_10] &= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_53 [i_10]))))), (var_10))) | (((/* implicit */unsigned int) max((-1160266710), (((/* implicit */int) (unsigned short)28172)))))));
                }
            } 
        } 
        arr_58 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_40 [i_10])), (((3663093143U) & (229301872U)))))) ? (((((/* implicit */_Bool) -2024560455)) ? (-4604427231523653583LL) : (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) 2727233325U))));
    }
}
