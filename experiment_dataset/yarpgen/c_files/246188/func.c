/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246188
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned char)134))));
                var_15 = ((/* implicit */unsigned int) ((-4768471312901045180LL) / (4768471312901045180LL)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4768471312901045180LL)) ? (4055693611140533614LL) : (2844548582938147162LL)));
                                arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_10 [i_0] [i_1] [i_0] [i_3]))), (((/* implicit */unsigned long long int) (short)-5027))))) ? (arr_10 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (((long long int) arr_10 [i_0] [(short)3] [i_0] [i_3])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32677)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)30175)))))))) ? (((/* implicit */long long int) 118293065U)) : (2844548582938147162LL)));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 140737488338944LL))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((min((max((((/* implicit */unsigned long long int) var_12)), (arr_6 [i_0]))), (((/* implicit */unsigned long long int) min(((unsigned short)43066), (((/* implicit */unsigned short) (short)8902))))))), (((/* implicit */unsigned long long int) min(((unsigned short)43274), (((/* implicit */unsigned short) var_2)))))));
                }
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [6] [i_0] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) min(((~(arr_16 [i_0] [i_0] [i_0]))), (((var_9) << (((4055693611140533614LL) - (4055693611140533583LL)))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2844548582938147167LL)) && (((/* implicit */_Bool) (short)5027)))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_6)))))) : (((/* implicit */int) ((signed char) (unsigned short)24576)))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            arr_26 [8U] [i_0] [(unsigned short)4] = ((/* implicit */signed char) arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            arr_27 [i_0] [i_0] [i_0] [i_5] [i_0] [i_6] [i_8] = ((/* implicit */signed char) var_0);
                            arr_28 [i_1] [i_0] = ((/* implicit */unsigned short) max(((_Bool)0), ((_Bool)1)));
                            arr_29 [i_0] = ((/* implicit */long long int) (signed char)-87);
                        }
                        arr_30 [i_5] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3966377145U)));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) (-(min((min((((/* implicit */long long int) (_Bool)1)), (-2937228328595314670LL))), (((/* implicit */long long int) (short)23825))))));
                            arr_33 [i_0] [i_1] [i_0] [i_6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5286))) == (2786294709U)))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_4))))) : (((((/* implicit */_Bool) (unsigned short)60517)) ? (((/* implicit */int) (short)19787)) : (((/* implicit */int) (_Bool)0))))))));
                            arr_34 [i_0] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)16))))) >= (((((/* implicit */_Bool) min((4294967295U), (2274631208U)))) ? (((long long int) arr_5 [0U] [i_5] [i_6] [i_9])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)54476)) != (((/* implicit */int) var_10))))))))));
                            arr_35 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] [i_9] [i_9]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            var_19 -= ((/* implicit */unsigned short) ((long long int) (unsigned short)28723));
                            arr_39 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned short)25652))) > (((int) (short)-18320))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36813)) != (((/* implicit */int) (signed char)-44))));
                            arr_40 [i_0] [i_1] [i_5] [i_6] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-104)) || (((/* implicit */_Bool) var_11))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((518622313552395766LL) << (((((/* implicit */int) arr_9 [i_10 - 1] [12U] [i_10 + 1] [i_10] [i_10] [i_10] [i_10 - 1])) - (41512))))))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 15; i_11 += 4) /* same iter space */
                        {
                            arr_43 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */long long int) var_5);
                            var_22 -= ((short) ((((((/* implicit */_Bool) arr_19 [(short)2] [(short)2])) ? (((/* implicit */int) arr_9 [14U] [0U] [i_1] [0U] [0U] [i_6] [i_11 - 1])) : (((/* implicit */int) (signed char)-36)))) < (((/* implicit */int) var_4))));
                            var_23 = ((/* implicit */signed char) var_9);
                            arr_44 [i_0] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)57)) - (44)))))), (((((/* implicit */_Bool) (unsigned short)39886)) ? (-2937228328595314681LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36813)))))));
                            arr_45 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) min((var_2), (var_2))))));
                        }
                        arr_46 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */short) (((_Bool)1) ? ((+((-(var_3))))) : (((/* implicit */int) var_5))));
                        var_24 = ((/* implicit */unsigned short) 3626870719243047959ULL);
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12 - 1] = ((/* implicit */short) (unsigned char)9);
                        arr_50 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((min((arr_8 [i_0] [i_1] [i_5] [i_0]), (((/* implicit */unsigned int) var_11)))) <= (321149155U))))) >= ((((+(-4420483260259163472LL))) * (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned short)0)))))))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */unsigned char) max((min((var_11), (((/* implicit */unsigned short) arr_52 [i_13 - 1] [14LL])))), (((/* implicit */unsigned short) ((signed char) arr_47 [i_0] [i_1] [i_5] [i_13] [i_1])))));
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            arr_57 [i_0] [i_1] [i_1] [i_5] [3U] [i_0] = min((var_3), (((/* implicit */int) ((unsigned short) (signed char)104))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned short)25652))));
                        }
                        for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15444))) != (-8161424384038904946LL)));
                            arr_62 [i_0] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_0] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_13 - 1])) >= (-1149879157)))), (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) : (2991010406736501593ULL))))));
                            arr_63 [i_0] [i_13] [i_0] [9] [i_0] = ((/* implicit */signed char) ((unsigned short) ((unsigned char) max((((/* implicit */long long int) var_0)), (arr_56 [i_0] [i_0] [i_5] [i_5] [i_15] [i_15] [i_0])))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((arr_47 [i_0] [i_1] [i_13 - 1] [i_13] [(unsigned short)13]) >= (((/* implicit */long long int) arr_16 [i_13 - 1] [i_15] [i_13 - 1])))) ? (((((/* implicit */_Bool) arr_47 [i_0] [i_15] [i_13 - 1] [i_13 - 1] [i_0])) ? (2937228328595314681LL) : (((/* implicit */long long int) 1417965230)))) : (((long long int) var_2)))))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
                        {
                            arr_66 [i_16] [i_0] [i_0] [i_0] [i_0] = (unsigned short)28577;
                            var_29 += ((/* implicit */unsigned int) var_4);
                        }
                        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) 
                        {
                            arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((long long int) arr_41 [i_17] [(signed char)8] [(signed char)8] [i_0])) + (((/* implicit */long long int) ((/* implicit */int) ((short) -2937228328595314681LL))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_47 [i_17] [i_13 - 1] [i_5] [i_1] [i_0]) < (arr_47 [i_0] [i_0] [i_5] [i_13] [i_17])))))))));
                        }
                    }
                    arr_70 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) 1407317393)));
                    var_31 = ((/* implicit */short) arr_65 [(unsigned short)15] [i_1] [i_1] [i_1] [i_5] [i_0] [i_5]);
                    var_32 = ((/* implicit */unsigned short) max((var_10), ((short)31290)));
                }
            }
        } 
    } 
}
