/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213552
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)5402), (((/* implicit */unsigned short) var_12))))) ? (max((3128196066U), (((/* implicit */unsigned int) (unsigned short)5402)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108)))))) ? (((unsigned long long int) max(((short)-23559), ((short)-9017)))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) arr_3 [0LL] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)44978)) ? (((/* implicit */int) (short)23558)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (short)-8644))))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_4 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (unsigned short)5402);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_12 [i_3 + 1]))) % (max((arr_0 [i_3 + 1]), (arr_12 [i_3 - 2])))));
                    arr_15 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60134)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))))) ? (((/* implicit */int) (unsigned short)15861)) : (((/* implicit */int) var_16)));
                    var_22 = ((/* implicit */unsigned long long int) ((((var_9) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_2 [i_4 + 2] [i_3 - 1] [i_3 - 1])) ? (arr_2 [i_4 + 2] [i_3 - 2] [i_3 - 2]) : (arr_2 [i_4 + 1] [0U] [i_3 + 1]))) - (4129558352U)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = ((/* implicit */unsigned int) arr_10 [i_6]);
        arr_20 [i_6] = (+(((((/* implicit */int) arr_7 [i_6] [i_6])) / (((/* implicit */int) var_8)))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(3069391881U))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (((_Bool)0) ? (((((((/* implicit */_Bool) var_10)) ? (var_0) : (arr_12 [i_7]))) << (((((arr_2 [i_7] [i_7] [i_7]) & (((/* implicit */unsigned int) var_3)))) - (2518679922U))))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
        var_26 += ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (1225575415U)))) ? (((/* implicit */int) (unsigned short)15878)) : ((~(((/* implicit */int) arr_5 [18] [18])))))) >> (((/* implicit */int) var_8))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))));
        arr_23 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned short)49684)) % ((-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 2166347731510212321ULL)) ? (((((/* implicit */_Bool) (unsigned short)5408)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_7])))) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
}
