/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36185
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((int) (+(((/* implicit */int) (_Bool)1))))))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4LL]))) : (arr_0 [i_0])))) ? (((/* implicit */int) (signed char)-5)) : (((((/* implicit */int) (unsigned short)49152)) >> (((/* implicit */int) arr_1 [2])))))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_0]) << (((((/* implicit */int) var_3)) - (18859))))))));
            arr_8 [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_1]);
            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) > (((((/* implicit */_Bool) (unsigned short)7545)) ? (((/* implicit */unsigned long long int) 894762951)) : (10910038942662940801ULL))))))))))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_13 &= ((/* implicit */int) 9223372036854775801LL);
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0] [i_1] [(short)4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)52505)) : (((/* implicit */int) arr_2 [i_0])))))));
                var_15 = ((/* implicit */signed char) ((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 2]))))))));
            }
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                var_16 = ((/* implicit */int) (+(var_7)));
                var_17 = ((/* implicit */unsigned char) var_2);
                var_18 = ((/* implicit */unsigned int) -1LL);
                arr_15 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_3 - 1])) ? (((((/* implicit */_Bool) 68719476735LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)7545)))))));
            }
            /* vectorizable */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)6247)))));
                var_19 += ((/* implicit */unsigned int) ((signed char) arr_9 [i_0 + 2]));
            }
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) var_1);
            var_21 += ((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned short)58508)) >> (((arr_4 [i_0 - 2] [i_5]) - (3680875513U))))));
            arr_22 [0U] &= ((/* implicit */short) ((unsigned long long int) min((var_4), (((/* implicit */short) ((signed char) arr_5 [0LL] [i_5] [i_5]))))));
            var_22 = ((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59295)) ? (((/* implicit */int) ((arr_23 [i_0] [2ULL] [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6])))))) : (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3] [i_0]))));
            arr_25 [i_0] [i_0] [i_0] = (+(arr_20 [i_0 + 2] [i_0] [i_0 + 1]));
        }
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_24 *= ((/* implicit */unsigned long long int) max((min((arr_13 [i_0] [i_0 - 1] [(_Bool)1] [i_0 + 2]), (arr_13 [i_0 + 2] [i_0] [4ULL] [i_0 - 2]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4)))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_0] [i_7] [i_0 + 2]), (arr_23 [i_0] [i_7] [i_0 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6247))) : (((((/* implicit */_Bool) 4294967285U)) ? (645512926680381680LL) : (((/* implicit */long long int) -1299613354))))));
            var_26 = (((+(max((var_8), (((/* implicit */unsigned long long int) var_6)))))) << ((((~((~(var_5))))) - (1386288805U))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 3; i_8 < 7; i_8 += 3) 
            {
                arr_31 [(_Bool)1] |= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [0] [i_7] [i_7])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (4294967290U)))), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (6272309654838302340ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)0]))))));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8 - 2] [i_8 + 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) -645512926680381683LL)) ? (((/* implicit */int) ((65535LL) >= (-645512926680381674LL)))) : (((/* implicit */int) ((-645512926680381708LL) != (((/* implicit */long long int) min((2113747909), (((/* implicit */int) (unsigned short)59266)))))))))))));
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (((+((~(arr_0 [i_0]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (((unsigned int) (unsigned short)57193))))))))));
                arr_32 [i_0] [i_7] = ((/* implicit */short) 9223372036854775805LL);
            }
            for (unsigned short i_9 = 2; i_9 < 7; i_9 += 3) 
            {
                var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_34 [i_0]))));
                arr_35 [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((var_5) + (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)65535)))))))));
                var_31 = ((/* implicit */unsigned char) max(((+(arr_23 [i_9 + 3] [i_9 + 2] [i_9 + 1]))), (((/* implicit */unsigned long long int) var_1))));
            }
            arr_36 [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_16 [i_0] [i_0 - 2] [i_0] [i_0 - 3])) > (((/* implicit */int) (unsigned char)255))))));
        }
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) min((((arr_37 [i_10] [i_10]) ? (17232092586884380810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10] [i_10]))))), (((/* implicit */unsigned long long int) (~(-1987446508)))))))));
        var_33 -= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */int) arr_37 [i_10] [i_10])) - (((/* implicit */int) (signed char)0)))) : ((-(((/* implicit */int) (unsigned short)1024)))))));
    }
    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        arr_41 [i_11] [i_11] |= ((/* implicit */int) ((unsigned int) 1073741824));
        var_34 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_39 [i_11])) || (((/* implicit */_Bool) arr_39 [i_11])))));
        var_35 *= arr_37 [i_11] [i_11];
    }
    for (int i_12 = 2; i_12 < 10; i_12 += 3) 
    {
        var_36 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_42 [i_12 - 2])) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) arr_38 [i_12 + 1])))) >> (((((int) arr_40 [i_12 - 1])) - (314061531)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            var_37 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_38 [i_12]))))))) ? (max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) -1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
            var_38 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)7017)))));
        }
        for (signed char i_14 = 2; i_14 < 9; i_14 += 3) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) -1987446510))))) && (((/* implicit */_Bool) min((var_7), (arr_45 [9ULL]))))))) == (((/* implicit */int) arr_42 [i_12]))));
            var_40 = ((/* implicit */unsigned long long int) (((~(var_0))) << ((((~(((/* implicit */int) var_3)))) + (18911)))));
        }
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((33554368), (((/* implicit */int) (unsigned short)58506))))) ? (((((/* implicit */_Bool) arr_39 [i_12 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_39 [i_12 - 2])))) : (((/* implicit */int) ((short) var_4)))));
        var_42 = ((((/* implicit */_Bool) -1987446519)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_12])) ? (((/* implicit */int) (unsigned short)7028)) : (((/* implicit */int) arr_43 [(unsigned short)7]))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)104))) / (144115188075855871LL))))));
    }
    var_43 = ((/* implicit */signed char) ((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) ((short) var_9)))))) + ((-(var_1)))));
    var_44 = ((/* implicit */_Bool) -1832621034945267832LL);
    var_45 = ((/* implicit */short) (+((((-(var_7))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))))));
    var_46 = ((/* implicit */unsigned char) (unsigned short)57193);
}
