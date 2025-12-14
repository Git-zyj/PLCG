/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244997
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) var_7);
        var_16 = arr_1 [i_0];
        var_17 = ((/* implicit */unsigned char) ((((unsigned int) (unsigned short)52891)) > (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1212894946042242439LL))))))))));
        var_18 = (+((-((~(((/* implicit */int) var_13)))))));
        var_19 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) (unsigned short)29722)))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (1212894946042242445LL)))), (var_7))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (1890151278U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))))))));
        arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(230240018599009566LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238))))) : (((/* implicit */int) ((((/* implicit */_Bool) 230240018599009566LL)) && (((/* implicit */_Bool) arr_3 [i_1])))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(1212894946042242449LL)))) ? (((((/* implicit */_Bool) 0)) ? (230240018599009577LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 31)) ? (((/* implicit */long long int) -773751092)) : (1212894946042242438LL)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 4; i_3 < 15; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((signed char) arr_0 [9U] [i_3 - 1])))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((long long int) var_6)))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) == (((int) 0))));
            var_25 -= ((/* implicit */unsigned char) arr_6 [i_2] [i_3]);
            var_26 = ((/* implicit */unsigned long long int) (+(var_8)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_27 ^= ((/* implicit */long long int) (unsigned short)60764);
            var_28 = ((/* implicit */long long int) ((int) -1266335877));
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_4])) ? (31) : (((/* implicit */int) (unsigned short)62914))))) ? (((/* implicit */int) arr_9 [i_2] [i_4])) : (((/* implicit */int) (unsigned char)244)));
            var_30 = ((/* implicit */unsigned short) ((arr_6 [i_2] [i_4]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)4))));
        }
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))) : (1682650300U)));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            var_32 -= ((/* implicit */long long int) arr_8 [i_2] [i_5 - 2]);
            arr_14 [i_2] [i_5] = ((/* implicit */unsigned short) ((arr_5 [i_5] [i_5 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 - 1])))));
            var_33 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 592637966))))));
            arr_15 [i_2] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 7595243345733976758LL)) ? (-230240018599009543LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_5])))))));
        }
    }
}
