/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231722
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)154)) ? (958130859) : (((/* implicit */int) var_4)))) * (((/* implicit */int) var_13)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -958130877)) ? (((/* implicit */int) var_8)) : (-1046537533))))));
                arr_8 [(unsigned char)15] [(unsigned char)15] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)202))));
            }
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 4; i_4 < 17; i_4 += 1) 
                {
                    var_19 += ((/* implicit */unsigned char) ((arr_1 [i_0 + 1] [i_0 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11))))));
                    var_20 = ((/* implicit */unsigned int) ((-5000850702932023694LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_11))))))));
                    var_21 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)41616))));
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned char)223))));
                    var_24 = ((/* implicit */_Bool) (signed char)-17);
                }
                var_25 += ((/* implicit */unsigned long long int) arr_2 [18U] [i_1]);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_22 [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_7] [i_0 + 1] = ((((var_14) ? (((/* implicit */int) (unsigned short)53486)) : (((/* implicit */int) var_13)))) >= (((/* implicit */int) (_Bool)1)));
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_11 [i_0 + 1] [i_1] [i_0 + 1] [(_Bool)1])))) ? (((/* implicit */int) ((var_2) && (var_14)))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 4) 
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12486766873814352726ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_0)) ? (-9223372036854775787LL) : (((/* implicit */long long int) 1997289802))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) (short)-32755))) + (((long long int) 224468394U))));
                            arr_32 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            }
            arr_33 [i_0 + 1] [i_0 + 1] &= (((-(((/* implicit */int) (short)24828)))) | (((/* implicit */int) (_Bool)1)));
            var_29 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) % (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_6)))))));
            arr_34 [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_0 + 1] [i_0 + 1] [i_1] [6ULL]);
        }
        for (int i_11 = 2; i_11 < 20; i_11 += 3) 
        {
            var_30 = ((/* implicit */short) ((int) (short)-20646));
            var_31 += ((/* implicit */signed char) ((((/* implicit */int) var_4)) >> (((/* implicit */int) var_1))));
            var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0 + 1])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_31 [i_11 - 2] [i_11 + 1] [i_11 - 1] [(unsigned short)18] [i_11 - 2]))));
            var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)54473))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2111997933587297469ULL)));
        }
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            var_34 &= ((/* implicit */signed char) ((((_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_12])) && (((/* implicit */_Bool) (signed char)-33)))))) : (var_9)));
            arr_42 [i_0] &= ((/* implicit */unsigned long long int) ((_Bool) (~(var_12))));
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 3; i_13 < 12; i_13 += 4) 
    {
        arr_47 [i_13 - 1] = ((/* implicit */unsigned int) arr_21 [i_13 - 1] [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13]);
        var_35 += ((/* implicit */unsigned char) (~(5325304512893089182ULL)));
    }
    var_36 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_10)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ ((((_Bool)1) ? (((/* implicit */unsigned int) 958130851)) : (62241953U))))) % (((unsigned int) var_16))));
    var_37 += max(((((~(((/* implicit */int) var_0)))) - (((((/* implicit */_Bool) (short)-16454)) ? (((/* implicit */int) var_8)) : (1284751762))))), (((/* implicit */int) ((((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned char)170)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) : (var_5))))))));
    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2303504214776379344ULL)) ? (-8969118616133328773LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))));
    var_39 |= ((/* implicit */signed char) 18446744073709551613ULL);
}
