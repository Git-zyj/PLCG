/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22894
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))) : (4194303ULL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) var_3);
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(min((((arr_2 [i_1]) >> (((/* implicit */int) (unsigned short)8)))), (((/* implicit */unsigned int) arr_0 [9U] [9U])))))))));
                    var_16 = ((arr_3 [(unsigned short)1]) <= (((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_6))))) & (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_0 [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))) * (var_10)));
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */unsigned char) (short)-12651);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]))) ? ((((!(((/* implicit */_Bool) (unsigned short)5)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), ((unsigned short)65535))))) : (6850339821817883018LL))) : ((+(-9223372036854775798LL)))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (9223372036854775789LL))) - (((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((var_10) - (16193174585542789903ULL)))))))) >> (((((/* implicit */int) ((unsigned short) arr_7 [i_3]))) - (38063))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) var_4);
                    arr_20 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) var_3);
    }
    for (int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [5ULL] [i_9] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7955)))));
                    arr_28 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_9])) ? (((/* implicit */int) arr_8 [i_10])) : (((/* implicit */int) arr_8 [i_8]))))) <= (((unsigned int) var_6))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        arr_32 [i_8] [i_8] [i_8] [i_9] = (+(1849292098U));
                        var_23 = ((/* implicit */signed char) arr_18 [i_9] [i_9] [i_9] [i_9] [i_9]);
                        var_24 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((arr_14 [(unsigned char)8] [i_8] [(unsigned char)8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned int) (short)-11174));
                        var_26 = (!(((/* implicit */_Bool) (unsigned short)65530)));
                        arr_36 [i_8] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */short) (+(((unsigned int) (short)-27694))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                {
                    var_27 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)30130)))) >> (((/* implicit */int) arr_0 [(unsigned short)4] [(unsigned short)4])))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(9223372036854775803LL)))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) > (2445675218U)))))) : (((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
    }
}
