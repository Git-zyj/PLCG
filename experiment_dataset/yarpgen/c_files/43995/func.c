/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43995
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_15)))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_11);
                        arr_15 [i_0] [i_0] [i_2] [i_3] = ((((/* implicit */_Bool) var_14)) ? (var_0) : (var_8));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (long long int i_5 = 4; i_5 < 22; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((((var_9) < (var_5))) ? (((((/* implicit */_Bool) var_6)) ? (-1919207700201259232LL) : (1919207700201259234LL))) : (var_3)));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) (unsigned char)66);
                        var_18 += ((unsigned char) var_7);
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) > (var_0))))));
                    }
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_4] [i_4] [i_7] &= ((short) (signed char)-56);
                        arr_27 [i_7] [i_0] [i_0] [(unsigned char)17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 259151870611125779LL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111)))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_15)))) ? (((unsigned long long int) var_1)) : (var_13)));
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (4611650834055299072LL) : (var_3)))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) / (((((/* implicit */_Bool) -8105429302345226539LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))) : (var_0)))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) (signed char)1);
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-11298), (var_4)))) ? (((/* implicit */unsigned long long int) -8105429302345226539LL)) : (((((/* implicit */_Bool) var_8)) ? (0ULL) : (7429435628370689960ULL))))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11017308445338861655ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)240))));
        var_25 = ((/* implicit */signed char) 11017308445338861655ULL);
    }
    var_26 = ((/* implicit */unsigned long long int) ((unsigned char) (-9223372036854775807LL - 1LL)));
}
