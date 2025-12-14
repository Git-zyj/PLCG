/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22400
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */long long int) (+(arr_0 [(unsigned short)8])));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] [22U] &= ((/* implicit */signed char) 617375516);
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_8)));
        }
        for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_16))));
                            arr_19 [i_0] [i_2 - 3] [i_0] [i_0] = ((/* implicit */short) var_4);
                            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) 5721608071957768910ULL)) && (((/* implicit */_Bool) (unsigned short)49383)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (signed char)-79)))) : ((+(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_2 - 2] [8U])) >= (((/* implicit */int) arr_4 [i_2] [i_3])))))))));
                            arr_20 [i_0] [i_2 - 2] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_13 [(unsigned short)5] [i_0 - 1] [i_2 - 2] [i_2 - 1] [i_0 - 1] [(unsigned short)5])))), (((/* implicit */int) arr_13 [i_5] [i_4] [i_0] [i_0] [i_2] [i_0]))));
                            arr_21 [(unsigned short)2] [(unsigned short)2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)35)), ((unsigned char)255))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(signed char)13])) != (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-78))))));
            arr_22 [i_0] = max((((((/* implicit */_Bool) min(((signed char)78), ((signed char)70)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1333763138U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))))))) : (max((((/* implicit */unsigned int) var_11)), (2158236109U))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))))));
        }
        for (short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            arr_27 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((var_18), (((/* implicit */long long int) var_17))))));
            var_24 = ((/* implicit */unsigned char) arr_7 [i_0 + 2] [i_0] [i_0]);
        }
        for (long long int i_7 = 2; i_7 < 23; i_7 += 2) 
        {
            var_25 = ((((/* implicit */_Bool) 1387465705U)) ? (min((min((arr_15 [i_0] [i_0] [i_0] [i_0]), (var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_0] [i_7] [i_0])) : ((+(((/* implicit */int) (unsigned short)41175))))))));
            arr_30 [i_0] [i_7] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (_Bool)1))))))));
            var_26 ^= ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned int) (unsigned short)56198)), (var_16))));
            var_27 ^= ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_7]);
            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (short)14336))))) != (((/* implicit */int) arr_18 [i_0] [i_7] [i_0] [i_0] [i_0])))))));
        }
    }
    var_29 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)157)) == (((/* implicit */int) (signed char)37))));
    /* LoopNest 2 */
    for (signed char i_8 = 3; i_8 < 14; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            {
                var_30 += ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_23 [i_9])))) ? (((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [19U] [i_8 - 2])) ? (arr_10 [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9338))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(short)23] [19ULL] [19ULL] [19ULL] [(unsigned short)11])) && (((/* implicit */_Bool) arr_7 [(_Bool)1] [20LL] [(unsigned char)6])))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65534)))))));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    arr_39 [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-102))))) ? (((((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_10])) + (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_2 [i_8]))))));
                    arr_40 [i_8 - 2] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */long long int) (signed char)-100);
                }
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    var_31 ^= ((/* implicit */unsigned int) var_0);
                    arr_43 [(_Bool)1] [(_Bool)1] [i_11] |= ((/* implicit */unsigned short) 3471732996U);
                }
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_13 = 1; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        arr_50 [i_8] [i_12] [14LL] = ((/* implicit */short) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)56199)) ? (3471732997U) : (2961204158U)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            arr_53 [i_8] [i_8] [i_12] [i_8] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_41 [i_8] [i_9] [(short)14] [0LL])), (1816670108)))) ? ((~(((/* implicit */int) arr_1 [(signed char)1] [(signed char)1])))) : (((((/* implicit */_Bool) arr_31 [(short)1])) ? (-1) : (arr_0 [i_12])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_41 [i_8] [i_8] [i_8] [i_8])), (var_4)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_41 [i_8] [i_8 - 2] [i_13 + 2] [i_13]))))) : (max((((((/* implicit */_Bool) arr_10 [i_12])) ? (((/* implicit */unsigned int) 512162725)) : (var_16))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34484)) ? (((/* implicit */int) arr_51 [6U] [i_12])) : (((/* implicit */int) var_15)))))))));
                            arr_54 [i_12] [i_12] = ((((/* implicit */_Bool) 3848152247U)) ? (((/* implicit */int) var_9)) : (-516094597));
                            arr_55 [i_12] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)-66))))))), (min((((/* implicit */long long int) arr_15 [i_8] [i_8] [i_12] [i_12])), (min((-1LL), (((/* implicit */long long int) (unsigned short)65534))))))));
                            arr_56 [i_8 + 1] [i_8 + 1] [(signed char)10] [0U] [14LL] [i_12] = ((/* implicit */unsigned short) arr_4 [i_13] [i_14]);
                        }
                        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            var_32 *= ((/* implicit */unsigned int) (unsigned short)20303);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_10)))))) ? (max((((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8] [i_9] [(short)8] [i_13] [i_13] [i_9]))) : (157546044U))), (((var_19) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [(_Bool)1] [i_12] [i_12] [(_Bool)1])) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (789135862544319971LL))))))))));
                        }
                    }
                    for (signed char i_16 = 1; i_16 < 13; i_16 += 4) /* same iter space */
                    {
                        arr_63 [i_8] [(unsigned short)2] |= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)32761))));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
                        {
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_17] [(unsigned short)5])))))));
                            arr_68 [i_12] [i_9] [i_12] [i_16] [i_12] = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_67 [i_8] [i_8] [i_8] [i_16] [i_17] [i_17] [i_8])) : (((/* implicit */int) (unsigned short)65508)))), (((/* implicit */int) var_15))))));
                            var_35 += ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_25 [9]), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65534))))))))));
                            arr_69 [i_8] [i_8] [i_8 - 1] [(_Bool)1] [i_8 - 1] [i_12] = arr_32 [i_17];
                        }
                        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            arr_72 [i_12] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_10 [(unsigned char)9])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (3673713652912314468LL))))), (((/* implicit */long long int) (!((_Bool)1))))));
                            arr_73 [i_12] = (short)32756;
                            arr_74 [i_8] [i_8] [i_8] [i_8] [i_12] [6ULL] [i_12] = 2961204136U;
                        }
                    }
                    arr_75 [i_12] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((_Bool) var_17))), ((-(arr_64 [(unsigned short)7] [i_9] [i_12] [i_9] [i_9]))))), (((/* implicit */unsigned long long int) arr_44 [i_8 - 2] [i_8 + 1] [i_8] [i_8 - 2]))));
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_0))));
                    arr_76 [i_12] [i_12] [i_12] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_8] [i_12])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)125)))))))), (((unsigned int) (~(5833284321971509038LL))))));
                }
                arr_77 [i_9] = ((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_8] [i_8]);
            }
        } 
    } 
}
