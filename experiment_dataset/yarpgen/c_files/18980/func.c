/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18980
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
    var_18 = var_17;
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)239)) * (((((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */int) var_16)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_10))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)163);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((var_2), ((unsigned char)17)))) : (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (((((-6527671280075794135LL) & (var_5))) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] = (~(((/* implicit */int) ((unsigned short) -4695763712018535830LL))));
            var_21 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned short)65535)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) var_9)))))));
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7096)) ? (((/* implicit */int) (unsigned char)255)) : (arr_5 [i_1 - 1]))))));
        }
        for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            arr_14 [i_1] [(unsigned short)8] [i_3 + 3] = ((/* implicit */int) ((arr_11 [i_1]) > (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))) % (var_5)))));
            arr_15 [i_3 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)18))));
            arr_16 [i_3] = ((/* implicit */long long int) (-(arr_5 [i_1 + 4])));
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_21 [i_1] [18LL] &= ((/* implicit */unsigned char) arr_12 [i_1 + 4]);
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)255))) / (((/* implicit */int) arr_12 [i_1 - 3]))));
            arr_22 [i_4] = arr_0 [i_4];
        }
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) ((unsigned char) arr_27 [i_7 - 3] [i_7] [i_7 - 2] [i_7]));
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (arr_18 [i_7 + 1] [(unsigned char)11]) : (arr_18 [i_7 - 1] [i_5])));
                        arr_30 [i_1] [i_6] [(unsigned char)2] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7] [i_7 - 3] [i_1 + 3] [i_1 + 3]))) : (arr_1 [i_1 + 2])));
                    }
                } 
            } 
        } 
        arr_31 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [3LL] [i_1 + 4]))));
    }
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 22; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_38 [i_9] [i_9] [i_9])))), (((/* implicit */int) arr_40 [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */int) ((unsigned char) min((var_17), ((unsigned char)212))))) : (((int) ((((/* implicit */_Bool) 1237642166)) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) arr_38 [i_9] [i_10] [i_11])))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((unsigned char) 278673535))));
                        var_28 -= ((/* implicit */unsigned char) min((max((arr_34 [(unsigned char)6] [(unsigned char)6]), (var_1))), ((-(((/* implicit */int) min(((unsigned char)255), (arr_35 [18LL]))))))));
                    }
                } 
            } 
        } 
        var_29 ^= ((/* implicit */unsigned short) ((long long int) min((((/* implicit */int) (unsigned short)6659)), (arr_33 [i_8]))));
        var_30 = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_12])) ? (-627772463816859161LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
        var_32 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_43 [i_12]))));
        arr_44 [i_12] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_42 [i_12])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174)))));
        arr_45 [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) -2004614070260622086LL))));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (((-5355871397580724829LL) & (((/* implicit */long long int) arr_43 [i_12])))) : (((((/* implicit */_Bool) arr_42 [(unsigned short)11])) ? (arr_42 [i_12]) : (arr_42 [i_12])))));
    }
}
