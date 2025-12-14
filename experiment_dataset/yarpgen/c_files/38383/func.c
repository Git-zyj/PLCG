/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38383
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [(short)8] [6LL] &= ((/* implicit */short) 18446744073709551615ULL);
        arr_5 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [1LL] [i_0]));
        var_11 = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_9 [(short)10] = ((/* implicit */short) arr_8 [i_1]);
        arr_10 [i_1] [(short)9] = var_0;
        var_12 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 4009531654861908073LL)) ^ (arr_7 [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31159)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_8 [i_1])))) | (18446744073709551615ULL)));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_14 = arr_17 [i_4] [i_3] [i_3] [(short)14] [i_3] [i_1];
                        arr_19 [(short)4] [(short)4] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */short) max((-2910825846399217739LL), ((+(var_2)))));
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) ((((18446744073709551610ULL) ^ (17508389253509734850ULL))) ^ (((((/* implicit */unsigned long long int) arr_14 [23ULL] [23ULL])) | (9891762513713302565ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            arr_27 [(short)19] [i_3] [i_6] = (~(var_4));
                            var_16 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [5ULL] [i_2]))) & (((var_10) & (arr_26 [i_6 + 3] [i_6] [i_6] [i_6 - 1] [i_6 - 1])))));
                        }
                        var_17 = ((/* implicit */short) var_2);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_11 [i_1] [i_1] [i_1]))));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_19 = max((((((/* implicit */long long int) ((/* implicit */int) ((short) 9ULL)))) ^ (((((/* implicit */_Bool) arr_7 [19ULL])) ? (-6211665568602942115LL) : (((/* implicit */long long int) ((/* implicit */int) (short)127))))))), (880753861471255910LL));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9184362090110276443LL) >> (((arr_14 [i_2] [i_3]) + (3379457877485996803LL)))))) ? (var_6) : (((((/* implicit */_Bool) -5380242025846249104LL)) ? (var_2) : (arr_13 [i_3] [0ULL] [i_1])))))) ? (9546713718943821665ULL) : (((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [(short)1])) | (0ULL)))));
                    }
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_34 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3714))) : (arr_26 [i_1] [i_3] [i_2] [i_1] [i_1])))) ? (max((var_4), (arr_26 [i_1] [i_2] [i_2] [(short)1] [i_8]))) : ((-(149085415826597881ULL)))));
                        var_21 = ((/* implicit */long long int) (~(((unsigned long long int) 8ULL))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */short) var_2);
                            var_23 = ((/* implicit */long long int) arr_30 [i_1] [i_2] [i_3] [i_8]);
                        }
                    }
                    var_24 -= (~(((18446744073709551597ULL) << (((((/* implicit */int) var_0)) - (10275))))));
                    arr_39 [i_3] [i_3] = ((((/* implicit */unsigned long long int) var_6)) * (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_24 [i_1] [i_1] [i_1])) : (var_5))), (((/* implicit */unsigned long long int) max((arr_18 [i_3]), (var_0)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) && (((/* implicit */_Bool) 6ULL))));
                var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_10))) ? (var_6) : (((((/* implicit */_Bool) arr_7 [i_11 - 2])) ? (-2141822831107464597LL) : (8258992297858126530LL)))));
                arr_45 [i_11] [i_11 + 2] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((13623321218187533212ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12605)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_2))) * (((/* implicit */long long int) ((/* implicit */int) (short)-15642)))))) : (var_1)));
            }
        } 
    } 
}
