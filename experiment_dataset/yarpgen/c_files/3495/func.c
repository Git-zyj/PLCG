/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3495
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)3507))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)6275)))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1] [8ULL])) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)21351)), ((unsigned short)32686))))))) : (arr_3 [i_0] [(unsigned char)17])));
                    arr_7 [8LL] [11ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_2])))) / (828243880U)));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)29557)) ? (arr_2 [(short)0]) : (arr_6 [i_1] [i_2]))), (((/* implicit */unsigned int) ((short) 10424510740614094962ULL))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)29557);
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)21366))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) 16140141215217380659ULL);
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
        {
            for (short i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_19 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [12LL] [12LL])) ? (min((11LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned char)10] [i_4 - 1]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)384)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19987))) : (8022233333095456662ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)7] [i_4 - 1]))) : (2281817058361088639LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [12ULL]))));
                    arr_20 [i_5] [i_5] [i_5] [4U] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_13 [i_4 + 1] [i_5 + 1]), (arr_13 [i_4 - 2] [i_5 + 2])))), (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_13 [i_4 + 1] [i_5 - 2])) : (((/* implicit */int) arr_13 [i_4 - 2] [i_5 - 2]))))));
                    arr_21 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)25953)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_4))))))) ? (((((unsigned int) (unsigned short)32864)) + (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-125))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_11))) - ((+(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
