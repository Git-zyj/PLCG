/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45318
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((2451737627U) % (1843229684U))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (1843229664U))))));
        var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(0U)))) && ((_Bool)1)));
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 9223372036854775807LL)))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-38)) / (786432)))));
        var_16 = (-((-((+(15))))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * ((+(7387570784154045397LL)))));
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)6)) > (-1599934073)))), (max((288195191779622912ULL), (((/* implicit */unsigned long long int) 1576187155532999033LL))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            arr_14 [i_3] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)248))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17788)) + (((/* implicit */int) (unsigned short)47743))))) != (-9223372036854775805LL))))));
            var_20 *= ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)43)))) ^ (((/* implicit */int) ((((/* implicit */int) (short)-23000)) >= (((/* implicit */int) (unsigned short)30743)))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */int) (~(((2199023255551LL) & (((/* implicit */long long int) 1843229664U))))));
            var_22 = ((/* implicit */int) ((unsigned int) (unsigned short)31845));
            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((long long int) (short)14343)))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (unsigned char)255))) * (((/* implicit */int) (_Bool)0))));
            var_26 *= ((/* implicit */unsigned long long int) ((16U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
            var_27 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)11))))) & ((~(270582939648ULL))));
            /* LoopSeq 1 */
            for (signed char i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                arr_24 [i_3] [i_6] [(unsigned char)6] = ((391569767779950024ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) != (4669760287295439159LL))))));
                var_28 = ((/* implicit */long long int) ((signed char) ((unsigned long long int) (unsigned char)125)));
                arr_25 [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)63830)) && (((/* implicit */_Bool) (unsigned short)60931))));
            }
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47747))) / (1327700753U))))));
        }
        var_30 = ((/* implicit */signed char) ((3142267327U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))));
    }
    var_31 = ((/* implicit */long long int) max((((((/* implicit */int) var_5)) & (((632346918) & (33554431))))), (min((((/* implicit */int) var_4)), (((((/* implicit */int) (short)13901)) & (((/* implicit */int) (signed char)-1))))))));
}
