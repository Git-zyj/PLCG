/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214645
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) arr_7 [i_0] [i_1] [i_2])));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_14)) : (3935134506010018041ULL)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (arr_3 [i_0] [i_1])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((3935134506010018039ULL) - (14511609567699533568ULL)));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((min((min((13297477910934182756ULL), (((/* implicit */unsigned long long int) (unsigned short)25431)))), (((((/* implicit */_Bool) 13297477910934182756ULL)) ? (14511609567699533588ULL) : (((/* implicit */unsigned long long int) var_0)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_3 + 1])))))))))));
        }
        var_19 = ((/* implicit */unsigned short) ((((min((3935134506010018024ULL), (10040089547570059156ULL))) & (((1776363928267199874ULL) % (((/* implicit */unsigned long long int) -73044874321095183LL)))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_14))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            {
                arr_19 [i_5] [i_4 - 1] [i_4] = ((/* implicit */short) 14511609567699533561ULL);
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) 17743173107528252737ULL);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_5]))))), (((703570966181298879ULL) >> (((min((17743173107528252737ULL), (((/* implicit */unsigned long long int) arr_2 [i_4])))) - (11011540982171674838ULL))))))))));
                                arr_28 [i_4] [i_5] [i_4] [i_7] [i_7 - 1] [i_7] [i_8] = ((/* implicit */long long int) max((16670380145442351735ULL), (((((/* implicit */_Bool) (~(arr_23 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1])))) ? (1776363928267199880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_12 [i_5] [i_4 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 3])))))) : (min((((long long int) var_15)), (((/* implicit */long long int) ((((/* implicit */_Bool) 14511609567699533574ULL)) && (((/* implicit */_Bool) (unsigned short)25410)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 13; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) (((((((_Bool)1) ? (var_11) : (arr_21 [i_10] [i_4 - 2] [i_4] [i_4]))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4 - 2] [i_4 - 2] [i_4] [i_4])))))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 6264539108249262823LL))) ? (3326302206155802790LL) : (var_0)));
                                var_25 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4])))))) ^ (arr_21 [i_4] [i_5] [i_9] [i_10]));
                            }
                        } 
                    } 
                }
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                {
                    var_26 = min((((/* implicit */unsigned long long int) ((unsigned short) (~(arr_26 [i_11] [i_4 - 1] [i_5] [i_4 - 1] [i_4]))))), (min((min((((/* implicit */unsigned long long int) var_0)), (16670380145442351729ULL))), ((+(17743173107528252737ULL))))));
                    var_27 = ((/* implicit */unsigned short) max((((unsigned char) ((unsigned short) var_5))), (((/* implicit */unsigned char) min((arr_16 [i_11] [i_5]), (arr_16 [i_11] [i_5]))))));
                    arr_38 [i_11] [i_4] [i_11] = ((((((/* implicit */_Bool) 3444470417U)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_35 [i_4 - 1] [i_4 - 1] [i_4 - 3] [i_4 - 3]))) << (((((/* implicit */int) ((unsigned short) arr_20 [i_4] [i_4] [i_4] [i_4 - 3]))) - (36222))));
                    arr_39 [i_11] [i_5] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    var_28 += ((/* implicit */unsigned short) min(((~(arr_20 [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 + 1]))), (((/* implicit */unsigned long long int) ((var_12) ? (arr_37 [i_12] [i_5] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_4] [i_5] [i_12] [i_12] [i_12]))))))));
                    arr_43 [i_12] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_36 [i_12] [i_4 - 2] [i_4])), (15651664646827805800ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_4 + 1] [i_4 - 1] [i_4])))))));
                    var_29 = -73044874321095188LL;
                }
            }
        } 
    } 
}
