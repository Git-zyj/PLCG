/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235452
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
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) (unsigned short)11848)) : (((/* implicit */int) min(((unsigned short)53687), (((/* implicit */unsigned short) var_7))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)50), ((signed char)38)))) ? (((/* implicit */int) max((((unsigned short) 13319501882337223507ULL)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)11848)))))))) : (((/* implicit */int) (unsigned short)13827))));
        arr_5 [(signed char)3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)13850)) ? (min((((/* implicit */int) arr_0 [i_0])), (3))) : (((/* implicit */int) ((unsigned char) (unsigned short)13846))))) & (1073217536)));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) : (min((var_12), (((/* implicit */int) ((signed char) var_8)))))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (-(5127242191372328108ULL))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((int) (~(5378485414137097257LL)))) : (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) (_Bool)1);
            arr_13 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_2]);
        }
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1242382527320801560ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11848)) || (((/* implicit */_Bool) -2891868520547336223LL))))) : (((((/* implicit */int) arr_18 [i_3 - 3] [i_3 - 3])) / (arr_22 [i_1] [i_5] [i_4] [i_5] [i_3 - 2] [i_5])))));
                            arr_24 [i_3] [i_3] = (~(((((/* implicit */_Bool) (short)1)) ? (arr_16 [i_3]) : (((/* implicit */int) (unsigned char)169)))));
                            var_26 -= ((/* implicit */unsigned long long int) arr_21 [i_1] [i_3 - 1] [i_4] [8] [i_6]);
                        }
                        var_27 += ((/* implicit */int) ((((/* implicit */int) ((max(((_Bool)1), ((_Bool)1))) && (((/* implicit */_Bool) var_8))))) > (((((/* implicit */_Bool) 818043700)) ? (-818043700) : (((/* implicit */int) (signed char)-67))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_18 [i_1] [i_3 + 1]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned char) arr_22 [i_1] [i_3] [i_1] [(_Bool)1] [(_Bool)1] [i_1])))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [(signed char)6]), ((unsigned char)255))))) / (arr_8 [i_3])))))))));
                            var_30 += ((/* implicit */_Bool) ((unsigned long long int) min((arr_17 [i_1] [i_3 - 1] [i_3 + 1]), (arr_26 [i_3 - 3] [i_1] [i_3 - 1] [i_3 - 3] [i_1] [i_3]))));
                            var_31 = ((/* implicit */signed char) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_1] [i_5] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)29292)) ? (arr_19 [i_8] [i_5] [i_3] [i_1]) : (((/* implicit */int) (_Bool)1))))));
                            var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10079214720520123677ULL)) ? (-818043696) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4])))))))) && (((/* implicit */_Bool) var_7))));
                            var_33 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967295U)), (var_8)))) ? (((((/* implicit */int) arr_25 [i_8] [i_1] [i_4] [i_1] [i_1])) / (((/* implicit */int) (unsigned short)9152)))) : (((/* implicit */int) (unsigned short)2044)));
                            arr_30 [i_1] [i_3] [i_1] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((unsigned short) arr_20 [i_4] [i_4] [i_4] [(unsigned short)4] [i_4]))) ? (((((/* implicit */_Bool) 12824951051068224924ULL)) ? (((/* implicit */unsigned long long int) -4815148587110750499LL)) : (889307882916529842ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)3)))))))) : (((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) arr_20 [i_1] [i_3] [i_1] [i_3 - 1] [i_8])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_3 - 3] [i_4])))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [4U] [4U] [i_5] [i_3 - 1] [i_3] [i_3] [i_1])) ? (max((0ULL), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)162))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -186999249)) ? (((/* implicit */int) max(((unsigned short)21258), (((/* implicit */unsigned short) (unsigned char)34))))) : (((((/* implicit */_Bool) -3012564013370675172LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_3] [i_3])))))))));
                            var_34 = ((/* implicit */long long int) (_Bool)1);
                            var_35 = (((((_Bool)1) && (((/* implicit */_Bool) arr_3 [i_1] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36243)) || ((_Bool)1)))) : (((/* implicit */int) (_Bool)1)));
                            arr_36 [i_1] [i_1] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (signed char i_12 = 3; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_46 [i_3] [i_3] = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_17 [i_1] [i_3 - 1] [i_12])))))) : (((/* implicit */int) (unsigned short)11848))));
                            arr_47 [i_1] [i_3] [i_3] [i_11] [i_12] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7342)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)48587)) : (((/* implicit */int) (unsigned short)52652)))), (((((/* implicit */_Bool) arr_10 [i_3 - 3])) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_10])) : (((/* implicit */int) arr_17 [i_3] [i_3 - 3] [i_3 - 1])))));
                            arr_48 [(unsigned char)2] [(unsigned char)2] [i_10] [i_10] [i_12 + 1] [i_3] [i_3] = max(((+(((/* implicit */int) (unsigned short)3149)))), (((/* implicit */int) min((arr_34 [i_12 - 2] [i_3 + 1]), (arr_34 [i_12 - 2] [i_3 + 1])))));
                            arr_49 [i_3] [i_11] [i_10] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) << (((/* implicit */int) arr_23 [i_1] [(signed char)0] [i_3 - 2] [i_3 - 2] [i_3 - 2])))))));
                        }
                    } 
                } 
            } 
            arr_50 [i_3] [i_3] [i_3 - 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_25 [i_3 + 1] [i_3] [i_3 - 3] [i_3] [i_3 - 1])))) & (((((/* implicit */_Bool) (+(arr_41 [i_3 + 1] [i_3] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51708))) : (var_18)))) : (arr_33 [i_3 - 3] [i_1] [i_3] [i_1] [i_1])))));
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 2; i_15 < 9; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (~(var_17))))));
                        var_38 = ((/* implicit */int) 723323369U);
                    }
                    var_39 *= ((/* implicit */unsigned int) max(((unsigned short)59193), ((unsigned short)51722)));
                    var_40 = ((/* implicit */unsigned char) ((unsigned long long int) max(((+(895195200))), (max((-1078047781), (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned char i_16 = 1; i_16 < 11; i_16 += 3) /* same iter space */
                {
                    arr_59 [i_3] = ((/* implicit */unsigned char) ((long long int) arr_23 [i_3 - 3] [i_3 - 2] [i_3 - 2] [i_3 - 2] [(_Bool)0]));
                    arr_60 [i_3] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_16 - 1])) ? (((/* implicit */int) arr_20 [i_1] [i_3] [i_3 - 2] [i_16 - 1] [i_16])) : (((/* implicit */int) (unsigned char)86))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((int) arr_58 [i_1] [i_3] [i_13] [i_16 + 1]))))) : (var_2)));
                    arr_61 [i_1] [i_3] [i_3] [i_3] = (+((~(((/* implicit */int) (unsigned short)13812)))));
                }
                /* vectorizable */
                for (unsigned char i_17 = 1; i_17 < 11; i_17 += 3) /* same iter space */
                {
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (((_Bool)1) ? (((var_5) / (((/* implicit */int) (unsigned short)53675)))) : ((-(((/* implicit */int) (signed char)-124)))))))));
                    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)59735))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3 + 1] [i_3]))) : (var_18)));
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) var_0))));
                    var_44 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 1757339940U)) ? (-9012048164717331504LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65509))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) arr_20 [6U] [6U] [i_13] [i_17] [i_3])) : (arr_19 [7LL] [i_3] [i_3] [i_3 - 1]))))));
                }
                var_45 = ((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned short)53687)), (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned int) ((int) 895195200)))))) % (max((max((19ULL), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) var_19)))));
            }
            var_46 = ((/* implicit */int) max((var_46), (((((((/* implicit */_Bool) arr_40 [i_1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_1] [i_1])) : ((-2147483647 - 1)))) ^ (max(((-2147483647 - 1)), (((/* implicit */int) arr_25 [i_3 - 2] [i_1] [i_3] [8] [i_1]))))))));
        }
        arr_64 [4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6317620726384597773LL)) ? (((/* implicit */int) (unsigned short)53682)) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((long long int) (unsigned char)15))));
        arr_65 [i_1] = ((/* implicit */unsigned long long int) ((signed char) var_13));
    }
}
