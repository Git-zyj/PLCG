/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208506
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_0))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1665371152)), (8770055154361536687ULL)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)9] = ((/* implicit */_Bool) var_8);
                        var_11 = ((/* implicit */unsigned char) arr_1 [i_1]);
                        var_12 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (arr_5 [i_0] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_4] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0] [(unsigned char)11])))) : (((/* implicit */int) arr_9 [i_0] [(unsigned char)6] [(unsigned char)6]))))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_4))));
            arr_15 [i_0] = ((/* implicit */int) var_7);
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8704))), (min((var_9), (var_0))))))) - (arr_16 [i_0]))))));
            var_16 = ((/* implicit */unsigned int) var_3);
            var_17 = ((/* implicit */long long int) arr_1 [i_0]);
            /* LoopNest 2 */
            for (unsigned int i_6 = 2; i_6 < 16; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) arr_0 [i_7]);
                        arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned char) ((arr_20 [i_5] [i_0] [i_5]) + (((/* implicit */int) var_2)))));
                        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8687))));
                    }
                } 
            } 
            var_20 -= max((((/* implicit */unsigned int) ((unsigned char) arr_16 [i_0]))), (arr_19 [i_0] [i_0]));
        }
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12208))) : (49503151U)));
            arr_26 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)32750)) & (((/* implicit */int) (short)32767))));
            var_22 = ((/* implicit */short) var_6);
            var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) (~(arr_20 [i_0] [i_8] [i_8]))))), (arr_17 [i_0])));
        }
        arr_27 [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [5] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_31 [i_9] = ((/* implicit */short) (+(((/* implicit */int) var_7))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_8))));
    }
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        arr_35 [i_10] = arr_7 [18] [18] [i_10] [18];
        var_25 = ((/* implicit */int) var_9);
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) 9676688919348014928ULL)) ? (((((/* implicit */_Bool) var_5)) ? (arr_36 [i_11] [i_11]) : (4294967295U))) : (((((/* implicit */_Bool) arr_37 [i_11])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11]))))))))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned long long int) arr_36 [i_11] [i_11])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10))) : (var_3))))))));
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((9676688919348014928ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61560))))))));
            arr_40 [i_12] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_11] [i_12] [i_11])) ? (var_6) : (((/* implicit */unsigned int) arr_39 [i_12] [i_12] [15]))));
            var_29 -= ((/* implicit */signed char) arr_37 [i_11]);
            var_30 = ((/* implicit */short) arr_37 [i_11]);
        }
    }
    var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (short)-31479)) ? (((/* implicit */unsigned long long int) 2710050995U)) : (var_5))) : (min((var_3), (var_3))))) + (((/* implicit */unsigned long long int) var_4))));
}
