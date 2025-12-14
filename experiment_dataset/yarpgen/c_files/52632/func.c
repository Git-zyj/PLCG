/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52632
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
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_1)) : (1541066961898496657LL))) | (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))) | (((/* implicit */long long int) 951405295))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [(short)8])))) ^ (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */long long int) 810245800U)))))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2624511711U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (max((((var_2) ? (((/* implicit */int) var_13)) : (1232302638))), (((/* implicit */int) var_4))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(((((/* implicit */_Bool) 1073709056)) ? (var_1) : (3484721483U))))))));
            var_21 = ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_2] = (~(((((/* implicit */_Bool) arr_7 [5])) ? (-736530502640523527LL) : (-1541066961898496657LL))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 810245800U)) <= (2764938706954601404ULL))))));
                        var_23 &= ((/* implicit */_Bool) arr_11 [i_3] [18U]);
                    }
                } 
            } 
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-11534))))))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        arr_24 [i_5] [22LL] [i_0] [i_7] [i_0] [i_5] = ((/* implicit */short) (-(arr_18 [14LL] [i_7])));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (signed char)-97))));
                        var_26 = ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_22 [i_0] [(signed char)5] [i_6] [19ULL] [i_7])));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0]))))) ? (((var_2) ? (var_10) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))));
                    }
                } 
            } 
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) var_3);
            var_28 = ((/* implicit */unsigned long long int) ((((9223372036854775807LL) / (((/* implicit */long long int) var_3)))) < (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [4] [i_0] [8LL])))));
        }
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0])), (arr_17 [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(var_2)))) : ((-(((/* implicit */int) arr_9 [i_8 + 2] [i_8 - 1] [i_8 + 3] [i_8 + 3]))))));
            arr_32 [i_9] [i_8] [i_9] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_23 [i_9] [20U] [i_8 + 1] [20U] [i_8 + 1])))) ? ((-(((arr_30 [i_8] [i_9]) ^ (((/* implicit */int) var_13)))))) : (((/* implicit */int) var_0))));
        }
        arr_33 [i_8 + 1] [i_8] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_19 [0ULL] [i_8] [(short)16] [i_8 - 1]) ? (var_6) : (((/* implicit */int) arr_29 [i_8]))))) ? (((((/* implicit */_Bool) arr_11 [i_8] [i_8])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)120)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)19486)) : (((/* implicit */int) var_11))))))), (((((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) var_10)) : (max((arr_16 [3LL] [(_Bool)1] [3LL]), (var_14)))))));
        var_31 &= ((/* implicit */unsigned int) ((long long int) max((max((((/* implicit */unsigned char) arr_3 [2] [2] [2])), ((unsigned char)192))), (((/* implicit */unsigned char) (_Bool)1)))));
    }
}
