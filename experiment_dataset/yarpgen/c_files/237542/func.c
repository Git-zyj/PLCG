/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237542
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
    var_14 = max(((+(var_8))), (((/* implicit */long long int) var_6)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3 + 1] [i_3 - 1] [i_3])) ? (2612640609U) : (arr_7 [11LL] [11LL] [i_3 + 1] [i_3 - 1] [i_3 + 1])));
                        arr_9 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 1]));
                    }
                    var_16 = ((/* implicit */_Bool) max((((arr_6 [i_0] [i_0] [i_1] [i_2] [i_0]) >> (((((/* implicit */int) max(((unsigned char)139), (var_11)))) - (136))))), (((/* implicit */long long int) max(((unsigned short)5284), (((/* implicit */unsigned short) (unsigned char)81)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (2612640609U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_4]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))) & (var_8))))), (((/* implicit */long long int) max((arr_10 [i_4]), (arr_10 [i_4]))))));
        arr_13 [i_4] = ((/* implicit */long long int) var_3);
    }
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_15 [i_5 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6]))) : (var_2))), (((((/* implicit */long long int) ((int) arr_10 [i_5]))) + (((long long int) 1407009525))))));
            arr_20 [i_5] [i_5] [i_6] = max((((((/* implicit */_Bool) max((((/* implicit */int) arr_19 [i_5 + 1] [i_5] [i_5])), (-693040772)))) ? ((+(((/* implicit */int) var_3)))) : (max((((/* implicit */int) (unsigned char)117)), (var_13))))), (((/* implicit */int) ((unsigned char) arr_15 [i_5 + 2]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_23 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_3), ((unsigned char)249))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1])) && (((/* implicit */_Bool) arr_14 [i_5 + 2] [i_7])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_5 + 3])) / (((/* implicit */int) (unsigned char)235))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 + 2] [i_7])) ? (((/* implicit */unsigned int) -1898572596)) : (0U))))))) : (((/* implicit */int) arr_10 [i_7]))));
            var_18 = ((/* implicit */unsigned int) (+(arr_11 [i_5 + 1] [i_5 + 1])));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) -1960291283791873635LL))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 2; i_8 < 22; i_8 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) var_6);
            var_21 = ((/* implicit */int) arr_18 [i_5 + 3] [i_5 + 3]);
        }
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
        {
            arr_29 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_5 - 1])) < (((/* implicit */int) (signed char)50))));
            arr_30 [(signed char)5] [23LL] [i_5 + 3] = ((/* implicit */short) ((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) arr_16 [i_5 - 1])) - (38)))));
            arr_31 [i_9] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_24 [i_5] [i_5])))) ? (((/* implicit */int) arr_18 [i_5] [i_9 - 2])) : (((/* implicit */int) (unsigned char)20))));
            /* LoopSeq 2 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                arr_36 [i_5] [i_5 + 3] [i_5] [7U] = ((var_9) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_9] [i_10]))))));
                arr_37 [i_10] [i_9] [i_5 + 3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5 + 1] [i_5] [i_9 - 2] [(_Bool)1]))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_10)) : (arr_28 [i_9] [i_10])))));
                arr_38 [i_5] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 2752719270U))) ? ((-(((/* implicit */int) (unsigned char)61)))) : (((/* implicit */int) ((signed char) arr_14 [i_5 + 2] [i_10])))));
                var_22 = ((/* implicit */unsigned short) ((arr_33 [i_5 + 1] [i_5 + 3]) >= (5U)));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_43 [i_9 + 2] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) -6716887162412004627LL)) || (((/* implicit */_Bool) arr_40 [i_5] [i_9] [i_11] [i_5]))))) << (((/* implicit */int) arr_10 [i_5 + 2]))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_41 [i_11]))));
            }
        }
    }
    /* LoopNest 2 */
    for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        for (long long int i_13 = 3; i_13 < 24; i_13 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)61502)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_45 [20LL])) * (((/* implicit */int) arr_10 [i_13]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 32766)) ? (((/* implicit */int) arr_45 [i_12])) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_12] [i_13 - 2]))) : (var_7))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_47 [i_13 - 2] [i_13])))))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_13 - 3] [i_13 + 1])) * (((/* implicit */int) arr_48 [i_13 - 3]))))) ? (((((/* implicit */int) arr_45 [i_13 - 3])) >> (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_45 [i_13 - 1])))))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_2))));
                }
                arr_51 [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)102)) == (((/* implicit */int) (unsigned char)51)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))) : (15ULL)));
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_46 [i_13 - 2] [i_13])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_12] [i_13])) + (((/* implicit */int) var_5)))))))))));
                var_28 = ((/* implicit */int) ((((/* implicit */int) arr_45 [i_12])) > ((~((+(((/* implicit */int) arr_47 [i_12] [i_12]))))))));
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (+(max((((((/* implicit */int) var_3)) & (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (var_2)))))))))));
            }
        } 
    } 
}
