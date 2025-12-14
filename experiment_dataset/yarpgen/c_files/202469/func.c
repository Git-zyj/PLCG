/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202469
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [0ULL] [i_1 - 1])) < (((/* implicit */int) arr_3 [(_Bool)1] [i_1 - 1]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [22U] [i_1 - 1]))))))))));
                    arr_11 [i_1] = ((/* implicit */short) var_1);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_14 [i_1] [i_1] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (((-(((unsigned int) arr_0 [i_2] [i_4])))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_0] [i_4]))))));
                    arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? ((((+(var_14))) | (arr_5 [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1] [i_2])))))));
                }
                arr_16 [i_1] = arr_3 [i_1] [i_1 - 1];
                var_21 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (_Bool)1))))));
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_9);
            }
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1] [i_5]))));
                    arr_23 [i_1] = arr_1 [i_5] [i_0];
                    arr_24 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */short) (+((+(((((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1]))) : (arr_10 [i_0] [i_1] [i_0] [i_6])))))));
                }
                /* LoopSeq 1 */
                for (short i_7 = 4; i_7 < 20; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_23 *= arr_3 [i_8] [i_8];
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)3654)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)255)), (3LL)));
                        arr_31 [i_0] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */unsigned int) ((((int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))) >= ((+((((_Bool)1) ? (((/* implicit */int) (short)-13479)) : (((/* implicit */int) (unsigned char)88))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 220879946U)) != (arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_9]))))));
                        var_27 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_6 [i_9])))) | (((/* implicit */int) (_Bool)1))));
                        var_28 *= ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) (short)1259)))));
                    }
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_26 [i_1 + 1] [i_1] [i_7 + 3] [i_7 - 4]), (((var_9) / (var_9)))))) || (((/* implicit */_Bool) ((arr_13 [i_1 - 1] [i_7 + 3]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_7 + 3]))))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_7 - 4] [i_1] [i_1] [i_1]))))) && (((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
                    }
                    arr_36 [i_1] [i_7 + 3] = ((((/* implicit */unsigned long long int) (-(((arr_1 [i_1] [i_7 - 4]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1] [i_0] [i_0] [i_1] [i_0])))))))) <= (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (arr_29 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_7 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_5] [i_7])) ? (arr_26 [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */int) arr_8 [i_7] [i_1] [i_1] [i_0]))))))));
                    arr_37 [i_0] [i_0] [i_5] [(short)12] &= ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_6))))));
                    var_31 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_13 [i_1 - 1] [i_7 + 1]) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_7 + 1])) : (((/* implicit */int) var_17))))), ((+(var_5)))));
                    arr_38 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 3; i_11 < 21; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_45 [i_0] [i_1] [i_5] [i_1] [i_1] = (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))));
                            arr_46 [i_5] [i_1] [i_12] = ((/* implicit */short) arr_22 [i_1 - 1] [i_5] [i_1 - 1] [i_12]);
                            arr_47 [i_1] [i_1] [i_1] [i_11] [i_1] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)20118)), (arr_34 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_11 + 3]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    arr_50 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */long long int) var_8);
                    arr_51 [i_0] [i_5] [i_1] = ((var_13) | (((/* implicit */unsigned int) min((var_9), (((/* implicit */int) arr_35 [i_0] [i_1] [i_1] [i_1] [i_1 + 1]))))));
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned int) arr_43 [i_13] [i_5] [i_5] [i_0] [i_1 + 1] [i_0] [i_0])))));
                    /* LoopSeq 4 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_55 [i_1] = ((/* implicit */int) var_14);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) arr_19 [i_14] [i_13] [i_0] [i_0]))));
                        arr_56 [i_0] [i_1] [i_5] [i_13] [i_1] = ((/* implicit */long long int) var_19);
                        arr_57 [i_0] [i_1 - 1] [i_5] [i_1] [i_14] = ((/* implicit */unsigned char) arr_35 [i_0] [i_0] [i_5] [i_13] [i_14]);
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_61 [i_1] [i_1 - 1] [i_1] = ((/* implicit */long long int) arr_52 [i_0] [i_0] [i_1] [i_5] [i_5] [i_13] [i_1]);
                        arr_62 [i_1] [i_1] [i_1] [i_5] [i_5] [i_13] [i_15] = max((3142568432U), (((/* implicit */unsigned int) (unsigned short)3647)));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) var_18);
                        arr_66 [i_5] [(short)22] |= ((/* implicit */_Bool) ((long long int) var_17));
                        var_35 = ((/* implicit */_Bool) min((((unsigned int) arr_60 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])), ((+(1555233545U)))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) var_18))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (unsigned short)3628))));
                        var_38 = min(((-(min((arr_5 [i_1]), (arr_63 [i_0] [i_1] [i_0] [i_13] [i_17]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)32768))))));
                        arr_69 [(signed char)0] [i_1 + 1] [i_5] [i_1 + 1] [i_17] |= ((/* implicit */unsigned int) max((min((((((/* implicit */int) (_Bool)1)) / (-291286710))), (((((((/* implicit */int) (short)-13479)) + (2147483647))) << (((((/* implicit */int) arr_32 [i_0] [i_0] [i_5] [i_13] [i_17])) - (1))))))), (max((((/* implicit */int) ((unsigned short) var_14))), ((-(((/* implicit */int) var_15))))))));
                    }
                }
            }
            arr_70 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_15);
            arr_71 [i_1] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_0] [i_0] [i_1] [i_1])) << (((((/* implicit */int) ((short) arr_49 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]))) + (2428)))));
        }
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            var_39 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_18] [i_18])) / (max((arr_72 [i_0] [i_18]), (((/* implicit */int) (unsigned short)31495)))))) >= ((~(((/* implicit */int) ((short) arr_22 [i_0] [i_0] [i_0] [i_18])))))));
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) arr_19 [i_18] [i_0] [i_0] [i_0]))));
            var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_40 [i_18] [i_18] [i_18] [i_18] [i_18])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_48 [i_0] [i_0] [i_0] [i_18]))) || (((/* implicit */_Bool) ((unsigned short) arr_44 [i_0] [i_0] [i_18] [i_18])))))) : (arr_75 [i_18])));
        }
        for (short i_19 = 2; i_19 < 20; i_19 += 4) 
        {
            arr_79 [i_0] [i_19 + 2] [i_19] = ((/* implicit */short) max((((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (_Bool)1)))))), (1U)));
            var_42 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_19])), (arr_10 [i_19 + 1] [i_19 + 4] [i_19 + 2] [i_19])));
            var_43 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) max(((unsigned char)251), (((/* implicit */unsigned char) (_Bool)1))))))));
            arr_80 [i_0] [i_19] [i_19 + 1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) max(((unsigned char)220), (((/* implicit */unsigned char) var_10)))))))));
        }
        for (signed char i_20 = 1; i_20 < 23; i_20 += 3) 
        {
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((max((var_14), (((/* implicit */unsigned int) (short)13478)))), (((/* implicit */unsigned int) ((unsigned short) var_11)))))) > (var_5)));
            var_45 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_20 + 1])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_20 + 1] [14U])) : (((/* implicit */int) arr_8 [i_0] [i_0] [18] [18]))))) << (((arr_48 [i_0] [i_20 - 1] [i_20] [i_20]) ? (((/* implicit */int) arr_59 [i_20 - 1] [i_20 - 1] [i_20] [i_20 - 1] [i_20] [i_20 + 1] [i_20])) : (((/* implicit */int) arr_13 [i_0] [i_0]))))));
        }
    }
    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_10)))))) : (((((/* implicit */_Bool) (signed char)-48)) ? (min((3284121448806578571ULL), (((/* implicit */unsigned long long int) 2332582814U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5539844100943804277ULL)) || (((/* implicit */_Bool) (unsigned short)65513))))))))));
}
