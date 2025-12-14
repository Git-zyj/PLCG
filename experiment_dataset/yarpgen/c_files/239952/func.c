/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239952
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
    var_19 = ((/* implicit */int) ((short) (unsigned char)219));
    var_20 = ((/* implicit */short) min((((/* implicit */int) var_17)), ((+(((/* implicit */int) (unsigned char)255))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */signed char) var_3);
                        arr_12 [3LL] [i_1] [i_2 + 2] [3LL] [i_3] = ((/* implicit */short) (unsigned short)59047);
                        arr_13 [i_3] [12ULL] [i_1 + 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((var_7) + (7869277118216595362LL))) - (14LL)))))) ? (((((/* implicit */_Bool) (unsigned short)6494)) ? (1023U) : (((/* implicit */unsigned int) var_18)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            arr_17 [i_4] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)59047)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)15))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((/* implicit */int) (unsigned char)241))));
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) arr_16 [i_0] [i_4 + 2] [i_5]);
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    arr_24 [i_0] [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) var_17);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((short) (-(var_0)))))));
                        arr_28 [i_0] [i_4 + 1] [0U] = ((/* implicit */_Bool) -4394018098576328052LL);
                    }
                    for (int i_8 = 3; i_8 < 14; i_8 += 3) 
                    {
                        arr_33 [5] [i_4 - 1] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) (short)26131);
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)30))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13663))) : (-7060844674972353983LL))))));
                        arr_34 [i_0] [i_8] [i_8 + 1] = ((/* implicit */_Bool) (unsigned char)14);
                        var_26 = var_9;
                        var_27 = arr_31 [i_0] [i_8] [i_5 + 1] [8LL] [8LL];
                    }
                }
            }
            for (short i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
            {
                arr_38 [i_0] [i_0] [i_0] [(unsigned short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((((/* implicit */_Bool) (unsigned short)35117)) ? (arr_15 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_4] [i_4] [i_4 + 1] [i_0] [i_4])))));
                var_28 = ((/* implicit */unsigned long long int) (-(arr_35 [i_0] [(short)8] [i_9] [i_9])));
                arr_39 [(unsigned char)6] |= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */long long int) var_18)) ^ (arr_20 [i_0])))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) var_1)) < (var_16)))))));
                    var_30 = ((/* implicit */unsigned int) ((long long int) arr_31 [i_4] [8LL] [i_4] [i_9] [i_4]));
                    arr_43 [i_0] [i_4 + 1] [i_9] [(short)7] [i_0] = ((((/* implicit */_Bool) var_0)) ? (arr_16 [i_4] [i_10] [i_4 - 1]) : (((/* implicit */long long int) arr_15 [i_9 - 1] [i_4 + 2])));
                }
            }
            var_31 -= ((/* implicit */short) var_9);
        }
        for (short i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            var_32 = (((!(((/* implicit */_Bool) (short)-9914)))) ? ((-(((/* implicit */int) (unsigned char)16)))) : (((/* implicit */int) var_10)));
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                arr_51 [i_0] = ((/* implicit */short) arr_26 [i_12] [(unsigned short)7] [i_12] [i_12] [i_12] [i_12] [i_12]);
                var_33 = ((unsigned char) (unsigned char)248);
                arr_52 [i_0] [i_11] [i_12] = ((/* implicit */long long int) 1168015222);
                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 13; i_13 += 3) 
                {
                    for (int i_14 = 3; i_14 < 13; i_14 += 4) 
                    {
                        {
                            arr_59 [i_14] [i_13] [i_12] [i_0] [i_0] = ((/* implicit */_Bool) ((((2616376304U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) (signed char)-99))));
                            arr_60 [i_0] [i_0] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */long long int) arr_26 [2U] [(_Bool)1] [i_12] [i_13 - 1] [i_12] [i_12] [i_13 - 1]);
                            var_35 = ((/* implicit */unsigned char) ((unsigned short) var_10));
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_16 = 2; i_16 < 12; i_16 += 1) 
                {
                    var_36 = ((((/* implicit */int) (unsigned char)87)) == (((/* implicit */int) ((_Bool) (_Bool)1))));
                    var_37 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) var_1)));
                }
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (2971658830637135996ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    var_39 = ((/* implicit */short) var_7);
                    arr_68 [i_0] [i_0] [i_0] [i_0] [i_15] = var_9;
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((short) var_17)))));
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_0] [i_11] [i_15] [i_15] [i_11])) ? (((/* implicit */int) arr_30 [i_0] [i_11] [i_15] [i_15] [i_17])) : (((/* implicit */int) arr_30 [i_17] [i_15] [i_15] [i_15] [i_0]))));
                    var_42 = ((/* implicit */long long int) max((var_42), (((long long int) arr_27 [i_0] [i_11] [i_15] [i_17] [5U] [i_15] [i_15]))));
                }
                var_43 = ((/* implicit */unsigned int) min((var_43), ((((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_48 [i_0] [i_11] [i_15] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)6566)) == (((/* implicit */int) (unsigned short)65535))))))))));
            }
            var_44 = ((/* implicit */_Bool) ((signed char) 18446744073709551615ULL));
        }
        arr_69 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */int) var_17))));
        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1445566395)) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) (unsigned short)61460)) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)191))))));
    }
    var_46 = ((/* implicit */int) ((short) (_Bool)1));
    var_47 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((var_0) + (2147483647))) << (((((var_18) + (1397022651))) - (17))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32256))))) : (((/* implicit */int) ((unsigned char) var_12)))));
}
