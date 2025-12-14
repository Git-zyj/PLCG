/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26122
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31180))) < (-3610271957960160264LL)))), (2147483647)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1281252451)) ? ((((((~(((/* implicit */int) (unsigned char)93)))) + (2147483647))) << (((((((/* implicit */_Bool) -1281252451)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (-7021510699017801919LL))) - (2LL))))) : (max((((/* implicit */int) var_16)), (((-1281252451) + (((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_14) : (3076617784274152991ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) > (9223372036854775807LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) - (1281252450)))) ? (((((/* implicit */_Bool) (unsigned char)149)) ? (var_13) : (((/* implicit */unsigned long long int) 1718051600)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (217898903) : (((/* implicit */int) var_18))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_0])))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) (unsigned short)19314))))) & (((var_1) >> (((5774876813912902354LL) - (5774876813912902291LL))))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])))))));
                            arr_13 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) -1281252451)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]))) : (arr_5 [i_0] [i_1] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (arr_11 [i_0] [i_1])));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)173)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) + (7989060033811342423ULL))) : (((/* implicit */unsigned long long int) ((2147483631) & (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_5]);
                            arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_11 [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_6] [i_0] [i_2] [i_6] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_3] [i_1] [i_0])) >> (((((/* implicit */int) (unsigned char)176)) - (170)))))));
                            arr_22 [i_6] [i_2] [i_1] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((var_17) ? ((((_Bool)1) ? (1048575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : ((-(10457684039898209193ULL)))));
                        }
                        arr_23 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_0]) ? ((-(arr_6 [i_0] [i_1] [i_1] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))))), (((((/* implicit */_Bool) arr_19 [i_3] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)156))))) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_3])))))))));
                        arr_24 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_2])) + (((/* implicit */int) arr_1 [i_3] [i_2]))))) ? (((((/* implicit */int) var_15)) * (((/* implicit */int) (unsigned char)79)))) : (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_2] [i_1])))) % (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)4095))))))));
                        arr_25 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) < (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) 1281252450)) : (-3251270128054778027LL)))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1860811765465127294ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))) : (min((arr_11 [i_2] [i_0]), (((/* implicit */unsigned long long int) var_15))))))));
                        arr_26 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 7051963008771858368ULL)) ? (((/* implicit */long long int) var_3)) : (-8850552844133069358LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_7))) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (unsigned short)5524)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_0]))) : ((-9223372036854775807LL - 1LL))))));
                    }
                } 
            } 
            arr_27 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (((+(((/* implicit */int) var_4)))) != (((/* implicit */int) min((var_18), (((/* implicit */short) arr_7 [i_0] [i_0])))))))) - ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_0]))))));
        }
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        arr_31 [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? ((~(2142470593U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27523))))), (((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)44)) != (((/* implicit */int) var_4)))))))));
        arr_32 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 48738166588545611LL)) ? (arr_5 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)5543)) >= (((((/* implicit */_Bool) (signed char)-126)) ? (-1281252453) : (-1281252451)))))))));
        arr_33 [i_7] = ((((((/* implicit */_Bool) 1616177450089568752ULL)) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_5 [i_7] [i_7] [i_7] [i_7]))) << ((((-(((/* implicit */int) arr_4 [i_7] [i_7] [i_7])))) + (37128))));
    }
    var_21 = ((/* implicit */long long int) (~(max(((+(2147483647))), (((var_7) % (var_7)))))));
}
