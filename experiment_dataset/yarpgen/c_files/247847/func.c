/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247847
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
    var_20 = var_12;
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)49)) && (((/* implicit */_Bool) arr_1 [i_0]))));
        var_21 = ((/* implicit */int) max((var_21), ((-((~(arr_0 [(unsigned short)2])))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1])) >> (((((/* implicit */int) (unsigned short)14865)) - (14859))))) < (((((/* implicit */_Bool) (signed char)58)) ? (((((/* implicit */_Bool) arr_0 [(short)22])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) >> (((5099040495723937511LL) - (5099040495723937502LL)))))))));
        var_23 ^= ((/* implicit */int) ((((((-7678959554333573561LL) | (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))))) + (9223372036854775807LL))) >> (min((arr_2 [i_1] [i_1]), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)6)) >= (((/* implicit */int) var_5)))))) & (((((/* implicit */_Bool) -1769307286)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) : (17070938876022041508ULL)))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 739078300U)) & (((((/* implicit */_Bool) arr_8 [i_1] [(unsigned short)22])) ? (-1694464300785599578LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9672)))))));
            var_26 = ((/* implicit */_Bool) min((var_26), (arr_7 [i_2 + 2] [i_1])));
        }
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_17 [i_3] [i_3] [i_4] [i_5 + 4] = ((/* implicit */short) ((((arr_15 [i_3] [i_5 + 2] [i_5]) & (arr_15 [i_3] [i_5 - 1] [i_4]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_5 - 1] [(unsigned char)4])) > (((/* implicit */int) (unsigned char)250))))))));
                    var_27 = arr_7 [i_3] [i_4];
                }
            } 
        } 
        arr_18 [12LL] &= ((/* implicit */signed char) max(((_Bool)1), ((!(((/* implicit */_Bool) arr_0 [(unsigned char)20]))))));
    }
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (~(((((/* implicit */int) (unsigned short)14243)) - (((/* implicit */int) arr_7 [i_6] [i_6])))))))));
        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (((arr_16 [i_6] [(unsigned char)15] [i_6] [i_6]) ? (739078308U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) var_18))));
        arr_21 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [8U])))) ? (3555888983U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)18294))))))))) ? (1754989175) : (((((((/* implicit */int) (short)-2915)) * (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_6] [(_Bool)1] [i_6] [i_6])), (var_13))))))));
    }
    var_30 -= ((/* implicit */short) 5099040495723937493LL);
    /* LoopSeq 1 */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        arr_26 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((3341992811U), (((/* implicit */unsigned int) var_14)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */int) (short)26266)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) max((max((var_6), (arr_19 [15LL] [i_7]))), (((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)95))))))) : ((+(((/* implicit */int) (unsigned short)19901))))));
        var_31 = ((/* implicit */int) max(((-((-(arr_1 [i_7]))))), (((/* implicit */long long int) var_0))));
        var_32 = (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551596ULL))))) : (((/* implicit */int) (unsigned short)49684)));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            {
                var_33 -= ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */long long int) (~(-1904691054)))) / (((arr_13 [i_8] [i_8]) / (((/* implicit */long long int) arr_0 [i_8])))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_8] [i_8])) * (((/* implicit */int) arr_10 [i_9])))))));
                arr_31 [i_8] [i_9] &= ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (short)18878)) : (((/* implicit */int) arr_29 [i_9])))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_0 [i_8]))))))));
            }
        } 
    } 
}
