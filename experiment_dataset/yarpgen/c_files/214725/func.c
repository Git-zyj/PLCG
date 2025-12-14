/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214725
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_8)) : (var_13)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [17ULL] [i_0] [i_0])) ? (4294967270U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 1])))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_14 |= ((/* implicit */short) (-(((/* implicit */int) var_12))));
                            var_15 |= ((((/* implicit */int) arr_9 [(unsigned short)18] [i_4] [i_3 - 3] [(unsigned short)18])) * (((/* implicit */int) arr_9 [(unsigned char)6] [i_3] [i_3 - 2] [(unsigned char)6])));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((arr_13 [3U] [i_1 + 2]) != (((/* implicit */int) (unsigned char)7)))))));
            arr_14 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_0] [(unsigned char)9]))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            var_17 |= ((/* implicit */unsigned int) (+(((int) arr_7 [i_0] [i_5 + 2] [i_5] [i_5]))));
            var_18 -= ((/* implicit */unsigned long long int) (unsigned short)53623);
            /* LoopNest 2 */
            for (unsigned short i_6 = 3; i_6 < 23; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) 1557388189U))))) < (((/* implicit */int) arr_12 [i_5 - 1] [i_7] [i_6] [i_0] [i_6 + 1] [(_Bool)1] [i_0])));
                        var_20 |= ((/* implicit */signed char) arr_13 [i_6 - 3] [i_6 - 3]);
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) -787722646)) ? (2012760532U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24576))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58055))))))));
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1954860514)))))));
            var_23 = ((/* implicit */unsigned int) (!(arr_8 [i_8] [i_8] [i_8] [i_8])));
        }
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_11 [19U] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_9 = 3; i_9 < 9; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17465)) ? (3691231177231596997ULL) : (((/* implicit */unsigned long long int) -1954860514))));
                        /* LoopSeq 4 */
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_25 [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)61351)))))))) ? (((((/* implicit */_Bool) arr_21 [i_9 + 1] [i_9] [i_9 + 1] [i_9] [i_9 - 1] [17])) ? (((/* implicit */int) arr_16 [i_9 - 2] [i_10] [6])) : (((/* implicit */int) var_7)))) : (((arr_15 [i_9 - 3] [i_13] [5]) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16)) != (((/* implicit */int) arr_21 [i_9] [i_10] [i_11] [(unsigned char)14] [i_12] [i_13])))))))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min(((~(min((((/* implicit */long long int) 3221808582U)), (6224210601063641482LL))))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((var_2) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_10 [i_13] [i_12] [i_11] [i_11] [(_Bool)1] [16] [i_9 - 3]))))))))))));
                            var_28 = ((/* implicit */unsigned short) var_3);
                        }
                        for (int i_14 = 2; i_14 < 8; i_14 += 3) /* same iter space */
                        {
                            var_29 = ((((arr_34 [i_9 - 3] [i_9] [i_9 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))) + ((((~(arr_42 [i_9] [i_12] [i_12] [i_11] [i_10] [i_10] [i_9]))) + (((/* implicit */unsigned int) min((787722654), (((/* implicit */int) var_4))))))));
                            var_30 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_39 [i_14] [i_14] [3U] [i_14 + 1] [i_9] [i_14 + 2])) ? (3221808591U) : (((/* implicit */unsigned int) arr_45 [i_9] [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 2])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)69))))) ? (4294967287U) : (((/* implicit */unsigned int) max((632728376), (-612418079))))))));
                            var_31 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                            var_32 = (unsigned char)82;
                            var_33 = ((/* implicit */long long int) 280084254U);
                        }
                        for (int i_15 = 2; i_15 < 8; i_15 += 3) /* same iter space */
                        {
                            arr_49 [i_10] [i_9 - 3] [6U] [i_12] [i_9] [i_9 - 1] [i_9] = ((/* implicit */unsigned int) min((1954860518), (((/* implicit */int) (unsigned short)2164))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9] [19U] [19U] [i_9 - 3] [i_9] [i_9] [i_9 - 3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12] [i_12] [0U] [i_12] [i_12] [i_12] [18])))))) ? (((/* implicit */int) arr_39 [i_9] [i_9] [i_9] [i_9] [6U] [(_Bool)0])) : ((~(((/* implicit */int) var_7))))))), (min((((/* implicit */long long int) -1954860510)), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_0) : (var_13))))))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1317470519)) ? (((/* implicit */int) (unsigned short)2839)) : (1059784812)))) == (((((/* implicit */_Bool) var_11)) ? (arr_46 [i_9 - 2] [(unsigned char)7] [4U] [i_11] [i_11] [(unsigned short)7] [i_16]) : (((/* implicit */unsigned int) var_8))))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)64))))), (var_9)))));
                            var_36 = ((/* implicit */unsigned short) arr_20 [17] [4U] [i_16]);
                            arr_53 [i_9] [i_9] [i_9] [i_11] [i_12] [(unsigned short)5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (602411912U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3320226819U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (974740477U))))))))));
                            var_37 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1954860506))))));
                        }
                        var_38 = ((/* implicit */unsigned char) (~(((int) (-(var_1))))));
                        var_39 = ((/* implicit */signed char) 8636982819474914086ULL);
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */signed char) arr_46 [i_9] [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 3] [i_9]);
    }
    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 3) 
    {
        var_41 = ((/* implicit */unsigned int) (-(((var_2) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_17] [i_17] [i_17] [3ULL]))) : (5800839252932065033LL)))));
        var_42 = ((/* implicit */unsigned short) min((-5800839252932065033LL), (((/* implicit */long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 13; i_19 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        for (int i_21 = 0; i_21 < 13; i_21 += 1) 
                        {
                            {
                                arr_68 [i_18] [i_17] = ((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)62701), ((unsigned short)62696)))), (-2147483629)));
                                arr_69 [i_17] [i_17] [i_18] [i_17] [i_20] [i_17] = ((/* implicit */unsigned short) ((arr_15 [i_17] [i_17] [(unsigned char)21]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) == (var_0))))) : ((+(arr_20 [i_20] [i_19] [i_18])))));
                            }
                        } 
                    } 
                    arr_70 [i_17] [(signed char)6] [i_19] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_17] [i_18] [i_19])) ? (((/* implicit */int) arr_4 [i_17] [i_18] [i_19])) : (((/* implicit */int) arr_4 [i_17] [i_18] [(_Bool)1])))));
                    var_43 = ((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_17] [i_18] [i_19])))));
                }
            } 
        } 
        arr_71 [7U] [i_17] = ((/* implicit */unsigned char) ((var_10) <= (((/* implicit */unsigned int) ((((var_5) ? (((/* implicit */int) arr_15 [i_17] [i_17] [i_17])) : (((/* implicit */int) (unsigned short)62697)))) - (((/* implicit */int) var_3)))))));
        var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) > (((/* implicit */int) arr_16 [i_17] [i_17] [(unsigned char)7])))))));
    }
    var_45 = ((/* implicit */unsigned int) var_7);
    var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (int i_22 = 3; i_22 < 8; i_22 += 2) 
    {
        for (signed char i_23 = 2; i_23 < 11; i_23 += 2) 
        {
            {
                var_47 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_22] [i_22] [i_22 - 3] [10ULL])))));
                arr_77 [i_23] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53623))) + (((((/* implicit */_Bool) (unsigned short)57626)) ? (2997294789U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))))))));
                arr_78 [i_22] [i_22] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (arr_66 [7] [i_22] [i_22 + 3] [i_23] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [5] [(unsigned short)4])))))));
                var_48 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_59 [i_22 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2839)) ? (((/* implicit */int) (unsigned short)29185)) : (((/* implicit */int) (_Bool)0))))) ? (((int) (unsigned char)248)) : (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) (short)-32744))))));
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
}
