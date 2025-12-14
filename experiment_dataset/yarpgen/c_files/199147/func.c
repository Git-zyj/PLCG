/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199147
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5804))))) : (((/* implicit */int) min((var_12), (var_4))))));
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)89)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_9 [i_1] [(short)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (short)32048))) ? (((((/* implicit */int) var_4)) >> (((/* implicit */int) ((_Bool) var_10))))) : ((-(((/* implicit */int) (signed char)71))))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((long long int) (short)29132)), (((/* implicit */long long int) ((short) arr_6 [16ULL] [i_1] [i_2] [i_3]))))))));
                        arr_10 [i_0] [i_0] [i_0] [(unsigned short)7] = ((/* implicit */unsigned int) ((unsigned short) (signed char)-89));
                        var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_7)))) || (arr_8 [i_0])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)-71))))), (((arr_3 [13ULL] [i_1]) >> (((/* implicit */int) var_3))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_16 [i_5] [i_4] [0LL] = ((/* implicit */unsigned short) ((long long int) (unsigned short)27211));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1])) < (((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_4 - 3] [i_4 + 2] [i_4 - 3])) ? (((arr_1 [6ULL] [6ULL]) >> (((((/* implicit */int) arr_7 [i_0] [i_4] [1])) - (137))))) : (((/* implicit */unsigned long long int) arr_12 [i_4 + 2] [i_4 - 2] [i_4 - 2] [2ULL]))))));
                        arr_17 [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) ((int) arr_7 [i_0] [i_1] [i_5]))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))), (max((((/* implicit */long long int) (unsigned short)24071)), (arr_6 [(unsigned short)13] [i_5] [i_5] [1LL])))))));
                    }
                } 
            } 
        }
        arr_18 [i_0] = min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (arr_8 [(signed char)9])))), (((((/* implicit */int) arr_8 [i_0])) << (((/* implicit */int) arr_8 [i_0])))));
        var_18 = max((max((((/* implicit */unsigned long long int) arr_0 [(unsigned char)8])), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) arr_5 [i_0])));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            for (long long int i_8 = 3; i_8 < 24; i_8 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8 + 1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (-768205786)))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89)))))))) ? (((((((/* implicit */int) var_12)) < (((/* implicit */int) (signed char)3)))) ? (((/* implicit */int) ((unsigned short) 2739648924U))) : (((/* implicit */int) ((unsigned short) var_6))))) : (((/* implicit */int) arr_21 [i_8 - 3]))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned char) (_Bool)0);
                                var_21 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */int) min((var_6), ((unsigned short)27206)))), ((-(((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    arr_33 [i_8 + 1] [(_Bool)1] [i_7] [(unsigned short)15] = ((/* implicit */unsigned short) arr_26 [i_7] [i_8]);
                    arr_34 [i_7] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-23329)) ? (arr_30 [i_8 - 3] [(signed char)16] [i_8 - 3] [i_8 - 3] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_8 - 1] [i_7]))))), (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_28 [i_8] [i_8] [i_8 - 1] [i_7 + 1] [i_6])) : (arr_22 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_6])) <= (((/* implicit */int) (short)32060)))))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_25 [i_6])))))));
                    arr_35 [i_6] [i_7] [i_8 - 1] = (+(((/* implicit */int) max((var_10), (arr_28 [i_8] [i_8 - 3] [i_8 + 1] [i_8 + 1] [i_7 - 2])))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((1555318372U), (((/* implicit */unsigned int) (_Bool)1)))))));
        arr_36 [i_6] [i_6] &= ((/* implicit */unsigned long long int) max((((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [(signed char)4] [i_6] [(signed char)4])) : (((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_6] [(signed char)2]))))), (((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) var_8))))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] = ((((((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_11] [i_11])) >> (((((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_11] [(signed char)23])) - (38))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_19 [i_11])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32062))) != (var_1)))))) - (78))));
        var_23 += ((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-72)) + (83))))), (((min((((/* implicit */int) arr_38 [i_11])), (348501859))) - (((((/* implicit */_Bool) arr_25 [i_11])) ? (-348501850) : (-1)))))));
    }
}
