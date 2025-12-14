/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24532
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)28702)) && (((/* implicit */_Bool) -166247793))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_1)))))))));
    var_14 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) != (-166247793)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)237)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_4);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5133005150211629681ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3340))) : (455628294074803507LL))) - ((+(var_3)))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((arr_5 [12ULL] [i_1]) / (arr_5 [23LL] [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((arr_5 [i_2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((-166247806) <= (((/* implicit */int) (_Bool)0)))) && (((/* implicit */_Bool) var_3))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (((arr_9 [i_2]) + (((/* implicit */unsigned long long int) arr_2 [i_2])))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2] [i_2])) >> (((var_6) + (486795381)))))) - (((arr_5 [i_2] [i_2]) >> (((arr_6 [i_2]) - (15571966223019973086ULL)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */short) var_5);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_4))));
                            var_18 += ((/* implicit */short) ((((/* implicit */int) arr_0 [23LL] [i_3])) >> (((((arr_6 [i_6]) | (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_4] [i_3]))))))) - (15608276740130839013ULL)))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_6))));
                        }
                        arr_22 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((var_6) ^ (((((/* implicit */int) arr_14 [5U] [5U] [11ULL])) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [(unsigned char)12])) : (((/* implicit */int) var_10))))))));
                    }
                } 
            } 
            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3269281554U)) || ((_Bool)1)));
            var_21 = ((/* implicit */long long int) arr_14 [i_2] [(_Bool)1] [i_2]);
            arr_23 [i_2] [i_2] = ((/* implicit */long long int) var_2);
        }
        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            arr_26 [i_2] [i_7] [i_2] = ((/* implicit */unsigned char) (+(((((arr_13 [i_2] [i_2] [i_2]) + (((/* implicit */unsigned int) arr_2 [i_2])))) + (((/* implicit */unsigned int) var_11))))));
            arr_27 [i_2] [(_Bool)1] [i_2] |= ((/* implicit */unsigned short) var_7);
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - ((+(((/* implicit */int) var_10)))))))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_30 [i_2] [(short)20] [i_2])) : (((/* implicit */int) arr_1 [(unsigned short)23] [i_8]))))) ? (arr_9 [i_8]) : (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
            var_24 |= ((/* implicit */short) ((arr_28 [i_8] [i_8]) + (arr_28 [i_8] [i_8])));
        }
        var_25 = ((/* implicit */signed char) ((arr_10 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (+(arr_5 [12ULL] [i_2]))))))))));
    }
    for (short i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_9])) & (var_6))))));
        var_27 = ((/* implicit */short) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (13ULL))))) >= (((/* implicit */unsigned long long int) 5547129014032021181LL))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-56)) >= (((/* implicit */int) (_Bool)0))));
        var_29 = ((/* implicit */short) (+(((arr_2 [i_9]) & (arr_2 [i_9])))));
    }
}
