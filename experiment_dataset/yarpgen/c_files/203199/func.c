/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203199
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0]));
            arr_6 [(unsigned char)14] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (var_8)))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 3) 
        {
            var_19 -= ((/* implicit */long long int) arr_2 [i_2 + 1] [i_2 - 1]);
            var_20 = ((/* implicit */int) (+(524287ULL)));
            arr_9 [i_0] [(signed char)15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_8 [i_0]))));
            var_21 += ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [3LL]))) >= (-1220924311806072725LL))) && (((/* implicit */_Bool) ((short) arr_0 [i_2] [9ULL]))));
        }
        var_22 = ((/* implicit */unsigned char) ((int) arr_8 [i_0]));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned short i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_6] [i_3] [i_6] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_3] [i_6 + 2] [i_5 + 1] [i_3]))))), (((unsigned int) arr_18 [i_4]))))));
                        arr_23 [i_3] [i_3] [i_4] = arr_16 [14ULL] [(signed char)13] [i_4];
                        var_23 = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) 3283519202U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (298499650618766661ULL))))), (max((18446744073709027323ULL), (((/* implicit */unsigned long long int) (unsigned short)19298))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                {
                    arr_29 [i_3] [i_3] [i_3] [i_7] = ((unsigned long long int) ((arr_15 [i_8 + 2] [i_8 - 1] [i_8 + 1]) == (arr_15 [i_8 - 1] [i_8 + 1] [i_8 + 3])));
                    var_24 = (((-(var_0))) - (var_0));
                    var_25 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
                }
            } 
        } 
        arr_30 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16))))))) ? ((-(((/* implicit */int) ((unsigned char) (unsigned short)46209))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_27 [i_3] [i_3])))))))));
    }
    var_26 = ((/* implicit */long long int) ((((524287ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? ((((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))) & ((+(((/* implicit */int) var_7)))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
    var_27 = 4194303LL;
    var_28 = ((/* implicit */long long int) ((524287ULL) >> (((-4344024127047386809LL) + (4344024127047386842LL)))));
}
