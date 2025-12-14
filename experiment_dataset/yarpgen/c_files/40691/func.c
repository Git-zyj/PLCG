/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40691
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
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) 2495834214U)) > (var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_13 += ((unsigned long long int) 2495834222U);
                        var_14 = ((/* implicit */unsigned short) arr_8 [i_2] [i_1] [i_2] [(unsigned short)7]);
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */signed char) (short)16383);
                            var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16383))) & (arr_2 [i_2 + 2] [i_2 + 2] [i_1]));
                            var_17 += ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)49342)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
                            var_18 = ((-1) < (1380213011));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_1] &= ((/* implicit */_Bool) ((arr_4 [i_2 + 2] [i_2 + 1] [i_2 + 3]) / (((/* implicit */unsigned long long int) 2495834214U))));
                            var_19 += ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1)))));
                            var_20 = ((/* implicit */signed char) ((int) var_10));
                            var_21 -= ((/* implicit */unsigned short) var_10);
                        }
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((var_4) ^ (((((/* implicit */_Bool) -1412086032)) ? (((/* implicit */int) var_7)) : (var_2)))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) -1412086032)) : (644825597U))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65517))))) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49342)))));
                            var_25 = ((/* implicit */short) ((_Bool) (-(var_10))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                {
                    var_26 = ((/* implicit */short) 7901456206286201464LL);
                    var_27 *= 0U;
                }
            } 
        } 
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) : (var_9)))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [(short)3] [(short)3])) : (((var_9) >> (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        arr_29 [i_10] |= ((/* implicit */unsigned long long int) (~(((arr_27 [i_10] [i_10]) & (((/* implicit */unsigned int) var_2))))));
        var_29 = ((((((/* implicit */_Bool) arr_28 [i_10] [i_10])) ? (arr_27 [i_10] [i_10]) : (arr_27 [i_10] [i_10]))) / (((/* implicit */unsigned int) var_10)));
        /* LoopSeq 3 */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_30 = ((/* implicit */long long int) (((~(2495834222U))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
            var_31 = ((/* implicit */unsigned long long int) var_2);
            var_32 = ((/* implicit */unsigned short) (~((-(var_8)))));
        }
        for (long long int i_12 = 1; i_12 < 23; i_12 += 4) 
        {
            var_33 &= ((/* implicit */unsigned long long int) min((((var_2) >> (((var_8) + (1029342858))))), (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_7)))))));
            arr_36 [i_12] = ((2147483647) > (((/* implicit */int) (signed char)-120)));
            arr_37 [i_12] = ((/* implicit */unsigned short) min(((+(((((/* implicit */int) (_Bool)1)) ^ (2147483647))))), ((-(((/* implicit */int) arr_35 [i_10] [i_12 + 1] [i_12 + 1]))))));
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                var_34 = ((/* implicit */unsigned short) ((unsigned long long int) 1412086022));
                arr_41 [i_10] [i_12] [i_13] |= ((/* implicit */unsigned long long int) var_7);
            }
            for (signed char i_14 = 2; i_14 < 23; i_14 += 1) 
            {
                arr_46 [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min((var_11), (((/* implicit */long long int) var_3)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_42 [i_12] [i_12])) : (((/* implicit */int) var_3)))) : (((int) ((((/* implicit */_Bool) 1412086031)) || (((/* implicit */_Bool) var_3)))))));
                arr_47 [i_14] [i_12] [i_12] [i_10] = 544430063U;
                var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(4294967295U))) & (2147479552U))))));
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (((((-(var_2))) + (2147483647))) << ((((((((!(var_7))) ? ((-(((/* implicit */int) (_Bool)1)))) : (arr_45 [(unsigned short)16] [(unsigned short)16] [i_12 + 1]))) + (30))) - (29))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2495834211U))))) : (1488979366)));
                    var_38 = ((/* implicit */signed char) (short)25579);
                    var_39 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)))))) >= (2215270859340758506LL))) ? (((((/* implicit */unsigned long long int) ((var_7) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) / (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) var_11)))))) : (((((/* implicit */_Bool) ((unsigned short) arr_42 [i_12] [i_14]))) ? (min((18224131092878255471ULL), (((/* implicit */unsigned long long int) 4294967280U)))) : (((/* implicit */unsigned long long int) var_1))))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_8))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [5ULL] [5ULL] [i_14 - 2] [i_14]))) / (arr_31 [i_10] [i_12 + 1])))));
                    arr_53 [i_16] [i_16] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_14 - 1])) << (((((/* implicit */int) (unsigned short)65535)) - (65520)))))) >= (((((/* implicit */_Bool) arr_49 [i_10] [i_12 - 1] [i_14])) ? (((((/* implicit */_Bool) 1019094312U)) ? (((/* implicit */unsigned long long int) -1412086023)) : (var_9))) : (min((((/* implicit */unsigned long long int) var_3)), (3492976462382771660ULL)))))));
                }
            }
            for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                arr_56 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1412086032)), (15396654254277815504ULL)))) || (((/* implicit */_Bool) (-(248ULL))))));
                arr_57 [9LL] [i_12] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((var_4), (var_8)))))) ? ((~(((/* implicit */int) arr_43 [i_12] [i_12 - 1] [i_17])))) : ((~(((/* implicit */int) arr_35 [i_12 + 1] [i_12] [i_12]))))));
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((arr_31 [i_10] [i_18]) * (((/* implicit */unsigned long long int) 3509644305U)))) << ((((-(var_10))) - (1398463589))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_64 [i_18] [i_18] = ((/* implicit */int) ((unsigned int) arr_54 [i_19]));
                var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((4294967266U) << (((604310792U) - (604310770U))))))));
            }
        }
        var_44 = ((/* implicit */unsigned long long int) (unsigned short)49342);
    }
    for (int i_20 = 0; i_20 < 15; i_20 += 3) 
    {
        var_45 = ((/* implicit */int) min((var_45), (var_10)));
        var_46 &= ((/* implicit */int) (((-(min((var_9), (((/* implicit */unsigned long long int) 1416278629)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_20])) << (((arr_65 [6ULL] [i_20]) - (2067801188))))))));
        arr_68 [i_20] = ((/* implicit */unsigned int) (+(1488979373)));
        var_47 = ((/* implicit */unsigned int) (unsigned short)14704);
    }
}
