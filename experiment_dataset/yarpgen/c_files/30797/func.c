/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30797
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((+((((_Bool)1) ? (arr_1 [(signed char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26582))))))) * (((/* implicit */unsigned long long int) (-(min((779894000), (1469012170)))))))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_1] = max((min((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57453)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_2 [i_1] [i_1]))))))));
            var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (3467227530U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : ((-(arr_2 [i_0] [i_1]))))) : ((+(max((-7799086525447525523LL), (((/* implicit */long long int) (signed char)115))))))))));
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */_Bool) (-(arr_1 [i_0])));
            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_2]), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? ((-(arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_0]) : (14216669980499275731ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0]))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))));
            arr_11 [i_0] [i_3] = ((/* implicit */long long int) ((signed char) var_15));
            var_24 -= ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0]))));
            arr_12 [i_0] [i_3] = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_3 [i_0])));
        }
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_16 [i_0])))), (((/* implicit */int) min((var_15), ((unsigned short)15503))))))) <= (var_9)));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */int) var_16))))) || ((!(((/* implicit */_Bool) arr_16 [i_0])))))))));
        }
        var_26 = (~((+(max((((/* implicit */unsigned long long int) var_12)), (var_9))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)38))) + (-7799086525447525524LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) var_15)))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(arr_35 [i_8 + 1] [i_8] [i_8] [i_6] [i_6]))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((!((_Bool)0))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (short)-26625)))))));
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_9])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_6] [i_5])))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) ((arr_4 [i_5]) <= (arr_4 [i_5])));
            }
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) arr_37 [16U] [i_6] [5ULL]))))) ? (((/* implicit */unsigned long long int) arr_18 [(short)14])) : (((4230074093210275866ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))))))))));
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_25 [i_6]))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) != (var_13)))))))));
                var_33 = ((/* implicit */unsigned short) var_10);
                arr_39 [i_5] [i_6] [i_10] [i_10] = ((/* implicit */unsigned int) ((arr_21 [i_5]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_22 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_15)))))));
            }
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
            {
                arr_42 [i_5] [i_5] [i_6] [i_11] = ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)751))) : (2472134492U));
                arr_43 [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)174)) ? ((-(arr_18 [i_11]))) : (((/* implicit */int) ((short) arr_22 [i_5] [i_6] [i_11])))));
                var_34 -= ((/* implicit */unsigned int) (_Bool)1);
                arr_44 [i_11] [i_6] = ((/* implicit */_Bool) ((unsigned char) 10786859617916987309ULL));
            }
            arr_45 [i_5] [i_5] [i_6] = ((/* implicit */signed char) arr_6 [i_5] [i_6] [i_5]);
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5] [i_5] [(unsigned char)16] [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_5]))) : (5623781071576717794LL)))) ? (arr_32 [i_5] [i_6] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_6]))))))));
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (signed char)105)) : (985676470)));
        }
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
        {
            arr_49 [i_12] = ((/* implicit */unsigned short) (!(arr_10 [i_12] [i_12])));
            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5]))));
            var_38 |= ((/* implicit */signed char) 18446744073709551615ULL);
        }
        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned long long int) var_6);
            arr_54 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047))) % (144063096U)));
            var_40 |= ((/* implicit */signed char) arr_4 [i_5]);
            var_41 = ((/* implicit */signed char) arr_40 [i_13] [i_13] [i_5]);
        }
        var_42 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) && (((/* implicit */_Bool) 3110816530U))));
    }
    var_43 = ((/* implicit */long long int) 0ULL);
}
