/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48069
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (min((2033191107378035970ULL), (((/* implicit */unsigned long long int) 3204784782U)))) : (((unsigned long long int) var_2))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (((-(arr_1 [i_0] [i_0]))) / (max((3891871508U), (((/* implicit */unsigned int) (unsigned char)140))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min(((-(((/* implicit */int) ((_Bool) arr_0 [i_0]))))), (((/* implicit */int) var_1)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)78))))), ((~(1269322396841409269ULL))))))));
                        arr_11 [i_1] [i_0] [i_1] [i_3] [i_2] [i_3] = var_9;
                        var_17 &= (-(((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_2 + 2])) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0]))) : ((-(-1455884837))))));
                        arr_12 [i_0] [i_1] [i_1] = (+(((-1921349974) - (((/* implicit */int) (unsigned short)40756)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)145), (min(((unsigned char)79), (arr_13 [i_4])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_4]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_14 [i_4] [i_4]) : (((/* implicit */int) arr_13 [i_4]))))), ((~(2148549146U)))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) arr_14 [i_4] [(unsigned short)3]);
        arr_17 [i_4] [0U] = ((/* implicit */unsigned int) var_1);
    }
    /* LoopSeq 2 */
    for (long long int i_5 = 2; i_5 < 18; i_5 += 1) 
    {
        arr_22 [i_5] [i_5] &= ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6381))) + (0U)))) - (max((18446744073709551615ULL), (8129922883898777699ULL)))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (unsigned char)187);
                    arr_27 [i_7] [i_6] [i_6] = 140737488355327LL;
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_25 [i_7 + 4] [i_5 - 1] [i_5]) == (arr_25 [i_7 - 1] [i_5 + 4] [i_7 - 1]))))) : (((((/* implicit */_Bool) 2146418150U)) ? (2148549149U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)226)) <= (((((/* implicit */_Bool) 14272080863928395792ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)4293))))));
            var_21 = ((/* implicit */int) arr_21 [i_5]);
        }
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            arr_33 [i_9] [i_5] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (short)6381)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6365))) : (arr_25 [i_5 - 2] [i_5 + 3] [i_5 + 4])));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((11980301062406693576ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) == (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-8439218704737126398LL)))));
        }
        var_23 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7301)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32749))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_5])) << (((((/* implicit */int) arr_20 [i_5])) - (126)))))) : (arr_28 [(unsigned short)14]))) ^ ((+((+(var_2))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30957))) <= (7U))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        arr_37 [i_10] [i_10] = ((/* implicit */long long int) arr_30 [i_10] [i_10]);
        arr_38 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_10] [i_10])) ? (15133840604102832791ULL) : (((/* implicit */unsigned long long int) arr_14 [i_10] [i_10]))));
        var_25 = ((/* implicit */unsigned short) 10U);
    }
    var_26 = ((/* implicit */long long int) var_5);
    var_27 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (((long long int) var_5)))))));
}
