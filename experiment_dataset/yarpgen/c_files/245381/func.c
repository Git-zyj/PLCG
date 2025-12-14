/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245381
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_10 = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_6 [i_1] = ((int) arr_3 [i_1] [i_1] [i_1]);
            var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((int) (unsigned char)4)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [2ULL] [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_12 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) (unsigned char)8))));
                arr_13 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) (unsigned char)15);
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)248))))) ? (((((/* implicit */int) var_4)) / (var_9))) : (((var_9) / (((/* implicit */int) (unsigned char)72))))));
            }
            arr_15 [i_2] = ((/* implicit */unsigned char) (-((((_Bool)1) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_5))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_4] = ((/* implicit */short) ((unsigned char) ((_Bool) arr_17 [i_4])));
            var_13 = ((/* implicit */_Bool) (unsigned char)255);
        }
        arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_12 [i_0]))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) (+(((var_8) - (((/* implicit */int) ((unsigned char) -601572762)))))));
            arr_25 [i_6] &= ((/* implicit */unsigned int) 18051806693823709188ULL);
        }
        for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
        {
            arr_28 [i_5] = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */int) var_4)), (-601572770))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_16 ^= ((/* implicit */int) (-(1309804527U)));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 7884789224992177540ULL))));
            }
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) (_Bool)1))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-15804)) % (((/* implicit */int) (short)5608))));
                }
                for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    arr_38 [i_5] [i_7] = ((/* implicit */_Bool) (unsigned char)225);
                }
                for (long long int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */int) ((unsigned char) ((-853013645) - (((/* implicit */int) (_Bool)1)))));
                    var_22 = ((unsigned char) ((((/* implicit */int) arr_8 [(short)3] [i_9] [i_12])) - (((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                {
                    arr_43 [7ULL] [i_7] [i_5] [i_13] [i_5] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)1)))));
                    var_23 = ((/* implicit */unsigned long long int) ((int) (short)22818));
                    var_24 ^= ((/* implicit */unsigned int) 1563927638);
                    arr_44 [i_7] [i_7] &= ((/* implicit */short) ((_Bool) 7213662122588387252ULL));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_25 += ((/* implicit */unsigned char) arr_35 [i_5] [i_7 - 2] [i_9] [i_14]);
                        arr_49 [i_5] [i_13] [(signed char)10] [i_7] [(_Bool)1] [i_5] = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (long long int i_15 = 3; i_15 < 17; i_15 += 4) /* same iter space */
                    {
                        var_26 |= ((/* implicit */unsigned char) 2147483647);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((arr_4 [i_15]) - (((/* implicit */int) (short)22818)))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) 584331728U)) == (17115496877323157627ULL)))))))));
                        var_28 = ((/* implicit */unsigned int) ((_Bool) 2985162798U));
                    }
                    for (long long int i_16 = 3; i_16 < 17; i_16 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((unsigned long long int) arr_41 [i_5] [i_5] [i_16 + 3] [i_13] [i_5])))));
                        arr_55 [6LL] [i_7 - 1] [i_7 - 2] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */int) (short)22823);
                    }
                }
                var_30 = ((/* implicit */long long int) (!((_Bool)1)));
                var_31 = ((/* implicit */int) min((var_31), ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)28)))) / (var_8)))));
            }
            for (unsigned char i_17 = 1; i_17 < 19; i_17 += 4) 
            {
                var_32 = (-(((/* implicit */int) arr_11 [i_17] [i_7] [i_17] [i_17])));
                arr_58 [i_17] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)26);
            }
            /* vectorizable */
            for (int i_18 = 2; i_18 < 18; i_18 += 4) 
            {
                var_33 = ((/* implicit */_Bool) ((-6013630894015454963LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))));
                var_34 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                {
                    arr_68 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (short)-14))));
                    var_35 = ((/* implicit */short) ((unsigned long long int) arr_3 [i_5] [i_7 + 2] [i_7 - 1]));
                    var_36 = (+(-4350785258240852836LL));
                }
                for (int i_21 = 0; i_21 < 20; i_21 += 4) /* same iter space */
                {
                    var_37 = ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) 15422942733961855238ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (unsigned char)44))) >= (((/* implicit */int) (_Bool)1))));
                    arr_72 [i_21] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)161)) ? (6013630894015454962LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))) / (((long long int) (unsigned char)24))));
                }
                var_39 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)217)) / (((/* implicit */int) var_1))));
                var_40 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                var_41 = ((unsigned long long int) -9223372036854775794LL);
            }
            /* vectorizable */
            for (short i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 3) 
                {
                    var_42 = ((/* implicit */unsigned char) ((unsigned int) 17382775911418240829ULL));
                    var_43 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -6013630894015454963LL)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (_Bool)1))))) ^ (6013630894015454965LL)));
                }
                for (signed char i_24 = 0; i_24 < 20; i_24 += 3) 
                {
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-42)) * (((/* implicit */int) var_0)))) > (((/* implicit */int) (signed char)13)))))));
                    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) 3116022339519627768ULL))));
                    var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-18LL))) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (1568425165))))));
                }
                var_47 = ((((/* implicit */int) (unsigned char)0)) | (((((/* implicit */_Bool) arr_79 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))));
            }
        }
        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) (unsigned char)24)), (var_3))))) ? (((max((((/* implicit */unsigned long long int) var_1)), (15330721734189923848ULL))) * (((/* implicit */unsigned long long int) (-(6013630894015454962LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
        arr_81 [i_5] = ((/* implicit */short) var_6);
        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((int) (~(((unsigned int) (unsigned char)217))))))));
    }
    var_50 = ((/* implicit */unsigned int) (_Bool)0);
    var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_9) : (((/* implicit */int) ((_Bool) -2733906987487023931LL))))))));
    var_52 -= ((/* implicit */long long int) (-(15330721734189923848ULL)));
}
