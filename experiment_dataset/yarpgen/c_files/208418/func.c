/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208418
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) 3171770742U)) || (((/* implicit */_Bool) 8643381332413758744ULL)));
        var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-1310093602465407506LL)))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1073740800ULL) : (((/* implicit */unsigned long long int) var_5)))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)43708)), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)52544)) : (((/* implicit */int) arr_6 [i_3])))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(var_5)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17))))) ? ((+(7ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_1]))))))));
                    arr_11 [i_1] = ((/* implicit */int) var_8);
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)45))))) ? (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) var_16))))));
        arr_13 [i_1] = ((/* implicit */unsigned short) (_Bool)0);
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            arr_18 [i_5] [i_5 + 4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1605750986448133692LL)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (_Bool)1))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073740791ULL)) && (((/* implicit */_Bool) -1739766001)))))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_4] [i_4]), (((/* implicit */long long int) (signed char)122))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 1] [i_5 + 2]))) : (arr_2 [i_5 + 4] [i_6 - 1])))) || (((/* implicit */_Bool) ((arr_19 [i_4] [i_6 + 1] [i_5]) >> (((/* implicit */int) (_Bool)1)))))));
                            arr_26 [i_6] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (+((-(((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_6])), (arr_9 [9] [i_5] [i_5]))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 3) 
            {
                var_24 = arr_23 [i_4] [i_5 + 4] [i_5] [i_5 + 3] [i_5] [i_9];
                arr_29 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_34 [i_5] [i_5 - 1] [i_10] [i_5] = ((/* implicit */int) (_Bool)1);
                arr_35 [i_10] [i_5] [i_10] [i_5] = ((((/* implicit */unsigned int) (~(((1739766001) << (((arr_2 [i_5] [i_4]) - (8831580576612122416ULL)))))))) / (((((((/* implicit */int) var_7)) == (((/* implicit */int) var_10)))) ? ((-(arr_16 [i_5] [i_4]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))))));
            }
        }
        arr_36 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_14 [i_4])))) : ((-(((/* implicit */int) var_16))))))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_19 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) (unsigned short)65531)))))))))));
        arr_37 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_4] [i_4]))) ? ((+(((/* implicit */int) arr_1 [i_4] [i_4])))) : ((~(((/* implicit */int) arr_1 [i_4] [i_4]))))));
    }
    for (unsigned short i_11 = 3; i_11 < 14; i_11 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)20521)) : (((/* implicit */int) (signed char)-50))))) && (((/* implicit */_Bool) var_15))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -954928610)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (unsigned char)247)))) & (((/* implicit */int) arr_24 [i_11] [i_11]))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11] [(unsigned char)14] [i_11 + 1] [i_11 - 1] [i_11])))));
        arr_41 [i_11 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_16 [2U] [i_11 - 3])))) ? ((~((~(arr_7 [i_11] [i_11 - 2] [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_22 [i_11 + 1]))))));
        /* LoopSeq 3 */
        for (int i_12 = 4; i_12 < 14; i_12 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)29))))) ? ((-(4026146492U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_44 [i_11 - 3])), (arr_25 [i_12] [i_12] [i_11 - 2] [i_12] [i_11]))))))) >> (((((/* implicit */int) var_15)) - (23591)))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)163))))) + ((-(arr_19 [i_12 - 1] [i_12 - 2] [i_12])))))) ? ((+(1073740800ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))));
            arr_46 [i_11] [i_12 - 2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((long long int) (unsigned char)160))) ? (((/* implicit */int) (!(arr_8 [i_11 + 2])))) : (((((/* implicit */int) var_9)) << (((18446744072635810816ULL) - (18446744072635810815ULL)))))))));
            arr_47 [i_12] = ((unsigned char) (~(((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (unsigned int i_13 = 2; i_13 < 13; i_13 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) || (((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11] [i_11] [i_13] [i_13]))) <= (var_6)))));
            var_30 -= ((/* implicit */unsigned int) (+(arr_19 [i_11 + 2] [i_13 + 1] [(short)6])));
            arr_50 [i_11 - 2] [i_11] [i_13] = ((/* implicit */unsigned int) var_6);
            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_14 = 1; i_14 < 14; i_14 += 4) 
        {
            var_32 = ((/* implicit */unsigned short) var_7);
            arr_55 [i_11 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        }
        arr_56 [(_Bool)1] [i_11] = ((/* implicit */unsigned int) max((((((_Bool) arr_51 [i_11])) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) (-(517401926U)))))), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
    }
    var_33 = var_9;
    var_34 = var_7;
}
