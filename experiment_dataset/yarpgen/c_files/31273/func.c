/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31273
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (~(min(((~(var_3))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (141))))))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(var_9)))))) ? (var_8) : ((-(4947742936767545388ULL)))));
                var_21 = ((/* implicit */int) (+(13499001136942006207ULL)));
            }
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_22 &= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3] [i_3]))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (10ULL)));
                var_24 = ((/* implicit */int) (+(2042706456400552308LL)));
                var_25 = ((/* implicit */unsigned char) (_Bool)1);
            }
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967295U)) - (3415853787450702201ULL)))) ? (((18446744073709551606ULL) + (((/* implicit */unsigned long long int) -512431480)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 2147483647))))))))));
            var_27 = ((/* implicit */_Bool) 13499001136942006228ULL);
            arr_11 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 + 1])), (arr_4 [i_0 + 1] [i_0 - 2])))), (((int) arr_10 [i_0 + 1]))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_4 - 1] [i_4 - 1] [i_4 + 1])) <= (((/* implicit */int) (short)16256))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)3)) ? ((~(var_2))) : (((/* implicit */int) (unsigned short)65532))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_29 = (-(15485485395907697820ULL));
                    arr_20 [i_0] [i_0] [i_5] [i_5] = (+(512431501));
                    arr_21 [i_0] [i_4 - 1] [i_0] = ((/* implicit */int) (+(var_5)));
                    var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_0 + 2] [(unsigned short)1]))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_8 [i_0])));
                }
                for (signed char i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_4] [i_7 + 2] [i_7])) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_4 + 1] [i_5] [i_7 + 2])) : ((-(((/* implicit */int) var_7))))));
                    var_33 *= ((/* implicit */unsigned char) arr_3 [i_7]);
                }
                var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))));
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 11; i_8 += 3) 
                {
                    var_35 = ((/* implicit */short) (unsigned char)255);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_36 ^= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_4]);
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_14))))))));
                        arr_32 [i_0] [i_0] [i_5] [i_8] [i_0] = ((/* implicit */int) ((unsigned int) arr_5 [i_0] [i_4 + 2] [i_4 - 1]));
                    }
                    for (signed char i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        var_38 += ((arr_13 [i_8 - 1] [i_4 - 1]) >= (arr_13 [i_8 + 3] [i_4 + 1]));
                        var_39 ^= ((/* implicit */unsigned char) 512431501);
                        var_40 = ((/* implicit */short) ((var_2) <= (((/* implicit */int) (!(((/* implicit */_Bool) 54522975043518542LL)))))));
                        var_41 = ((/* implicit */int) (+(13306303795120499664ULL)));
                        arr_35 [i_10 - 1] [i_4] [i_0] [(unsigned short)6] [i_10] [i_4] [i_0 - 1] = ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)99)))) + (2147483647))) >> (((((/* implicit */int) ((short) arr_9 [i_0] [i_4 + 2] [i_4 + 2] [i_8 + 3]))) - (91))));
                    }
                }
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    var_42 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
                    var_43 = ((((/* implicit */int) (unsigned char)207)) ^ (((/* implicit */int) arr_38 [i_0 - 2] [i_11 + 2] [i_0 - 2] [8] [i_0])));
                }
            }
        }
        for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 3) /* same iter space */
        {
            var_44 = ((unsigned char) min((((/* implicit */int) (short)18)), (var_2)));
            var_45 = ((/* implicit */unsigned long long int) var_18);
            arr_42 [i_0] [i_12] = ((/* implicit */unsigned char) min((512431478), (((/* implicit */int) arr_27 [i_12 + 1] [(unsigned char)11]))));
        }
        for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 3) /* same iter space */
        {
            var_46 -= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)234)))), (((((/* implicit */_Bool) 512431480)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -455781790)) > (var_9)))) : (((/* implicit */int) arr_38 [i_0] [i_13] [i_13] [(unsigned short)10] [(unsigned char)0]))))));
            var_47 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0 + 2]);
            var_48 = ((/* implicit */unsigned char) ((var_14) >= (arr_16 [i_13 + 2] [i_0])));
            var_49 = ((/* implicit */unsigned int) ((var_18) ^ (max((455781790), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_43 [i_0 + 1]))))))));
        }
    }
    var_50 = ((/* implicit */short) var_3);
}
