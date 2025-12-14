/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35669
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? (((((((/* implicit */_Bool) (unsigned short)39940)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39931))) : (arr_0 [i_0] [6LL]))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)913))))) : (min((((/* implicit */long long int) (unsigned short)25595)), (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [(unsigned char)1] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4503462188417024ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)0] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))) : (3698608273015284084ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2]))))))));
                    arr_11 [i_1] [(signed char)1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) var_4)), (var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [(unsigned short)9] [i_1])));
                    arr_12 [i_1] [i_1] [i_2] [i_1] = var_0;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_14 [i_0] [i_0]))));
                                var_14 = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (arr_0 [i_0] [i_3]) : (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))));
                                arr_18 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_2 [i_3] [i_1]);
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((/* implicit */short) arr_5 [i_0] [i_0]);
                }
            } 
        } 
        var_15 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_2), ((unsigned char)10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(unsigned char)0]))) : (((unsigned int) var_9))))));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [(signed char)3])) ? (((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */long long int) 4031771070U)) : (arr_21 [(unsigned char)3]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_23 [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) ((long long int) 1076798963)));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) arr_20 [i_5]))), ((((!(((/* implicit */_Bool) arr_20 [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5])) && (((/* implicit */_Bool) arr_20 [i_5]))))) : (var_11))))))));
    }
    var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)3307)) : (var_11))) : (((((/* implicit */int) (unsigned short)40000)) - (643479030)))))));
    /* LoopSeq 2 */
    for (int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294934528U)) != (((((/* implicit */_Bool) arr_25 [i_6])) ? (2964975092740967768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39927))))))))) : (arr_0 [i_6] [(unsigned char)7])));
        /* LoopSeq 2 */
        for (short i_7 = 2; i_7 < 8; i_7 += 2) 
        {
            arr_31 [i_6] = ((/* implicit */unsigned char) (((+(arr_2 [i_6] [i_7]))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)914))))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)39940)) + (((/* implicit */int) (unsigned short)11690))));
        }
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            arr_34 [i_6] [i_8] [i_6] &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                arr_38 [i_9] [i_8] [i_9] = ((/* implicit */short) arr_26 [i_6]);
                var_20 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)26575))))));
            }
        }
    }
    for (int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
    {
        arr_41 [i_10] |= ((/* implicit */unsigned int) var_2);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_10] [0ULL] [i_12] [i_12])))))));
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) var_3);
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_45 [(short)8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)58363)))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_11] [i_12])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_39 [i_13])) - (19418))))) : (((((/* implicit */int) arr_7 [i_13])) | (((/* implicit */int) arr_15 [i_10] [i_11] [i_12] [i_10] [i_11])))))) - (1409286127)))));
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) ((min((((var_5) ? (((/* implicit */int) (short)-6223)) : (-1899939504))), (((/* implicit */int) var_0)))) == ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (var_11)))))));
    var_25 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_8))) : (((/* implicit */long long int) var_11)))));
}
