/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241576
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((short) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_5)) : (2402838820U)))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_2 - 1] [i_1] [i_2 - 1]) && (arr_3 [i_2 - 2] [(signed char)0] [(signed char)2]))))) <= (((arr_0 [i_0] [i_4]) % (arr_0 [i_0] [i_1])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 4) 
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_5] [i_5 - 2] [i_1])) ? (arr_7 [i_5 - 2] [i_5 - 1] [i_1]) : (var_1)));
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((signed char) var_8));
                }
                var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 2402838820U)) && (((/* implicit */_Bool) 1892128475U)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_8);
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (2402838820U)));
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        for (long long int i_7 = 2; i_7 < 8; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_15 [i_6] [i_7] [13ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                    var_18 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (2402838839U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((2402838820U) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_9))))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            {
                                arr_34 [i_7] [i_7] [i_7] [3U] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) 2402838843U)) ? (1892128452U) : (1892128452U)));
                                var_19 = ((/* implicit */signed char) ((2402838843U) / ((+(2402838843U)))));
                                var_20 = ((/* implicit */signed char) min((2402838823U), (2402838820U)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        arr_37 [i_11] [(unsigned char)3] [i_11] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2402838823U)))) ? (((2402838828U) ^ (((/* implicit */unsigned int) arr_20 [i_6] [5])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2402838807U)) ? (1892128473U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((short) arr_0 [i_11] [i_8]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_3)))))))));
                        arr_38 [i_7] [1] [i_8] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (2402838823U))) ? (1892128477U) : (((/* implicit */unsigned int) var_6))))));
                        arr_39 [(unsigned short)1] [i_7 + 1] [i_7] [i_11] [10ULL] [i_8] = ((/* implicit */unsigned short) 1892128475U);
                        arr_40 [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned short) 1892128425U);
                    }
                }
            } 
        } 
    } 
}
