/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47860
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_2 [18ULL])) : (arr_3 [i_0] [i_0])))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)255))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 &= ((/* implicit */unsigned char) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) -191055793))));
                        arr_10 [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_3 - 1] [i_3 + 1] [i_0] [i_3 + 1]);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_7 [i_1] [i_2] [i_0] [i_4])));
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2657418694809545618LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34250))) : (arr_5 [i_0] [i_3] [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_0] [i_0] [(unsigned short)4])))));
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0]))))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~((+(((/* implicit */int) var_4)))))))));
                        }
                    }
                    arr_15 [i_0] [i_2] = ((/* implicit */unsigned int) var_1);
                    arr_16 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [5ULL] [i_1] [i_0])) : (arr_1 [i_0]));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_22 [i_6] [i_7] [i_6] = ((/* implicit */signed char) (~(((int) (signed char)57))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        {
                            arr_31 [i_6] [i_7] [i_8] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_27 [i_8] [20U] [i_8] [i_8 - 1] [i_10] [i_10] [i_10 + 2]);
                            arr_32 [i_10] [i_8] [(unsigned short)0] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (21360ULL)))));
                            var_19 ^= ((/* implicit */unsigned int) arr_3 [i_9] [i_7]);
                            arr_33 [i_6] [i_7] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_10 + 1]))));
                            var_20 = ((/* implicit */unsigned short) arr_11 [i_8 + 1] [i_8 + 2] [i_8 - 2] [i_10]);
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_20 [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (var_8)))) : (((((/* implicit */_Bool) arr_20 [i_6])) ? (-4321924394583391411LL) : (((/* implicit */long long int) 709574532U))))))) ? (((/* implicit */int) arr_6 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_24 [10] [i_6]))));
        arr_34 [i_6] = arr_28 [i_6] [i_6] [i_6] [i_6] [i_6];
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (unsigned short)5363))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)42658)))) : (((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_14 [i_6]) : (arr_14 [i_6])))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > ((+(arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_11 = 3; i_11 < 24; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) arr_37 [i_14]);
                        var_26 = var_10;
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_14])) ? (((/* implicit */int) arr_39 [i_14])) : (((/* implicit */int) arr_39 [i_13]))))) ? (((((/* implicit */_Bool) -349036531)) ? (((/* implicit */int) arr_39 [i_11])) : (((/* implicit */int) (signed char)125)))) : (((((/* implicit */_Bool) arr_39 [i_14])) ? (((/* implicit */int) arr_39 [i_11])) : (var_8)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
    {
        arr_51 [i_15] &= min((max((16186587063971195122ULL), (((/* implicit */unsigned long long int) arr_48 [i_15])))), (((/* implicit */unsigned long long int) var_1)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            arr_54 [i_15] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
            arr_55 [i_16] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4)))))));
        }
        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
        {
            var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_44 [i_17] [i_15] [i_15] [i_15]), (arr_39 [i_17])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_15] [16] [i_15] [(unsigned short)10] [i_17]))))) : (((/* implicit */int) min((arr_44 [i_15] [i_15] [i_17] [i_17]), (arr_44 [i_15] [i_15] [i_17] [i_17]))))));
            arr_58 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [(unsigned char)19])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15095))))))) : (((((/* implicit */_Bool) arr_38 [i_15] [i_15] [i_15])) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_50 [(unsigned short)2]))));
        }
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) /* same iter space */
        {
            arr_62 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_48 [i_15]))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_48 [i_15]))));
            arr_63 [i_15] [i_15] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_45 [i_15] [i_15] [i_18] [i_18] [i_18])))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            var_31 = ((/* implicit */unsigned long long int) arr_61 [i_15] [i_15] [i_15]);
        }
        for (unsigned char i_19 = 0; i_19 < 23; i_19 += 1) /* same iter space */
        {
            var_32 *= (unsigned short)0;
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    {
                        arr_72 [i_15] [(unsigned char)7] [i_20] [(signed char)7] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3585392765U)) ? (arr_35 [i_19]) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_68 [i_19])) : (((/* implicit */int) var_2)))))) : (min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) arr_44 [3] [i_19] [i_20] [i_21]))))));
                        arr_73 [i_15] [i_15] [i_19] [i_19] [i_15] = ((/* implicit */unsigned short) arr_49 [i_19]);
                        var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_44 [i_15] [i_15] [(unsigned short)0] [i_21])) ? (var_0) : (((/* implicit */unsigned long long int) var_10)))) << (((((/* implicit */int) var_9)) - (20168)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (min((((((/* implicit */_Bool) 925026411)) ? (((/* implicit */long long int) arr_64 [i_15])) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))));
                    }
                } 
            } 
            var_34 = var_8;
            var_35 *= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)139)), (((((/* implicit */_Bool) arr_47 [i_15] [i_15] [(unsigned char)24] [i_19] [16U] [i_19])) ? (((/* implicit */int) (unsigned short)34250)) : (((((/* implicit */_Bool) (unsigned short)17223)) ? (((/* implicit */int) (unsigned short)37526)) : (((/* implicit */int) arr_56 [i_15] [i_15] [i_19]))))))));
        }
    }
    for (unsigned short i_22 = 0; i_22 < 23; i_22 += 2) /* same iter space */
    {
        arr_78 [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55421))) : (var_3)))) ? (((((/* implicit */_Bool) arr_75 [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_5)))))))));
        arr_79 [9ULL] = ((/* implicit */unsigned char) min((arr_43 [i_22] [i_22]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_22])))))));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [(unsigned short)20] [i_22] [i_22] [i_22]))))) : (((/* implicit */int) arr_37 [i_22]))))))))));
    }
    var_37 |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) max((var_2), (min((var_2), ((unsigned short)54801)))))) : (((/* implicit */int) ((unsigned short) (unsigned short)47674)))));
    /* LoopNest 2 */
    for (signed char i_23 = 3; i_23 < 20; i_23 += 2) 
    {
        for (unsigned short i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            {
                var_38 = ((/* implicit */signed char) (+((+(arr_67 [(signed char)9] [i_23] [i_24])))));
                arr_85 [i_24] [i_23] = ((/* implicit */unsigned int) arr_70 [i_23] [i_23] [i_23] [5ULL]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_25 = 0; i_25 < 25; i_25 += 1) 
    {
        for (unsigned short i_26 = 0; i_26 < 25; i_26 += 2) 
        {
            {
                arr_91 [i_25] [i_25] [i_26] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_86 [i_25])))) ? (arr_35 [i_26]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                var_39 = ((/* implicit */unsigned short) (signed char)51);
                var_40 = ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
}
