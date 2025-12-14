/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223592
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
    var_14 &= ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 &= ((/* implicit */int) var_13);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) (_Bool)0);
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (short)-23779))))) ? (((/* implicit */int) (short)-23782)) : (((int) ((9275042445913231177ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23761))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) / (((/* implicit */int) (unsigned short)41887))));
                        var_16 = (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)14192)) >> (((1938251271) - (1938251263))))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((var_3) - (((/* implicit */long long int) ((/* implicit */int) (short)-23786)))))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_6] [i_7] [i_8] [i_9]))) / (2731324368U)));
                                arr_33 [i_5] [i_6] [i_7] [i_8] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)105)) % (((/* implicit */int) var_6))));
                                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_7] [i_8] [i_9] [i_9])) ? (3250526439098268017ULL) : (((/* implicit */unsigned long long int) arr_24 [i_9] [i_7] [i_6]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        for (signed char i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_10);
                                var_22 = (-(var_8));
                            }
                        } 
                    } 
                }
                var_23 = var_8;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((long long int) (unsigned short)26221)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (arr_24 [i_5] [i_6] [i_12])))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21720))) / (1563642928U)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    for (unsigned char i_14 = 1; i_14 < 11; i_14 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_6] [i_6] [i_13] [i_14] [i_14])) ? (arr_37 [i_5] [i_6] [i_13] [i_13] [i_13] [i_14] [i_14 - 1]) : (arr_37 [i_5] [i_5] [i_6] [i_13] [i_13] [i_13] [i_14 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41409)) == (((/* implicit */int) (signed char)-122))))))))));
                            var_27 = ((/* implicit */short) max((max((((unsigned short) arr_39 [i_14] [i_13] [i_5])), (((/* implicit */unsigned short) (signed char)105)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 8431257005785042971ULL)))))));
                        }
                    } 
                } 
                arr_46 [i_5] = ((/* implicit */long long int) max((((((/* implicit */int) (signed char)118)) % (((/* implicit */int) ((_Bool) (signed char)43))))), (((/* implicit */int) ((unsigned char) ((unsigned short) var_10))))));
            }
        } 
    } 
}
