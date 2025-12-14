/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50377
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
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned short) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((1016765163) & (1016765164))) << (((/* implicit */int) ((-1016765146) == (145754297))))))) > (((((/* implicit */_Bool) ((unsigned char) arr_1 [(_Bool)1]))) ? (((262143ULL) * (arr_0 [(unsigned short)5]))) : (((/* implicit */unsigned long long int) -1016765162))))));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) -1016765163)) : (18446744073709289472ULL))) : (((((/* implicit */_Bool) -1016765163)) ? (((/* implicit */unsigned long long int) 1016765163)) : (18446744073709289490ULL)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_14 [i_2] [i_2] = ((/* implicit */long long int) 262123ULL);
                var_17 ^= ((/* implicit */unsigned short) arr_9 [i_1 - 1] [i_2] [i_3]);
            }
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                arr_19 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (-(1750095802)));
                arr_20 [i_2] = ((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_4]);
                var_18 ^= arr_4 [i_1 - 1] [i_2];
                var_19 = ((/* implicit */signed char) max((max((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */int) (_Bool)0)))), (1507264277)));
                arr_21 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [8] [8] [(unsigned short)13] [i_4])) ? (arr_13 [i_1] [3LL] [i_1] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 2])), (arr_7 [i_1 - 1] [i_2]))))))), (((max((262123ULL), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2])))) ^ (((/* implicit */unsigned long long int) arr_13 [i_4] [i_2] [i_1 + 2] [i_1]))))));
            }
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
                {
                    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((18446744073709289472ULL) < (18446744073709289512ULL))))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 1190621345126923974LL))));
                }
                arr_27 [11LL] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((-1349552645), (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))) - (((unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)51216)))))));
            }
            arr_28 [i_2] [i_2] [i_2] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -1016765149)) ? (-1LL) : (((/* implicit */long long int) 524287)))));
            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) 0LL)))))) ? ((~(((((/* implicit */_Bool) -6551431175309757425LL)) ? (961302972499974783ULL) : (((/* implicit */unsigned long long int) arr_3 [(unsigned short)5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_1] [(_Bool)1]) / (((/* implicit */unsigned long long int) 8408350858258113256LL))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_1 + 2] [i_1])), (-6106280104969125355LL))))))))));
        }
        for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_7] [i_7 - 1] [i_7 - 1]) > (((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) : (13866043575704619740ULL))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8408350858258113241LL)) ? (-1016765158) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (8658654068736LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))) : (((((/* implicit */_Bool) 1016765157)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) : (9641904161870122720ULL))))))))));
            arr_31 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) (_Bool)1))))) >= (arr_24 [i_1 - 1] [i_7 + 1])));
            arr_32 [(_Bool)1] [i_1] [i_7] = ((/* implicit */unsigned char) min((max((18446744073709289498ULL), (((/* implicit */unsigned long long int) ((9641904161870122720ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))))), (arr_0 [i_7])));
        }
        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            arr_35 [i_1 + 1] [i_1 + 1] = ((/* implicit */short) min((((max((17179869183LL), (((/* implicit */long long int) (unsigned short)3)))) / (((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1 + 2] [i_8 - 1] [i_1 + 2]))) & (2149882450946797904LL)))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [i_1] [i_1 + 1]))) : (arr_3 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-98)))))));
            arr_36 [i_1] [i_8 - 2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((9223372036854775778LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46437))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)30720)) && (((/* implicit */_Bool) arr_12 [(signed char)5] [i_8]))))))))), ((-(arr_0 [i_1 + 2])))));
        }
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            arr_39 [i_9] = ((/* implicit */signed char) (unsigned short)65534);
            arr_40 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)147)) >= (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (_Bool)1)))))) ? (((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_29 [i_1 + 1] [0ULL] [i_9])))) ? (max((((/* implicit */unsigned long long int) (signed char)124)), (3545871584457043443ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_1] [(short)5])) ? (((/* implicit */int) arr_38 [i_9])) : (((/* implicit */int) (unsigned char)196)))), ((+(((/* implicit */int) (unsigned char)60)))))))));
        }
        arr_41 [i_1 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)137), (((/* implicit */unsigned char) (signed char)-98)))))) : (((unsigned long long int) (signed char)102)))) | (((((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [10ULL] [i_1]))) >= (arr_1 [i_1]))) ? (arr_12 [i_1] [i_1]) : (((/* implicit */unsigned long long int) max((arr_1 [(unsigned short)17]), (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 - 1])))))))));
        arr_42 [(short)9] = ((((((/* implicit */int) (unsigned char)118)) * (((/* implicit */int) (_Bool)1)))) >= (max((arr_9 [i_1 - 1] [i_1 + 2] [i_1]), (arr_9 [i_1 + 1] [i_1 + 2] [(signed char)4]))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (((+((-(6735940359996804984LL))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (min((max((-5783208734323115406LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (0LL))))))));
}
