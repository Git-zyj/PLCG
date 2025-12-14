/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32947
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
    var_13 = ((/* implicit */short) max((var_5), (((/* implicit */unsigned long long int) 8597340862015828455LL))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) -8538688876054035964LL);
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((long long int) arr_1 [7LL] [7LL])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65023)))))) ? (2015461962U) : (((/* implicit */unsigned int) ((int) (~(arr_3 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1 - 3] [i_1] = 507341332U;
        arr_9 [i_1] = ((/* implicit */unsigned short) (~(250546736)));
    }
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = (+((+(arr_3 [i_2 - 3]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
            {
                arr_21 [i_2 - 2] [i_2 - 2] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-25585))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (654012263223770267ULL)));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-886219710128187952LL)))) ? (-8538688876054035961LL) : (((/* implicit */long long int) arr_3 [i_4 - 1]))));
                    arr_24 [i_2 - 3] [i_3 + 2] [i_3] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)33))))));
                }
                var_17 = ((/* implicit */short) (signed char)-8);
                arr_25 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((short) ((int) (_Bool)1)));
            }
            arr_26 [i_2] [i_3] = ((/* implicit */long long int) -1);
        }
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 3) 
            {
                for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) 
                {
                    for (int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_18 = max((((long long int) var_10)), (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))))));
                            arr_37 [i_2] [i_2] [i_6] [i_2] [(unsigned short)3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((int) (signed char)-1)), (max((-1725394842), (((/* implicit */int) (unsigned short)26447))))))), (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_6] [i_6 + 1] [i_6] [i_7 - 3] [i_7 - 3])))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) 2975056050U))));
                            var_20 = ((/* implicit */int) (+((+(min((((/* implicit */long long int) var_9)), (-6400382892700595626LL)))))));
                        }
                    } 
                } 
            } 
            arr_38 [i_6] [10U] = ((/* implicit */unsigned int) max((9223372036854775806LL), (((/* implicit */long long int) (~(134217727))))));
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) 805306368))))) >= (((((/* implicit */_Bool) (unsigned short)57551)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10] [i_2 - 3]))) : (6895051150221103068ULL)))));
                    arr_43 [9] [i_10] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (short)-21005)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : ((~(var_5)))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -4212896712773285157LL)) ? (var_5) : (((/* implicit */unsigned long long int) -2147483622)))) - (((/* implicit */unsigned long long int) arr_27 [(short)12])))) << ((((_Bool)1) ? (((/* implicit */int) arr_34 [i_2 + 1] [i_2] [i_2 - 2] [i_2])) : (((/* implicit */int) (unsigned short)48391)))))))));
        arr_44 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_39 [(unsigned short)4] [i_2 - 1]))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (var_8) : (arr_14 [i_2] [(signed char)14] [i_2]))))));
    }
}
