/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218230
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
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) ((((var_15) ? (var_2) : (((/* implicit */int) var_4)))) < (((int) var_13))))))))));
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39050)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((long long int) arr_0 [(unsigned short)13] [(unsigned short)13]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)14] [13LL])) ? (((/* implicit */int) (unsigned short)26486)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)26485)) > (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)26485)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)39050))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_4 [i_1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [(short)6] [i_2]))))) : (((/* implicit */int) min((arr_8 [i_1] [i_2] [i_2]), (arr_1 [i_2]))))))) ? (var_5) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned short)26486)) : (((/* implicit */int) (unsigned short)26485))))));
            arr_9 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)39048))));
            var_20 = ((/* implicit */_Bool) arr_1 [i_2]);
        }
        for (short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26488)) ? (((((/* implicit */_Bool) (unsigned short)39065)) ? (((/* implicit */int) (unsigned short)39049)) : (((/* implicit */int) arr_3 [i_3])))) : (arr_6 [i_1])))));
            var_22 = ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_3]);
            var_23 *= ((/* implicit */short) var_0);
        }
        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((((long long int) arr_7 [i_4])) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39050)) >> ((((~(((/* implicit */int) (unsigned short)26483)))) + (26495))))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)39059), (((/* implicit */unsigned short) arr_1 [i_4 - 2]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4 - 1])) ^ (((/* implicit */int) arr_1 [i_4 + 1])))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_6 [i_4 - 1])) < (((long long int) (unsigned short)26487))));
        }
        arr_14 [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1]);
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1]))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_17 [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_15 [i_1] [i_5])))));
            var_28 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (unsigned short)26486)) >> (((((/* implicit */int) (unsigned short)39061)) - (39052))))));
            arr_18 [(unsigned short)1] = arr_12 [i_1] [i_5] [i_5];
        }
        for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_6])) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (var_2) : (((/* implicit */int) (unsigned short)26483)))) - (((/* implicit */int) (unsigned short)26486))));
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    {
                        arr_30 [i_1] [i_6] [i_7] [i_8] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6 - 1] [i_8 - 1] [i_8]))) > (arr_24 [i_6 - 1] [i_6] [i_8])))) : (((/* implicit */int) arr_3 [15LL])));
                        arr_31 [i_8 - 1] [i_6] [i_6] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_29 [i_6] [i_7] [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) arr_24 [i_1] [i_6] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) arr_8 [i_1] [i_6 + 1] [i_7])))))))) >> ((((~(((/* implicit */int) arr_0 [i_1] [(signed char)11])))) + (10796)))));
                        var_30 *= ((/* implicit */signed char) ((short) ((_Bool) ((((/* implicit */int) (unsigned short)39049)) >= (((/* implicit */int) (unsigned short)39049))))));
                        arr_32 [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)39064)) > (((/* implicit */int) (unsigned short)26485))))) < (((/* implicit */int) (unsigned short)26487))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) (unsigned short)39033);
        }
    }
    for (short i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
    {
        var_32 ^= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_10 [(short)16] [i_9])) : (((/* implicit */int) (unsigned short)26486)))) >> (((((/* implicit */int) (unsigned short)39042)) - (39016))))), (((/* implicit */int) ((arr_21 [(_Bool)1]) < (((/* implicit */int) arr_19 [i_9] [11] [i_9])))))));
        var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_9] [i_9] [1LL])) ^ (((((/* implicit */_Bool) ((signed char) (unsigned short)39048))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (var_13))))) : (((((/* implicit */_Bool) (unsigned short)39052)) ? (arr_34 [i_9]) : (((/* implicit */unsigned long long int) arr_21 [(signed char)10]))))))));
        var_34 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (arr_34 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26486))))) : (((/* implicit */unsigned long long int) arr_26 [i_9] [i_9] [i_9]))))));
    }
    for (short i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
    {
        var_35 ^= ((/* implicit */_Bool) (unsigned short)26486);
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_10] [i_10])) ^ (((/* implicit */int) (unsigned short)39050))))) ? (((((/* implicit */_Bool) (unsigned short)39035)) ? (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_10] [i_10] [i_10]))))) : (max((arr_33 [i_10] [i_10]), (((/* implicit */unsigned int) (unsigned short)39050))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)39033)), ((~(((/* implicit */int) (unsigned short)39050))))))) : (max((arr_33 [i_10] [i_10]), (((/* implicit */unsigned int) ((int) arr_19 [i_10] [i_10] [i_10])))))));
        var_37 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)26475)), (((arr_34 [i_10]) ^ (((/* implicit */unsigned long long int) arr_23 [i_10] [i_10] [i_10] [i_10]))))));
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_10] [i_11])) - (((/* implicit */int) arr_25 [i_10] [i_11]))))) ? (((((/* implicit */_Bool) max((arr_23 [i_10] [i_11] [i_12] [10LL]), (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39064)) >> (((((/* implicit */int) (unsigned short)26486)) - (26462)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_33 [i_12] [(_Bool)1])) : (arr_5 [i_10]))))) : (((long long int) (unsigned short)39049))));
                var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_10)))));
            }
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (unsigned short)39050))))) < ((~(((/* implicit */int) (unsigned short)26484))))));
        }
        for (short i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
        {
            var_41 ^= ((((/* implicit */_Bool) ((long long int) arr_19 [(unsigned char)10] [i_13] [i_10]))) ? (((((/* implicit */_Bool) arr_24 [i_13] [i_13] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_24 [i_10] [i_13] [i_13]))) : (((/* implicit */unsigned int) arr_35 [i_10])));
            arr_44 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)39050))));
            arr_45 [i_10] [i_10] = ((/* implicit */long long int) arr_8 [i_10] [i_13] [i_13]);
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) var_14))));
        }
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39050)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)39033)) >= (((/* implicit */int) arr_22 [(unsigned char)0] [(short)8]))))) : (((/* implicit */int) ((unsigned char) (unsigned short)39040)))))) < (((((/* implicit */_Bool) (unsigned short)26485)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_10]))) ^ (arr_36 [14]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_10])) ? (((/* implicit */unsigned int) arr_26 [i_10] [i_10] [i_10])) : (arr_33 [i_10] [i_10])))))))))));
    }
    var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39050)))))));
    var_45 ^= ((/* implicit */long long int) var_15);
}
