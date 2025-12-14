/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220652
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)19890))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (short)19878))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2 - 1]))) : (((unsigned long long int) (short)-19890))));
                    }
                } 
            } 
            arr_13 [i_1] = ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL));
        }
        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) max((10285884034092594460ULL), (((/* implicit */unsigned long long int) (short)19890)))))));
            var_11 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (var_9)));
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)176))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) arr_7 [2LL] [2LL] [2LL] [i_0]))));
            arr_16 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_5 [i_0] [i_4 + 1]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_7 [i_0] [0LL] [i_0] [i_0]))))))))), (min((((/* implicit */long long int) ((unsigned char) var_2))), (max((var_8), (((/* implicit */long long int) (unsigned short)65515))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */long long int) (-2147483647 - 1))) % (4957255661748146363LL)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5 - 1])) | (((/* implicit */int) arr_1 [i_5 + 1]))))))))));
                arr_19 [i_4] [i_4] [(signed char)0] [(signed char)0] |= ((/* implicit */unsigned long long int) (~(((long long int) min((var_5), (((/* implicit */unsigned long long int) -604395499794281167LL)))))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((_Bool) ((unsigned long long int) 1299322625775211614LL))) ? (min((((long long int) (_Bool)1)), (((/* implicit */long long int) ((unsigned short) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(8192113939992872188LL))))))));
                            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-19891))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-19892)) + (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))))) : ((~(4003034019U)))))) >= (((unsigned long long int) max((-8524549294236349087LL), (((/* implicit */long long int) arr_3 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    var_16 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10156057153478204033ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)98)))))));
                    var_17 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) || ((_Bool)1)));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 3; i_10 < 13; i_10 += 4) /* same iter space */
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_21 [i_4 + 1] [i_6 + 2])) ? (min((11473316875665177351ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : ((+(var_5))))), (((/* implicit */unsigned long long int) ((518553075063273336LL) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)228))))))))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 0ULL);
                    }
                    for (long long int i_11 = 3; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((min((arr_34 [i_4] [i_4] [i_4] [i_6 + 1]), (((/* implicit */unsigned long long int) var_0)))) / (((/* implicit */unsigned long long int) (+(arr_15 [i_4 + 1] [i_6 + 2]))))));
                        var_19 *= ((/* implicit */unsigned char) ((long long int) ((unsigned int) var_6)));
                        var_20 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) max((((/* implicit */long long int) (short)19890)), (var_0)))))));
                    }
                    for (long long int i_12 = 3; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_0) >= (arr_10 [i_6 + 1] [i_12 - 3] [i_6 + 1] [i_6 + 1]))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_9] [i_6])) ? (((unsigned long long int) arr_28 [i_12 + 1] [i_6 + 2] [i_6 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((2592633535969085814ULL), (((/* implicit */unsigned long long int) (unsigned char)3)))) == (((/* implicit */unsigned long long int) var_0))))))));
                        var_22 = ((/* implicit */short) ((_Bool) (-(min((((/* implicit */long long int) (_Bool)1)), (-8192113939992872188LL))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_6 - 1])) > (var_7)))))))));
                    var_24 = ((/* implicit */signed char) (_Bool)1);
                }
                var_25 += ((/* implicit */signed char) 2147483647);
            }
            for (unsigned short i_13 = 4; i_13 < 12; i_13 += 1) 
            {
                var_26 = ((((((/* implicit */_Bool) min(((unsigned short)60014), (((/* implicit */unsigned short) var_3))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) + (var_6));
                var_27 = ((/* implicit */short) max((((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((1683313740U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101)))))))) ? (((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) arr_18 [i_4])), (var_6))) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((var_0), (((((/* implicit */_Bool) 247352865900928437ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-4886413710451436965LL)))))));
            var_29 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_47 [i_0] [i_14] [i_14])) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_14]))))));
            arr_51 [i_0] [i_0] = ((/* implicit */unsigned char) ((2147483647) - (208892397)));
            var_30 = ((/* implicit */unsigned char) -9223372036854775804LL);
        }
        /* vectorizable */
        for (unsigned char i_15 = 1; i_15 < 12; i_15 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)215))));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_15 + 3]))))))));
        }
        for (unsigned char i_16 = 1; i_16 < 12; i_16 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned long long int) ((long long int) var_4));
            arr_56 [i_0] [i_0] [i_0] = var_7;
        }
        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
        {
            arr_60 [i_0] = ((/* implicit */_Bool) -2147483645);
            var_34 ^= ((/* implicit */long long int) var_4);
        }
    }
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
    {
        var_35 = ((((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13173199143236369209ULL))) ^ (((/* implicit */unsigned long long int) ((long long int) var_6))));
        arr_65 [i_18] [i_18] = ((/* implicit */signed char) ((unsigned char) ((2275264131U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))));
        /* LoopSeq 3 */
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) 
        {
            var_36 = ((/* implicit */long long int) -2147483630);
            var_37 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_19] [i_19] [i_19]))) + (var_0))) > (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)196)))))));
        }
        for (unsigned long long int i_20 = 1; i_20 < 14; i_20 += 4) 
        {
            var_38 = ((/* implicit */unsigned long long int) ((_Bool) (short)26188));
            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) >= (1ULL))))));
        }
        for (unsigned char i_21 = 1; i_21 < 13; i_21 += 3) 
        {
            arr_72 [i_21] [14ULL] |= ((/* implicit */unsigned long long int) ((long long int) (+((-2147483647 - 1)))));
            arr_73 [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((unsigned char) arr_70 [i_18] [i_21 + 1]));
            arr_74 [i_18] = ((/* implicit */long long int) (~(arr_64 [i_18] [i_18])));
        }
    }
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) (unsigned char)65))))) < (min((((var_5) - (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_9))))));
    var_41 = ((/* implicit */_Bool) ((long long int) ((_Bool) ((6796220911418046865ULL) >> (((((/* implicit */int) var_4)) - (83)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 3) 
    {
        arr_79 [i_22] = arr_70 [(unsigned char)6] [(unsigned char)6];
        var_42 ^= var_3;
    }
    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
    {
        arr_82 [i_23] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)-20)), (6257023599606311989ULL)));
        var_43 = ((/* implicit */unsigned char) ((((_Bool) var_9)) ? (((((((/* implicit */long long int) arr_81 [i_23] [i_23])) < (4202244920978516212LL))) ? (((11498405090341358084ULL) << (((var_0) - (3484645268900549852LL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 0)), (3703179598U)))))) : (((((/* implicit */_Bool) (unsigned char)197)) ? (((((/* implicit */_Bool) 11498405090341358084ULL)) ? (10096690748641682792ULL) : (1084053588724528043ULL))) : (((/* implicit */unsigned long long int) ((var_1) / (var_1))))))));
        var_44 = ((/* implicit */unsigned int) var_2);
        arr_83 [i_23] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -250881586527528900LL))))), (((int) var_4))));
        var_45 ^= ((/* implicit */unsigned short) max((((long long int) var_1)), (max((((/* implicit */long long int) (unsigned char)59)), (447519044879513668LL)))));
    }
}
