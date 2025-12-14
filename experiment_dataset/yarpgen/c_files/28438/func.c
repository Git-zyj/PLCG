/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28438
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_14 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)51579))))))))) * (((10451446687055414479ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_0])))))));
                var_15 = (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54489))) : (arr_4 [i_2] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (10451446687055414479ULL) : (7995297386654137136ULL))))));
                arr_8 [i_1] = ((/* implicit */_Bool) 10451446687055414504ULL);
            }
            /* vectorizable */
            for (short i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(var_12))))));
                var_17 = ((/* implicit */unsigned char) ((arr_6 [i_3 + 1] [i_1] [i_0]) <= (((arr_9 [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1])))))));
            }
            /* LoopNest 3 */
            for (short i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) arr_0 [i_4 + 4]))))), (min((7995297386654137136ULL), (((/* implicit */unsigned long long int) arr_0 [i_4 + 3]))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -499457381)) ? (499457386) : (((/* implicit */int) var_10))))), ((-(var_1)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12245))))) ? (min((((/* implicit */int) (short)-12231)), (-80464905))) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (short)1189))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5] [i_6])))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (signed char)73))))) ? ((+(((/* implicit */int) (unsigned short)44831)))) : (((((/* implicit */_Bool) (short)-12270)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_3))))))) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 10451446687055414479ULL)) ? (((/* implicit */int) (short)1185)) : (-499457377)))), (((((/* implicit */_Bool) (unsigned short)3374)) ? (4462775577216454394LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40007))))))))));
                            var_21 = ((/* implicit */unsigned short) ((-4462775577216454397LL) + (max((((/* implicit */long long int) var_7)), (min((-4462775577216454383LL), (4462775577216454394LL)))))));
                            var_22 = ((/* implicit */signed char) arr_4 [i_0] [i_5] [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (short)1185)) : (((/* implicit */int) (unsigned char)237))))))))));
                arr_21 [i_1] [i_1] [15] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_20 [(unsigned char)14] [i_1] [(unsigned short)20])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [(signed char)11] [(signed char)11] [i_7] [i_7]))))));
                var_24 = ((/* implicit */_Bool) (-(arr_4 [i_0] [i_1] [i_7])));
            }
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 499457374)) ? (((/* implicit */int) (unsigned short)50645)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] [i_0])) ? (var_12) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_9)) - (27865)))))));
            var_26 = ((/* implicit */short) var_0);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))) <= (7995297386654137145ULL)))) : (((((/* implicit */int) (short)1185)) | (((/* implicit */int) (short)1185))))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 1])))))));
        }
        for (unsigned short i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)3374)) : (((/* implicit */int) arr_1 [i_9 + 1]))))) ? (2773664030818161033LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)128)), (arr_12 [i_9] [i_10] [i_11] [i_12])))) ? (((((/* implicit */int) arr_31 [i_0] [i_0] [(unsigned short)23] [i_0])) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_30 [i_9 - 1] [i_9 + 1] [i_9 + 2] [i_9 + 1])))))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */short) arr_26 [i_0] [i_0] [i_9]);
            /* LoopSeq 1 */
            for (unsigned char i_13 = 1; i_13 < 23; i_13 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)65535)))))))));
                var_33 = ((/* implicit */short) var_2);
            }
        }
        /* vectorizable */
        for (long long int i_14 = 1; i_14 < 21; i_14 += 1) 
        {
            var_34 = ((/* implicit */_Bool) var_9);
            var_35 = ((/* implicit */_Bool) var_12);
            var_36 += ((/* implicit */unsigned short) (((~(10451446687055414463ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_14] [i_14])))));
            /* LoopSeq 3 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16384)) >> (((-499457383) + (499457397)))));
                var_38 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)16369)) / (((/* implicit */int) arr_29 [i_0] [i_15]))))));
                var_39 = ((/* implicit */_Bool) arr_34 [(_Bool)1] [i_14] [i_14] [i_14] [i_0]);
            }
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_17 = 3; i_17 < 23; i_17 += 1) 
                {
                    arr_49 [(signed char)18] [19ULL] [i_16] [i_17] = ((/* implicit */_Bool) arr_26 [i_14 + 2] [i_14 - 1] [i_17 - 3]);
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)44746)) / (499457374)));
                }
                var_41 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0] [i_0])) >= (((/* implicit */int) var_0))));
                var_42 = ((/* implicit */int) (((+(((/* implicit */int) (short)1181)))) < ((~(((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_43 = ((/* implicit */_Bool) var_11);
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 1) 
                {
                    for (unsigned short i_20 = 1; i_20 < 22; i_20 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 10451446687055414469ULL)))) ? (((/* implicit */int) arr_19 [i_0] [i_14] [i_19] [i_20])) : (499457374)));
                            arr_57 [i_0] [i_14] [i_18] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0]))) : (arr_11 [i_14] [i_14] [i_19])))) ? (((arr_24 [i_18]) - (1911558499))) : (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
            arr_58 [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_14])) ? (((/* implicit */unsigned long long int) var_12)) : (var_1)))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)1181)))) : (((((/* implicit */_Bool) (unsigned short)34233)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)229))))));
        }
        var_45 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (9113639084418222951LL)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)0])) ? (((/* implicit */int) var_9)) : (-1390570726)))))) : (max((4462775577216454394LL), (((/* implicit */long long int) max(((unsigned short)62162), (((/* implicit */unsigned short) (short)16360)))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_21 = 1; i_21 < 7; i_21 += 3) 
    {
        for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            {
                var_46 = ((/* implicit */unsigned char) var_9);
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_6)) - (5156)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((~(var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_36 [15LL] [i_22] [15LL])) ? (10451446687055414463ULL) : (((/* implicit */unsigned long long int) -499457373))))))))))));
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) << (((/* implicit */int) var_5))));
    var_49 = ((/* implicit */unsigned char) var_6);
}
