/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201902
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_12 += ((((/* implicit */int) arr_5 [i_0 - 1])) == (((/* implicit */int) arr_2 [i_0 + 1])));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (signed char)-51);
                            var_14 = ((/* implicit */long long int) ((1894130240) <= (((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */_Bool) var_10);
                            arr_16 [i_3 + 1] [i_3] [13LL] = ((/* implicit */signed char) ((1894130250) - (((/* implicit */int) var_11))));
                            arr_17 [i_4] [i_3] [i_3 - 1] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3])) && (((/* implicit */_Bool) arr_0 [i_0 - 2]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))));
                        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6] [i_7])) ? (((/* implicit */int) arr_23 [7ULL] [i_5] [i_7])) : (((/* implicit */int) arr_5 [i_0])))));
                    }
                } 
            } 
            arr_26 [i_0] [i_5] [i_5] = ((/* implicit */long long int) -1894130241);
            var_18 = ((/* implicit */long long int) ((int) -1894130240));
        }
        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((-1894130219) > (-1894130240)));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -370388587)) ? (min((max((arr_25 [i_0] [i_8] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_23 [i_0 - 1] [i_0 + 2] [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) ? (((long long int) var_11)) : (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_8] [i_8]))) + (arr_27 [i_0] [i_0])))))))))));
        }
        arr_31 [(short)7] = ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) max(((signed char)-54), (((/* implicit */signed char) arr_11 [i_0] [i_0 + 2] [i_0] [i_0]))))) : ((-(((/* implicit */int) (signed char)48))))));
        arr_32 [i_0 - 1] = ((/* implicit */unsigned char) arr_21 [i_0 + 1] [i_0 + 2]);
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_35 [i_0] [i_0])) ? (max((arr_22 [i_9]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)5] [i_9] [i_0]))))) : (((/* implicit */unsigned long long int) ((int) arr_25 [i_0] [i_0] [i_0] [i_9])))));
            var_22 = ((/* implicit */_Bool) arr_20 [i_0] [i_9] [i_9]);
            arr_36 [i_0] [i_9] [i_9] = ((/* implicit */long long int) -1894130240);
            var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)56)), (3408637934974890252LL)));
            var_24 = ((/* implicit */long long int) (((!(arr_8 [i_0 - 1] [i_0 - 2] [i_0] [i_0]))) ? (min((1894130239), (((/* implicit */int) var_3)))) : (((/* implicit */int) max((arr_6 [i_0 + 1]), (((/* implicit */unsigned char) arr_8 [i_0 + 2] [i_0] [i_0] [i_0])))))));
        }
        for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            var_25 = ((/* implicit */signed char) arr_12 [i_10]);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_28 [i_0 + 1])))) > (((/* implicit */int) arr_28 [i_0 - 1]))));
            arr_39 [(_Bool)1] [i_10] [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)12314)));
        }
    }
    for (signed char i_11 = 2; i_11 < 15; i_11 += 2) /* same iter space */
    {
        var_27 -= ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_11))))) : ((+(((/* implicit */int) var_3)))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_11 - 2])) && (((/* implicit */_Bool) var_5)))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                {
                    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_11 - 2])) || (((/* implicit */_Bool) arr_42 [i_11 - 1])))))));
                    arr_48 [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_47 [i_11 + 1] [i_11 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_11] [i_11 + 2])))))) : (((((/* implicit */_Bool) arr_33 [i_11 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11 - 1]))) : (arr_0 [i_11 - 2])))));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(unsigned char)10] [i_12] [i_13] [i_12])) << (((((/* implicit */int) (signed char)119)) - (103)))))) ? ((~(min((arr_0 [i_13]), (((/* implicit */unsigned int) arr_37 [i_11] [i_11] [i_11])))))) : (((/* implicit */unsigned int) max((-1894130219), (1894130240)))))))));
                }
            } 
        } 
    }
    for (signed char i_14 = 2; i_14 < 15; i_14 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) 0ULL);
        var_31 = ((/* implicit */unsigned char) 717551088U);
    }
    var_32 = ((/* implicit */long long int) max((1894130239), (2147483646)));
    var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_1)) + (((/* implicit */int) var_11))))));
}
