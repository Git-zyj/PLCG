/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39517
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-2686916049622630101LL) : (arr_5 [14LL])))))))) >= (((((((/* implicit */_Bool) var_17)) ? (arr_5 [18LL]) : (1046922259291068196LL))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0]) : (16777216LL)))))));
                    arr_6 [i_1] [i_1 - 1] = ((((/* implicit */_Bool) max((1046922259291068196LL), (-1046922259291068180LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_1])))))) : (((long long int) arr_4 [i_2 + 3] [i_2] [i_1])));
                }
            } 
        } 
    } 
    var_19 = var_5;
    var_20 = ((long long int) -1046922259291068208LL);
    var_21 = ((((var_1) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) var_14)) ? (max((var_15), (var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((33554431LL) == (33554431LL))))))) + (2233582929112789163LL))) - (39LL))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (long long int i_4 = 4; i_4 < 12; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    var_22 |= ((((/* implicit */_Bool) ((arr_9 [i_5]) >> (((-2289590840197464192LL) + (2289590840197464198LL)))))) ? (9223372036854775807LL) : (((long long int) arr_14 [i_4 - 2] [i_4] [i_4] [i_5])));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        var_23 = arr_3 [i_5];
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_24 = ((((((arr_19 [i_6] [i_5] [i_5] [2LL] [i_4 - 4]) - (1046922259291068213LL))) + (9223372036854775807LL))) >> ((((~(((((/* implicit */_Bool) 1688849860263936LL)) ? (var_9) : (-2714999025062796215LL))))) - (221954244377363399LL))));
                            arr_20 [i_3] [i_3] [i_5] [i_5] [i_3] [i_7] [i_4] = min((((long long int) arr_16 [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1])), (var_0));
                            var_25 = ((/* implicit */long long int) max((var_25), (((((((6635820630513447402LL) | (var_5))) + (9223372036854775807LL))) >> (((((278666864564023093LL) - (1688849860263919LL))) - (276978014703759157LL)))))));
                        }
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            var_26 = arr_13 [i_6] [i_4 + 1] [i_3];
                            var_27 = ((/* implicit */long long int) max((var_27), ((~(33554431LL)))));
                            arr_23 [i_5] [i_5] [5LL] [5LL] [i_5] [i_4] = ((long long int) (~(((/* implicit */int) ((arr_5 [i_4]) >= (-5822194298976768074LL))))));
                        }
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((((arr_25 [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]) > (274877906943LL))) ? (((((/* implicit */_Bool) var_16)) ? (arr_15 [i_4] [i_4] [i_4 + 2] [i_4 - 3] [i_4]) : (22LL))) : (((((/* implicit */_Bool) 5529436094036165713LL)) ? ((~(-4LL))) : (arr_21 [6LL] [6LL] [i_4] [i_4] [i_4 - 2] [i_4] [i_5]))));
                            arr_27 [i_4] = ((((/* implicit */_Bool) -38LL)) ? (-1868486716139799362LL) : (-1371368873503618717LL));
                        }
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_4 - 4] [i_5])) || (((/* implicit */_Bool) var_9))))) >> (((((arr_18 [i_5] [i_4 - 2] [i_5]) - (541108147629957075LL))) - (2186643114050576790LL))))))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((long long int) 5461723371408413532LL))));
                        var_31 = min((max((arr_25 [i_4] [i_4 - 1] [i_4 - 3] [i_4] [i_4] [i_4]), (arr_11 [i_4] [i_4]))), ((-(max((arr_16 [i_3] [i_4 + 1] [i_4] [i_6]), (arr_18 [i_4] [i_4 - 4] [i_5]))))));
                    }
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        arr_31 [i_3] [i_5] [i_3] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((long long int) 9223372036854775807LL)) << (((((long long int) arr_18 [i_5] [0LL] [i_10])) - (2727751261680533883LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (arr_9 [i_5]) : (3595246452790700961LL))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_10] [i_10] [i_4] [i_5] [i_5])) && (((/* implicit */_Bool) 1046922259291068206LL)))))));
                        var_32 = arr_1 [i_5];
                    }
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_5] [i_4] = (-(((((/* implicit */_Bool) (-(33554417LL)))) ? (((-541108147629957075LL) / (19LL))) : (var_0))));
                        var_33 = ((((/* implicit */_Bool) 6096994329400420734LL)) ? (((((/* implicit */_Bool) arr_28 [i_3] [i_4] [i_4 - 4] [i_5] [i_4] [i_11])) ? (arr_28 [i_3] [i_3] [i_4 - 3] [i_5] [i_11] [i_5]) : (arr_28 [i_3] [i_3] [i_3] [13LL] [i_5] [i_11]))) : (-8669793827354722405LL));
                    }
                }
            } 
        } 
    } 
}
