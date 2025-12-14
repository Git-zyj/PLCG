/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210332
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
    var_18 = ((/* implicit */_Bool) -595175554);
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -396032506)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (-7828059418402917581LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_14))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = ((((((/* implicit */_Bool) 595175535)) ? (((/* implicit */int) (signed char)48)) : (var_13))) / ((~(((/* implicit */int) (unsigned short)12227)))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_12)) % (var_14))) % (((/* implicit */unsigned long long int) var_13))));
                        arr_10 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_0))) & (var_8)));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_21 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) <= (((((/* implicit */unsigned long long int) -654523646)) & (2251799813681152ULL)))))), (654523645)));
        /* LoopSeq 2 */
        for (long long int i_5 = 3; i_5 < 7; i_5 += 1) 
        {
            arr_15 [i_4] = ((/* implicit */int) max((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_2))))))));
            arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) 16057730121528722238ULL)), (((/* implicit */unsigned int) (short)14004))))) && (((/* implicit */_Bool) 654523646))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_19 [i_6] = ((/* implicit */int) ((unsigned long long int) ((short) ((((/* implicit */unsigned long long int) -595175554)) < (var_1)))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((int) var_17)) ^ (max((396032505), (255)))))) / (((((((/* implicit */int) (signed char)25)) == (-595175554))) ? (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))) : (((((/* implicit */_Bool) (unsigned short)992)) ? (((/* implicit */unsigned long long int) var_8)) : (var_5)))))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_24 [i_7] = ((/* implicit */long long int) 4294967285U);
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_12))));
                        var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)14198))) >= ((-(1134907106097364992LL)))));
                        arr_34 [i_7] [i_8] [i_9] [i_8] = ((unsigned int) (short)-9575);
                    }
                    var_25 = max((((unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))), (((/* implicit */unsigned long long int) 595175554)));
                    arr_35 [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((signed char)-8), ((signed char)1)))), (((var_3) ? (((/* implicit */long long int) -654523646)) : (-2008221551448260814LL)))))) && (((/* implicit */_Bool) min((((((var_11) + (9223372036854775807LL))) << (((var_8) - (1256622298))))), ((+(36028728299487232LL))))))));
                    var_26 += (-(min((max((-8234127100777331446LL), (((/* implicit */long long int) (signed char)8)))), (((((/* implicit */_Bool) var_13)) ? (9223372036854775807LL) : (((/* implicit */long long int) 3564650590U)))))));
                }
            } 
        } 
        arr_36 [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-2008221551448260830LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
}
