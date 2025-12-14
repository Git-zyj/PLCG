/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199905
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
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (7878923720633107363LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1]))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (arr_3 [i_0 - 1])));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+((+(7878923720633107362LL))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-25494)) ? (-7878923720633107368LL) : (7878923720633107372LL)));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) var_11)))))));
    }
    for (signed char i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                        {
                            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_12 [i_5 + 1] [i_4 + 1] [i_2 - 3] [i_1 + 1]) : (((/* implicit */int) var_2))));
                            arr_19 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_8 [i_3] [i_2]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_24 [i_1] [16U] [15ULL] [i_1] [i_2] = ((/* implicit */unsigned short) (-(arr_17 [i_1] [i_2] [i_1 + 1] [i_1] [i_1 - 2])));
                            arr_25 [i_2] [i_2] [i_4] = arr_21 [i_1] [2] [i_2] [(unsigned short)12] [i_3] [i_4] [i_6];
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_2] [i_2] [1LL] [(unsigned short)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_16))) < (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_1 - 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_20 [18ULL] [i_2] [i_2] [i_2] [i_2] [i_2 + 1])))))))));
                            arr_26 [i_1] [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7878923720633107341LL)) || (((/* implicit */_Bool) (unsigned short)46189))));
                        }
                        arr_27 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_15) - (((/* implicit */unsigned int) -1086061761)))), (((/* implicit */unsigned int) arr_22 [18LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_16)) : (min((((/* implicit */long long int) var_14)), (7878923720633107368LL)))))) : (arr_7 [(unsigned char)8] [i_1 - 2])));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1 - 1] [i_1]))))) % (max((((7878923720633107367LL) / (-7878923720633107363LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))));
        arr_28 [i_1] [5ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_1])), ((unsigned short)43001)))) ? (arr_21 [i_1 - 3] [i_1 - 3] [20ULL] [i_1] [i_1 - 3] [i_1] [22ULL]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))))) : ((~(arr_17 [i_1 - 2] [14ULL] [i_1 - 3] [i_1 - 3] [i_1 - 1])))));
        arr_29 [i_1] [i_1] = ((/* implicit */long long int) var_9);
    }
    var_25 = ((/* implicit */_Bool) var_3);
}
