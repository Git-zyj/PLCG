/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245963
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
        var_20 += ((/* implicit */short) min(((-(arr_1 [i_0]))), (arr_1 [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((int) (_Bool)1))) | (((arr_1 [i_0]) >> (((((/* implicit */int) var_17)) - (12164))))))) | (((/* implicit */long long int) ((((((/* implicit */int) (short)-17152)) + (2147483647))) << ((((((_Bool)1) ? (var_4) : (((/* implicit */long long int) var_5)))) - (7354650503225876357LL))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11474497214593276527ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17152))) : (3763749812U)))) ? (((((/* implicit */_Bool) max(((short)-17152), (((/* implicit */short) (unsigned char)78))))) ? (((/* implicit */int) ((var_19) < (((/* implicit */int) var_3))))) : (((/* implicit */int) var_3)))) : (min((min((var_12), (-17667828))), (((/* implicit */int) var_2))))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((int) max((((var_4) >> (((((/* implicit */int) (unsigned char)175)) - (150))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17170)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (short)-17163))))))));
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_14);
            arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_2 - 1] [i_2])) + (max((-176055781), (min((((/* implicit */int) (short)-17152)), (1902396496)))))));
            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_1 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) && (((/* implicit */_Bool) arr_3 [i_1 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73)))))))));
        }
        for (int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_1 + 1] [i_1 + 1])), (arr_8 [i_1] [i_1 + 1] [i_3 - 1])))) + (((((/* implicit */int) var_16)) | (((/* implicit */int) arr_8 [2ULL] [i_1 + 1] [i_3 - 1]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_20 [i_3] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_3])))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((short) -3468206985396149516LL)))));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
        {
            arr_24 [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)127)) | (((((/* implicit */int) (unsigned char)175)) << (((-7459955133925890301LL) + (7459955133925890307LL))))))) * (((/* implicit */int) (_Bool)1))));
            var_24 -= ((/* implicit */unsigned int) 123256157);
            arr_25 [i_5] = ((/* implicit */short) ((((_Bool) 3763749803U)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) var_1)) + (46)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_1])), ((unsigned char)83))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_21 [i_1] [i_5] [i_1 + 1]))))) && ((!(((/* implicit */_Bool) (unsigned char)179)))))))));
            var_25 = ((/* implicit */_Bool) (signed char)-2);
        }
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    {
                        arr_33 [9] [i_6] [i_6] [i_6] [(_Bool)1] [i_6] = ((/* implicit */long long int) arr_28 [i_1] [i_1]);
                        arr_34 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14570513352798068836ULL)) ? (2860997843028447926LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119)))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((long long int) ((arr_19 [i_1 + 1] [8U]) << (((((/* implicit */int) (signed char)42)) - (41)))))))));
                        var_27 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [2U]))) + (arr_19 [i_1 + 1] [2LL]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                        arr_35 [(unsigned short)10] = ((/* implicit */long long int) arr_14 [18ULL] [i_6]);
                    }
                } 
            } 
            arr_36 [i_1] [i_6] = arr_31 [i_1 + 1] [i_6] [i_6] [i_1];
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 2; i_10 < 21; i_10 += 3) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5246901134001435429ULL)) ? (arr_37 [22U] [i_1 + 1] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)17123))))));
                    arr_41 [16] [16] [(signed char)16] [16] [i_1] |= ((/* implicit */short) ((((unsigned long long int) min((((/* implicit */unsigned int) var_0)), (arr_26 [i_1])))) + (((/* implicit */unsigned long long int) arr_37 [i_10] [i_1 + 1] [i_10 + 2]))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) var_6)))))))) * (((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_9)))) : (max((-2536888112444134711LL), (((/* implicit */long long int) var_18)))))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    arr_46 [i_9] [i_9] [6LL] [i_9] = ((/* implicit */int) ((((/* implicit */int) (signed char)-62)) == (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1 + 1]))));
                    var_30 = ((/* implicit */signed char) ((((unsigned int) (_Bool)1)) << (((/* implicit */int) arr_42 [i_9]))));
                }
                var_31 |= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned char)179))) & ((~(((((/* implicit */int) (unsigned char)72)) >> (((arr_29 [i_1 + 1]) + (376130815)))))))));
                arr_47 [i_9] [i_9] [i_9] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(29360128U)))), (4628595928686607645LL)))) ? (((((/* implicit */int) (unsigned char)170)) >> (((((1136541387) << (((var_4) - (7354650503225876357LL))))) - (1136541357))))) : ((((~(((/* implicit */int) var_1)))) >> (((((((/* implicit */_Bool) arr_21 [i_1] [i_6] [i_1])) ? (((/* implicit */int) (short)-17123)) : (arr_45 [i_9]))) + (17128)))))));
            }
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    {
                        var_32 &= ((/* implicit */int) (unsigned char)53);
                        var_33 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_12])), (min((var_7), (((/* implicit */unsigned int) var_16))))))));
                        var_34 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)58296)) ? (((/* implicit */int) (short)29931)) : (((/* implicit */int) (unsigned char)64)))) == (((((/* implicit */int) (unsigned char)200)) % (1653791989)))))) < ((+((~(((/* implicit */int) (unsigned short)7236))))))));
                        arr_52 [2U] [i_6] [i_12] [i_13] [(short)20] [i_12] = ((/* implicit */_Bool) ((short) ((((-2536888112444134706LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_1 + 1] [i_12])))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 1) 
    {
        arr_56 [i_14] [i_14] = ((((/* implicit */int) (signed char)86)) >> (((1518273951) - (1518273947))));
        var_35 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_2))))))) + (min((((/* implicit */long long int) var_6)), (var_4)))));
    }
    var_36 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)53)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (max((var_7), (((/* implicit */unsigned int) var_15))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -206478038)) ? (-1653792001) : (318201786)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (var_18))) : (((/* implicit */int) var_6))))));
    var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)72)) - (((/* implicit */int) (unsigned char)53))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)511)) - (507))))))))));
}
