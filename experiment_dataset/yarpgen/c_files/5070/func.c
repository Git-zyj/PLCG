/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5070
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
    var_19 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                var_21 = ((/* implicit */_Bool) arr_5 [(_Bool)1]);
            }
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_4 + 3] [i_1] [i_1] [i_0])) ? (arr_6 [i_0] [(_Bool)1] [i_3] [i_4]) : (arr_6 [i_4] [i_3] [i_0] [i_0]))));
                    arr_13 [i_1] = ((/* implicit */signed char) -3966105392996887925LL);
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
                }
                for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_18 [i_1] = ((((/* implicit */_Bool) arr_6 [i_0] [13U] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [(unsigned char)11] [i_0 + 1])) : (arr_6 [i_0 - 1] [i_5] [i_3] [i_0 - 1]));
                    arr_19 [i_5] [i_1] [i_3] [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_7 [i_0] [i_0] [i_0] [i_1])));
                }
                arr_20 [i_1] [i_1] = arr_3 [i_1] [i_1];
            }
            for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
            {
                var_23 = (((-(((/* implicit */int) var_17)))) <= (((((/* implicit */_Bool) 1053802140)) ? (((/* implicit */int) arr_12 [i_1] [15U])) : (((/* implicit */int) arr_22 [i_0] [(signed char)12] [i_6 + 3])))));
                arr_23 [(short)4] [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_8 [(unsigned short)0] [i_6 + 1])) : ((+(((/* implicit */int) arr_21 [i_0] [i_6])))));
                var_24 = (unsigned char)62;
            }
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_25 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) (short)24407)) << (((((arr_15 [i_1] [i_1] [i_7]) & (-1053802154))) + (1070596012)))))) : (((/* implicit */short) ((((/* implicit */int) (short)24407)) << (((((((((arr_15 [i_1] [i_1] [i_7]) & (-1053802154))) + (1070596012))) + (2096934))) - (13))))));
                        var_26 = ((/* implicit */unsigned int) arr_11 [i_0 - 1]);
                        arr_29 [i_1] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) arr_28 [i_1] [i_1] [i_7] [i_8]);
                    }
                } 
            } 
            arr_30 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)28))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : ((-(var_15)))));
            arr_31 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) | (2430475801947541326LL)));
        }
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_15 [(unsigned short)4] [i_0 - 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [6] [6] [i_0 + 1] [i_0]))) : ((~(arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [(_Bool)0])))));
    }
    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_32 [i_9])))));
        var_29 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)66)))) ^ (((/* implicit */int) arr_34 [i_9] [i_9]))));
    }
    for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        var_30 = ((/* implicit */short) (((~(min((var_10), (((/* implicit */unsigned int) arr_34 [i_10] [i_10])))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_33 [i_10]), (((/* implicit */short) (signed char)111))))) ^ ((~(((/* implicit */int) (unsigned char)221)))))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)9)) ? (1867451766U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_10] [i_10])))))));
        arr_38 [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_33 [i_10]))))))));
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
        {
            arr_41 [i_10] [i_10] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)30057)) + (524272)))));
            var_32 = ((/* implicit */unsigned short) arr_40 [i_10]);
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
        {
            arr_44 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_10])) ? (arr_36 [i_10] [i_12]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_45 [i_10] [i_12] = ((/* implicit */int) arr_42 [i_10] [i_10]);
            arr_46 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_10] [i_10])) ? (((/* implicit */int) arr_37 [i_10])) : (((/* implicit */int) arr_39 [i_10]))));
        }
    }
}
