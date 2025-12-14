/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31074
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
    var_19 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 + 1] [i_0] = 4199986569U;
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) 577422424)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) != (((/* implicit */int) ((_Bool) (unsigned char)139))))))));
        var_21 ^= ((/* implicit */unsigned short) 2791966812209326210ULL);
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_1 + 1] [i_1 + 1]) * (arr_5 [i_1 + 1] [i_1 + 1])))) ? (min((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1]))))))));
        var_23 = 15654777261500225406ULL;
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 6; i_2 += 1) 
        {
            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-4547389462081255989LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) var_4)) : (arr_1 [i_2] [i_1]))))) : (18145094940714335138ULL)));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [i_3]))))) ? ((~(arr_14 [i_1 + 2] [i_3] [i_4] [i_3] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((arr_2 [i_3]) ? (arr_1 [i_1] [i_1]) : (((/* implicit */int) (_Bool)0))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15654777261500225405ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (0ULL)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) arr_15 [8] [8] [i_2 + 2] [8]))))))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_2 - 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)0))))) ? (((((((/* implicit */_Bool) (signed char)3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1 + 1]))))) / (((/* implicit */long long int) arr_1 [2] [i_2])))) : (((/* implicit */long long int) var_6))));
                    }
                } 
            } 
        }
    }
    var_27 -= ((/* implicit */signed char) (+((-(0U)))));
    var_28 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_16))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            {
                arr_20 [i_5] = ((/* implicit */unsigned int) var_1);
                var_29 ^= ((/* implicit */unsigned long long int) (((!(arr_19 [i_6] [i_5] [i_6]))) ? (((arr_19 [i_5] [i_5] [i_5]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_19 [i_5] [i_6] [i_6])))));
                arr_21 [i_5] = ((/* implicit */unsigned long long int) (unsigned char)255);
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (min((10733633564273273871ULL), (15654777261500225404ULL)))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (unsigned short)28126)))))))) + ((~(max((((/* implicit */unsigned long long int) var_12)), (1614476428778365921ULL)))))));
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((unsigned char) (+(((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_5] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_5])))))))));
                    arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 16252928U))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_6] [i_7])) && (((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_6] [i_7])))))));
                    var_32 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 10733633564273273871ULL))) ? ((~(arr_22 [i_5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) (~((~(var_2)))))) : (((((/* implicit */_Bool) min((arr_18 [i_6]), (3454483134211145202LL)))) ? (((unsigned int) (unsigned char)139)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6])))))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_11))) + (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((int) arr_24 [i_5] [i_6] [i_7] [i_6]))) : (((((((/* implicit */unsigned long long int) 0U)) + (var_5))) * (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_13)))))))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 4278714367U))) ? (arr_24 [i_5] [i_6] [i_8] [i_8]) : (((/* implicit */long long int) ((arr_23 [i_5] [i_5] [9LL] [i_8]) / (arr_23 [i_8] [i_6] [i_8] [i_5]))))));
                    var_35 &= ((/* implicit */unsigned short) 6833323477742605704ULL);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_36 &= ((/* implicit */long long int) 3232745948558236150ULL);
                    var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 655127446U)) ? (arr_18 [i_5]) : (((/* implicit */long long int) arr_30 [i_5] [i_6] [16])))))))));
                }
            }
        } 
    } 
}
