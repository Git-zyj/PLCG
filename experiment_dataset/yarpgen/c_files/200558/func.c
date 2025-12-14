/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200558
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [1LL] [i_2] [i_2] = ((/* implicit */signed char) max((arr_1 [i_2]), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_15)), (5320970810736884017LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551609ULL)))))))))));
                    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5320970810736884018LL)) && (((((/* implicit */_Bool) arr_6 [i_0])) && (arr_7 [i_0 - 2] [i_1] [(unsigned short)7]))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5320970810736884018LL)) ? (5320970810736884016LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))) ? (((arr_5 [10LL] [i_1] [10]) | (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_9 [i_0 - 2] [i_1] [i_2])))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) (short)32767);
    }
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_2))));
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((long long int) (short)15693)) / ((+(704000620696494608LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4])) / (((/* implicit */int) arr_11 [i_3]))))) || (((/* implicit */_Bool) (short)-3449))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)246))))))))));
            var_21 = ((/* implicit */unsigned short) (~(max((min((5320970810736884016LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (signed char)-28))))));
        }
        arr_16 [i_3 + 1] [i_3] = var_15;
    }
    for (signed char i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        var_22 = ((/* implicit */int) max((6790760466177236368ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_13 [i_5 + 3] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)16752)) : (((/* implicit */int) (short)-32760)))), (((((/* implicit */int) arr_14 [17LL] [(_Bool)1])) * (((/* implicit */int) arr_11 [i_5])))))))));
        var_23 = ((/* implicit */long long int) ((unsigned int) (short)32742));
    }
    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-17800)) < (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_19 [i_6]))))))) ? (((unsigned int) (!(((/* implicit */_Bool) arr_11 [i_6]))))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) arr_17 [i_6 + 2])))))))));
        var_25 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_11 [i_6 + 2]))))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
            {
                var_26 += ((_Bool) (-(((/* implicit */int) (unsigned short)9483))));
                arr_28 [(signed char)0] [i_7] [i_6] [(signed char)0] = ((/* implicit */short) var_11);
                var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-3426)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8]))) / (6790760466177236360ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (arr_22 [(unsigned char)15] [i_7] [i_7])))))), (((/* implicit */unsigned long long int) var_3))));
                var_28 = ((/* implicit */long long int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)0))));
            }
            var_29 = arr_14 [i_6] [i_7];
            var_30 = ((/* implicit */_Bool) (((!(arr_12 [i_6] [i_7 - 2]))) ? ((-(((/* implicit */int) (signed char)101)))) : ((~(((/* implicit */int) (signed char)103))))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            arr_31 [i_6] [i_6] = ((/* implicit */short) ((long long int) var_7));
            /* LoopSeq 2 */
            for (short i_10 = 2; i_10 < 17; i_10 += 2) 
            {
                var_31 = ((/* implicit */short) arr_12 [i_6 + 3] [(signed char)9]);
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    arr_38 [i_6] [i_10] |= ((/* implicit */signed char) arr_32 [i_6 + 4] [i_9] [i_11]);
                    var_32 += ((unsigned char) 11655983607532315248ULL);
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        var_33 += ((/* implicit */unsigned short) arr_22 [i_11] [(unsigned char)5] [i_6]);
                        var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4481483144548583125LL)))))));
                        arr_42 [i_6] [i_6] [i_6] [i_6] = (-(((/* implicit */int) arr_36 [i_6])));
                        var_35 = ((/* implicit */_Bool) 18ULL);
                    }
                    for (signed char i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        var_36 |= arr_20 [i_11];
                        var_37 *= ((/* implicit */unsigned short) ((short) ((14547714962034421216ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_11] [i_6]))))));
                    }
                    var_38 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) 11655983607532315262ULL)))));
                }
                arr_46 [i_6] [i_6] [5LL] [i_6 + 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [1LL] [i_10] [i_6] [(unsigned short)17] [(unsigned short)17])) && (((/* implicit */_Bool) arr_36 [i_6])))))));
                var_39 = ((/* implicit */long long int) ((arr_44 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1]) | (((/* implicit */int) arr_34 [i_6] [i_10] [i_6] [i_10 + 2] [i_6 + 2]))));
            }
            for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) arr_41 [i_6] [i_6 + 3] [i_6 - 1] [i_6] [i_6] [i_6] [i_6]);
                arr_49 [i_6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65533))));
                var_41 |= (-(((/* implicit */int) ((short) 1613936045))));
            }
            var_42 = ((/* implicit */signed char) (((-(((/* implicit */int) var_1)))) & (((/* implicit */int) ((((/* implicit */int) arr_15 [i_6])) == (((/* implicit */int) var_6)))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_15 = 1; i_15 < 18; i_15 += 4) 
        {
            var_43 = ((/* implicit */_Bool) max((var_43), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)203)) - (172)))))) ? (var_16) : (((/* implicit */long long int) (~(arr_44 [(_Bool)1] [i_15 + 1] [i_15 - 1] [i_6 + 2] [i_6 - 1] [i_6 + 2])))))))))));
            arr_52 [i_15] [(unsigned short)16] |= ((/* implicit */unsigned long long int) arr_15 [i_6]);
        }
    }
    var_44 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 969559098U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (var_11))))), (((/* implicit */long long int) min((((((/* implicit */int) var_6)) & (((/* implicit */int) var_13)))), (((((/* implicit */int) (signed char)66)) << (((11655983607532315226ULL) - (11655983607532315215ULL))))))))));
}
