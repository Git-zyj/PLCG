/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196982
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) : (arr_2 [i_0] [i_1])))) ? ((-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (arr_9 [i_1]) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)4))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_2 [i_0] [i_1]) <= (((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) (unsigned char)251)))))))), (((unsigned int) min((arr_4 [i_1] [i_2]), (((/* implicit */int) arr_1 [i_2])))))));
                            arr_15 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((unsigned long long int) arr_8 [i_0] [i_1] [i_1])))))));
                            var_18 = ((/* implicit */_Bool) (+(-1597332916)));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) max(((short)0), ((short)-1)))) > (((/* implicit */int) (_Bool)1))))) % (max((arr_9 [i_1]), (arr_6 [i_0] [i_1] [i_2] [i_3]))))))));
                        }
                    }
                } 
            } 
            arr_16 [i_0] = ((min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))), (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_0])))))) / (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_4 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned int) ((unsigned short) ((unsigned long long int) arr_0 [i_1])))))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) < (((unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        var_22 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_9 [i_0])))) ? (max((arr_2 [i_0] [i_0]), (arr_9 [i_0]))) : (min((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_0]))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */signed char) (~(((int) (signed char)104))));
        var_24 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    var_25 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_9 [i_6 + 1]))) / (((/* implicit */int) ((_Bool) arr_2 [i_6 + 1] [i_6])))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_6 + 1]))) ? (((/* implicit */unsigned int) min((arr_17 [i_6 + 1]), (((/* implicit */int) arr_18 [i_6 + 1]))))) : (((arr_21 [i_6] [i_6 + 1]) ^ (arr_21 [i_6] [i_6 - 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            arr_24 [i_7] = ((unsigned char) arr_17 [i_6 + 1]);
            /* LoopSeq 2 */
            for (short i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_6 [i_6] [i_6] [i_6] [i_6]))) ? (((((/* implicit */_Bool) arr_9 [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))) : (arr_27 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_6 + 1] [i_7 - 1] [i_8])) != (((/* implicit */int) arr_8 [i_6 - 2] [i_6 - 2] [i_6 - 2])))))) : (((((/* implicit */_Bool) 3333637846U)) ? (max((((/* implicit */unsigned long long int) (unsigned short)21465)), (arr_23 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21470)))))));
                var_29 = ((/* implicit */unsigned char) arr_25 [i_8] [i_7]);
            }
            for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                var_30 = ((/* implicit */short) ((unsigned int) (-(((unsigned int) arr_30 [i_6] [i_6])))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) ((unsigned char) ((int) arr_0 [i_9 + 1])));
                            var_32 = (-((+(((/* implicit */int) arr_8 [i_10 - 1] [i_10] [i_10])))));
                            var_33 = ((/* implicit */short) ((unsigned char) (((-(arr_3 [i_6]))) >= (((/* implicit */unsigned int) arr_19 [i_6 - 1] [i_7 - 1])))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_27 [6ULL]), (arr_26 [i_6] [i_6] [i_6]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_33 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6]))))))) ? (((/* implicit */int) ((short) arr_7 [i_6 - 2]))) : (((/* implicit */int) (((+(((/* implicit */int) arr_31 [i_6] [i_6])))) <= (((/* implicit */int) ((unsigned short) arr_0 [i_9]))))))));
                arr_35 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6 - 1] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_6])) != (((/* implicit */int) arr_32 [(short)8] [i_6] [i_6] [i_6] [i_9] [i_9 + 2])))))) : ((+(arr_21 [i_6] [i_6])))))), (((unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_9])))))));
                var_35 ^= ((/* implicit */short) ((unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_6] [i_7 - 1] [i_9]))))));
            }
        }
        var_36 = ((/* implicit */unsigned long long int) arr_26 [i_6 - 2] [i_6 + 1] [i_6 - 1]);
    }
}
