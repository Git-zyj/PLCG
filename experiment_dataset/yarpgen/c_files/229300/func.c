/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229300
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
    var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((-730185003513305787LL), (((/* implicit */long long int) var_1))))) ? ((-(((/* implicit */int) var_2)))) : (var_4))), (var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (4503599627337728ULL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_14 += arr_8 [(signed char)14] [(signed char)14];
                var_15 = ((/* implicit */_Bool) min((var_15), (var_5)));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_0] [i_0] [(short)16] [i_3] = ((/* implicit */unsigned short) 760077199485130384ULL);
                arr_12 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) 18442240474082213888ULL));
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) arr_4 [i_3]))));
            }
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_20 [i_0] = arr_6 [i_0] [i_1] [i_1] [i_5];
                    var_16 = ((/* implicit */_Bool) 7534815604507580276ULL);
                    var_17 = ((/* implicit */signed char) 4503599627337712ULL);
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (arr_6 [i_0] [i_0] [i_5] [i_6])));
                        var_20 *= ((/* implicit */short) var_9);
                        var_21 = ((/* implicit */unsigned short) (_Bool)1);
                        var_22 = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (var_7) : (3469652264400495650LL))))));
                        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3106432500061129397LL)) ? (3353676401U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((signed char) var_4))) : ((-(((/* implicit */int) (_Bool)1))))));
                        arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) (-(13096901382239353554ULL)));
                        var_25 *= ((/* implicit */signed char) ((arr_14 [i_0] [i_1] [i_7]) * (((((/* implicit */int) arr_4 [i_7])) / (var_4)))));
                    }
                    arr_28 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_1] [i_1] [i_0])))));
                }
                arr_29 [i_0] [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) arr_23 [i_4] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? ((+(3106432500061129397LL))) : (((/* implicit */long long int) 3353676416U)));
            }
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_26 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? ((-2147483647 - 1)) : (((/* implicit */int) var_2)));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_27 -= ((/* implicit */unsigned char) ((var_3) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_37 [i_0] [(_Bool)1] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(18442240474082213901ULL)))) ? (((/* implicit */unsigned long long int) (-(var_0)))) : ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        var_28 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [(_Bool)1] [i_11])) ? (((/* implicit */int) arr_24 [i_11] [i_1] [i_0])) : (((/* implicit */int) arr_8 [(signed char)16] [i_1]))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (-(((/* implicit */int) var_3)))))));
                    }
                    var_30 -= ((((/* implicit */int) var_1)) != (var_0));
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_5);
                    var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 3636725634U)) ? (((/* implicit */int) (unsigned short)51508)) : (((/* implicit */int) (short)3417)))) % (((/* implicit */int) ((signed char) var_0)))));
                }
                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0] [i_0] [i_0] [i_8]) : (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) arr_41 [i_1])) ? (((/* implicit */long long int) var_0)) : (arr_42 [i_0] [i_0] [i_0] [(short)10]))) : (((/* implicit */long long int) 569786455U)));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (-(var_0))))));
                var_34 = ((/* implicit */short) (~(5628264278716799151LL)));
                arr_45 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_5 [i_8] [i_0] [i_0])));
            }
            arr_46 [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_0]);
            /* LoopSeq 3 */
            for (signed char i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 3229243593U);
                    var_35 -= ((/* implicit */_Bool) ((3826004605236211269LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                }
                for (int i_15 = 2; i_15 < 20; i_15 += 2) 
                {
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (_Bool)0))));
                    var_37 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)20126))));
                }
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    arr_58 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_53 [i_0] [i_1] [i_13] [i_1])))));
                    arr_59 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6846700216950225249LL)) && (((/* implicit */_Bool) ((6846700216950225249LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))))))));
                }
                for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        var_38 &= (short)-3887;
                        arr_64 [i_18] [i_17] [i_17] [i_17] [i_0] [i_0] &= arr_2 [i_13];
                        var_39 += ((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_30 [(signed char)8] [(signed char)8])) : (((/* implicit */int) arr_16 [i_0] [i_17] [i_17] [i_18]))));
                        arr_65 [i_0] = ((/* implicit */unsigned char) (+(((5661831041217881987LL) >> (((4294967277U) - (4294967246U)))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_25 [i_13] [i_1] [i_1] [i_0] [i_19])) : (var_10)));
                        var_41 += ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0] [i_1] [i_13] [i_1] [i_1])) ^ (((/* implicit */int) arr_23 [i_0] [i_1] [i_13] [i_0] [i_19]))));
                    }
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        arr_70 [i_20] [i_0] [i_20] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_61 [i_0])))) ? (((/* implicit */int) arr_68 [i_17] [(_Bool)1] [i_17] [i_13] [i_13] [i_0] [i_0])) : (((/* implicit */int) var_1))));
                        var_42 -= ((((/* implicit */int) (!((_Bool)1)))) >= (((((/* implicit */int) arr_63 [i_13] [(unsigned char)20] [(unsigned char)20])) & (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        var_43 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((var_4) + (467182644)))))) : ((+(arr_9 [i_1] [i_1] [i_1] [i_0])))));
                        arr_74 [10U] [i_1] [i_17] [i_17] [i_21] &= ((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) / (((long long int) arr_51 [i_0] [i_1]))));
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3887)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38832))) : (var_8)))) ? (((((/* implicit */int) (signed char)-111)) + (((/* implicit */int) (short)-554)))) : (((/* implicit */int) arr_8 [i_17] [i_21])))))));
                    }
                }
            }
            for (signed char i_22 = 0; i_22 < 22; i_22 += 1) /* same iter space */
            {
                arr_77 [i_0] [(unsigned char)2] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_62 [i_0] [i_0] [(signed char)14] [i_0] [i_22]))));
                arr_78 [i_22] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 4) 
                {
                    arr_81 [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_1))))));
                    arr_82 [i_0] [(short)18] [i_23] = ((/* implicit */signed char) ((unsigned int) var_2));
                    var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_83 [i_0] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10)));
                }
            }
            for (signed char i_24 = 0; i_24 < 22; i_24 += 1) /* same iter space */
            {
                arr_86 [14LL] [14LL] [i_24] [14LL] |= ((/* implicit */short) ((_Bool) (_Bool)1));
                /* LoopSeq 1 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3980324777U))));
                    arr_89 [i_0] = ((long long int) (_Bool)1);
                }
            }
            var_47 += ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_18 [(signed char)6] [i_0] [(signed char)6]))) % (var_7)))));
        }
    }
    /* vectorizable */
    for (long long int i_26 = 0; i_26 < 21; i_26 += 3) 
    {
        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) arr_76 [i_26] [i_26]))));
        var_49 = ((/* implicit */short) arr_7 [i_26] [(signed char)20]);
    }
}
