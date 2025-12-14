/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38999
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_13 *= ((/* implicit */_Bool) var_10);
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 - 1]))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) var_10);
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            arr_14 [i_0 - 1] [i_4] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-30126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_4] [i_4]))) : (18446744073709551615ULL)));
            arr_15 [(unsigned short)10] [(unsigned short)10] &= ((/* implicit */short) (~(arr_2 [i_4])));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) var_9);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_4 [(short)18]))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            arr_33 [i_7] [i_8] [i_8] [i_9] [i_8] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1899131531U) << (((var_11) - (1441278941992511435LL)))))) ? (-4271954176458143872LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8] [i_9 + 1] [i_9 + 1])))))) ? (((((/* implicit */_Bool) arr_32 [i_9 + 1] [i_8] [i_9])) ? (((var_1) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_8] [i_7]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)18150)) : (((/* implicit */int) var_12))))))) : (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_29 [i_7] [i_8] [i_8] [i_10])) ? (4271954176458143871LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_34 [i_7] [i_8] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4271954176458143872LL)) ? (((/* implicit */long long int) -57073205)) : (-4271954176458143894LL)));
                            var_19 &= ((/* implicit */unsigned short) (-(((11113803422997383717ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_10] [i_9] [i_8])))))))));
                            var_20 = ((/* implicit */unsigned short) arr_27 [i_8]);
                        }
                    } 
                } 
                var_21 ^= (~((-(((/* implicit */int) arr_31 [i_7] [i_8])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4271954176458143871LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (57073204) : (((int) var_9))))), (((((/* implicit */_Bool) (unsigned short)45758)) ? (((((/* implicit */_Bool) 3307395858U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)1]))) : (13333366971088979367ULL))) : (11113803422997383707ULL)))));
                    arr_44 [i_11] [(unsigned char)10] [i_12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_37 [i_12])), ((signed char)-45)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_11 + 2] [i_13] [i_12] [i_11]))) & (arr_28 [i_11] [i_12] [i_12] [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_42 [i_11 + 1] [i_12] [i_12]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_11 + 1] [i_11 + 1] [i_12])))))) ? (((/* implicit */int) (short)1776)) : (((/* implicit */int) arr_19 [i_13] [i_12] [i_12] [i_11])))))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((_Bool) min((-57073224), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : ((+(-57073205))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) (short)6333)), (11113803422997383728ULL))))) & (((/* implicit */unsigned long long int) 57073223))));
}
