/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236813
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */short) (_Bool)1);
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 3771898586U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1777868457)))))) : (var_2))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_5)) : (0ULL))))))))))));
        var_13 = ((/* implicit */signed char) min(((~(min((((/* implicit */unsigned long long int) 3771898563U)), (4924186217420464088ULL))))), (((unsigned long long int) var_6))));
        arr_2 [i_0] = min((3771898605U), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_1 [17U] [i_0])) : (3771898586U))) : (arr_0 [i_0]))));
        var_14 = min((((/* implicit */int) (!(((/* implicit */_Bool) 17770581215013474368ULL))))), ((-(arr_1 [i_0 - 3] [i_0 + 2]))));
    }
    for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1 - 3] = ((/* implicit */long long int) 2518275044U);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_15 = (~(((/* implicit */int) min((((/* implicit */short) arr_4 [7LL])), (var_1)))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_16 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_4 [i_1 - 1]))))));
                arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3771898586U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -9223372036854775799LL)))))))) ? (((/* implicit */int) min(((unsigned short)55391), (((/* implicit */unsigned short) (signed char)17))))) : (((/* implicit */int) arr_11 [(unsigned char)6] [(unsigned char)11] [(unsigned char)6]))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_2] [13])) ? (min((var_9), (((/* implicit */unsigned long long int) -4861031048997226025LL)))) : ((+(min((12775902546603668742ULL), (((/* implicit */unsigned long long int) (signed char)-17))))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_18 = ((((/* implicit */int) arr_3 [i_1 - 1])) & (((/* implicit */int) (short)-32749)));
            var_19 += ((/* implicit */_Bool) (~(4095)));
            var_20 = ((/* implicit */unsigned long long int) (+((-(-1882328505)))));
        }
        /* vectorizable */
        for (signed char i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            arr_19 [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_5 + 2] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32740))) : (9223372036854775799LL)));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                arr_24 [i_6] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)127)) && (((/* implicit */_Bool) (signed char)-18))))) : (((/* implicit */int) ((short) (short)-32749)))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_1 - 3] [i_5] [i_5 - 1])) >> (((((/* implicit */int) (short)32737)) - (32720)))));
                var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_6]))));
                arr_25 [i_6] [12LL] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (0ULL)));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    arr_29 [i_1 - 2] [i_5] [i_5] [i_6] [(signed char)17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? ((-(((/* implicit */int) arr_15 [i_1] [i_5] [i_5])))) : (((/* implicit */int) arr_22 [i_6]))));
                    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_1 - 3]))));
                    arr_30 [i_1] [i_5] [i_7] [i_6] &= ((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1]);
                    arr_31 [i_5] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)28))))));
                    arr_32 [i_1] [i_1] [i_5] [i_1 + 1] = ((/* implicit */short) arr_16 [i_5] [i_5]);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_36 [16ULL] [16ULL] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (((long long int) 4095))));
                    arr_37 [(unsigned short)5] [i_6] [i_6] [i_5] [i_6] = (-(arr_20 [i_1 - 3] [i_5 - 2] [0] [i_5 - 2]));
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        var_24 *= ((/* implicit */unsigned char) (short)1324);
                        var_25 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_35 [i_1 + 1] [i_5 - 2]))));
                    }
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        arr_43 [14LL] [i_5 - 2] [i_5] [14LL] [i_10] [i_1] [i_5] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) + (var_5))));
                        arr_44 [i_5] [i_10] = ((/* implicit */unsigned short) var_9);
                        arr_45 [i_1 - 1] [i_5] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (short)26823);
                        var_26 *= ((/* implicit */unsigned int) ((unsigned long long int) 18446744073709551614ULL));
                        var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)16384)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_8] [i_8] [i_8] [i_8] [i_1] [i_8] [i_5])))))));
                    }
                    for (int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((arr_13 [i_11]) + (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1 - 3] [i_1]))))) - (((/* implicit */long long int) ((int) arr_27 [i_1 + 2] [14ULL] [i_6] [i_8] [i_11] [i_11]))))))));
                        var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_5 - 1]))));
                        arr_49 [i_1] [i_5] [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3771898572U)))) ? (((((/* implicit */_Bool) 1848815831U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32740))) : (9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-21)))))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        arr_54 [i_1] [i_5] [i_6] [i_8] = (-9223372036854775807LL - 1LL);
                        arr_55 [i_5] [(_Bool)1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)140))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_1 + 1] [i_1 + 1] [i_6] [i_8] [(unsigned char)9] [(unsigned char)9]))))))))));
                    }
                    var_31 = ((/* implicit */unsigned char) 0ULL);
                }
            }
        }
    }
    var_32 = ((/* implicit */long long int) var_4);
}
