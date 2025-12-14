/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2216
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
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) (signed char)9)))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)46)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_0 - 2] [i_0] [i_2] [i_0 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)18261)) && (((/* implicit */_Bool) (signed char)-11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2020632456))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20)))))));
                    var_15 = ((/* implicit */_Bool) min((5806211956715960521LL), (((/* implicit */long long int) (_Bool)1))));
                    var_16 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-146)) ? (var_1) : (((/* implicit */unsigned long long int) var_2))))));
            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)253))));
            /* LoopSeq 4 */
            for (int i_5 = 2; i_5 < 18; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned short i_7 = 4; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                            var_20 &= ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                            var_21 -= ((/* implicit */unsigned char) ((signed char) var_1));
                            var_22 = (!(((/* implicit */_Bool) var_0)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) var_12);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_12))))) ? ((~(var_9))) : (((/* implicit */int) var_10))));
                        var_25 = ((/* implicit */unsigned long long int) (+(4294967295U)));
                        var_26 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4));
                        var_27 = ((/* implicit */short) ((_Bool) var_5));
                    }
                    arr_30 [(_Bool)1] [i_3] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                }
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) (unsigned short)857);
                var_29 = (+((+(var_2))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65526)) ? (2048) : (((/* implicit */int) var_0)))) > (((/* implicit */int) var_0))));
                            arr_40 [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)14))));
                        }
                    } 
                } 
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned short) (-(var_1)));
                arr_43 [12ULL] [i_4] [i_4] [i_4] = ((/* implicit */int) var_6);
            }
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_32 = ((/* implicit */signed char) (+(var_7)));
                var_33 = ((/* implicit */unsigned short) var_11);
            }
        }
        /* LoopSeq 4 */
        for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) var_6);
            arr_52 [i_15] [i_15] [i_15] |= ((/* implicit */long long int) ((short) var_9));
            /* LoopSeq 2 */
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
            {
                arr_57 [5U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                var_35 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    for (signed char i_18 = 4; i_18 < 19; i_18 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) ((unsigned int) 2343912535U));
                            var_37 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)18)) + (((/* implicit */int) (short)27345))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_39 += ((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))));
            }
            for (unsigned int i_19 = 2; i_19 < 19; i_19 += 2) 
            {
                var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                var_41 += ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_10))));
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (+(var_8))))));
            }
            var_43 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        }
        for (short i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned int) var_6);
            var_45 = ((/* implicit */unsigned long long int) var_9);
            arr_66 [i_3] [i_3] = ((/* implicit */unsigned short) (-(var_7)));
        }
        for (short i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
        {
            var_46 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-96))));
            var_47 = ((/* implicit */signed char) var_9);
            var_48 = ((/* implicit */int) var_1);
        }
        for (signed char i_22 = 0; i_22 < 20; i_22 += 3) 
        {
            var_49 = ((/* implicit */unsigned short) (((_Bool)1) ? ((~(((/* implicit */int) (signed char)123)))) : ((~(((/* implicit */int) var_10))))));
            /* LoopSeq 2 */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (short i_25 = 0; i_25 < 20; i_25 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_10))))));
                            var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                            var_52 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531)))));
                        }
                    } 
                } 
                arr_81 [i_3] [i_22] [i_23] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_53 = ((/* implicit */int) (~(911555271U)));
                /* LoopSeq 1 */
                for (unsigned int i_27 = 4; i_27 < 18; i_27 += 4) 
                {
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-19))))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_56 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)));
                    arr_86 [i_26] [i_26] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 3383412006U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_3))))));
                }
                /* LoopSeq 1 */
                for (signed char i_28 = 3; i_28 < 17; i_28 += 4) 
                {
                    var_57 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                    var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (2587331569U)));
                    var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2097151U)));
                }
                var_60 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (var_9)))));
                /* LoopSeq 2 */
                for (signed char i_29 = 0; i_29 < 20; i_29 += 3) /* same iter space */
                {
                    var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (14697710580674905355ULL) : (((/* implicit */unsigned long long int) 715860957U))));
                    /* LoopSeq 2 */
                    for (long long int i_30 = 0; i_30 < 20; i_30 += 4) /* same iter space */
                    {
                        arr_93 [i_22] [i_30] [i_22] [i_29] [14ULL] [i_3 - 2] |= ((/* implicit */unsigned long long int) (-(0U)));
                        var_62 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        var_63 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
                        var_64 = ((/* implicit */int) ((signed char) var_11));
                        arr_94 [i_26] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8676904365230372508ULL)) ? (var_1) : (var_7)));
                    }
                    for (long long int i_31 = 0; i_31 < 20; i_31 += 4) /* same iter space */
                    {
                        arr_98 [i_3 + 1] [i_26] [i_26] [i_26] [i_3 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)8905))));
                        var_65 += ((/* implicit */short) (+(var_3)));
                    }
                }
                for (signed char i_32 = 0; i_32 < 20; i_32 += 3) /* same iter space */
                {
                    var_66 ^= ((/* implicit */unsigned short) (+(var_1)));
                    arr_101 [i_26] [i_22] [i_22] [i_3] [i_26] = ((/* implicit */signed char) var_12);
                    var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)));
                }
            }
        }
        var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (12712388069062022791ULL)));
        /* LoopNest 3 */
        for (signed char i_33 = 2; i_33 < 17; i_33 += 3) 
        {
            for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) 
            {
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    {
                        arr_109 [i_3 - 2] [i_3] [i_33] = ((/* implicit */unsigned long long int) var_4);
                        /* LoopSeq 1 */
                        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                        {
                            var_69 = ((/* implicit */_Bool) (-(var_3)));
                            var_70 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                            var_71 = ((((2892848650U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))));
                            var_72 *= ((/* implicit */long long int) ((var_4) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (var_9))))));
                        }
                        var_73 = ((/* implicit */_Bool) (~(var_2)));
                        var_74 = ((/* implicit */int) ((unsigned int) var_0));
                    }
                } 
            } 
        } 
        arr_112 [(signed char)2] = ((/* implicit */signed char) (~(var_8)));
    }
    var_75 = ((/* implicit */int) var_7);
    var_76 = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (var_3)))))));
}
