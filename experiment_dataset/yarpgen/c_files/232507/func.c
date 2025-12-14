/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232507
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 18071437843832997841ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4776725701796207493ULL))) : (((/* implicit */unsigned long long int) 1733683002)))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_2)), (var_1)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) 5750580014832429128LL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_12 [i_4] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_4]))));
                            arr_13 [i_0] [i_0] [i_2] [i_1] [i_3] [(unsigned short)11] = ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3] [i_4])) ? (-1251549193) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_3] [i_3])));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) (unsigned short)1929);
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [8] [i_3] [i_5] [i_5]);
                            arr_19 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */int) (unsigned short)1928);
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] = (~(((/* implicit */int) arr_14 [i_1] [i_1] [i_5])));
                        }
                        for (signed char i_6 = 3; i_6 < 11; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) ((var_2) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (arr_1 [i_2])));
                            arr_25 [i_0] [i_1] [6] = ((/* implicit */unsigned int) (~(arr_8 [i_1] [i_1])));
                            var_18 = ((/* implicit */short) (~(var_12)));
                            var_19 = ((/* implicit */int) arr_23 [i_6 - 2] [i_1] [i_3] [i_2] [i_6 - 2] [i_6 - 2]);
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46)))))) ? ((-(1040899147U))) : (((/* implicit */unsigned int) (~(-16141740)))));
                        }
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_23 [3ULL] [i_2] [i_2] [i_1] [i_0] [i_0]) : (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned short) max((((int) max((-5238933014827519451LL), (((/* implicit */long long int) var_6))))), (818227234)));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [11] [i_1] [i_1] [i_0])) ? (arr_24 [i_1] [i_1] [i_2] [i_1]) : (((/* implicit */long long int) 2416694697U))))) ? ((~(arr_24 [i_0] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_0]))))))));
                    }
                    var_24 = ((/* implicit */int) 512126629951332425LL);
                    arr_28 [i_1] [i_2] [i_2] = ((/* implicit */signed char) arr_4 [i_1] [i_0] [i_2]);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), ((~(arr_27 [7LL] [i_0])))));
        arr_29 [(unsigned char)4] [i_0] = ((/* implicit */unsigned int) (~((~(arr_16 [i_0] [i_0])))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_8);
    var_27 = ((/* implicit */unsigned char) var_9);
    var_28 = ((/* implicit */unsigned char) var_11);
}
