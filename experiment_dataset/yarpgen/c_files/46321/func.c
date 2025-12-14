/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46321
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */int) (unsigned short)310)) : (((/* implicit */int) (_Bool)1))))) != ((((_Bool)1) ? (arr_3 [i_1] [i_2 - 1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_10 [i_1] [i_3 - 1] [i_1] [i_3] [i_3] [i_3])), (16835903858613835103ULL)));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned short) (-(arr_3 [i_2 - 1] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((long long int) (signed char)43));
                                arr_26 [i_0] [i_0] [i_5] [i_5] [i_7] = 4610321810943280366ULL;
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((5536658962333332361LL), (((/* implicit */long long int) (unsigned short)65237))))) <= (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])), (var_9)))))), (((((/* implicit */_Bool) 65504U)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)86)), (arr_24 [i_5] [i_5] [i_5] [i_4] [i_4] [(unsigned char)5])))) : (10183323306506677214ULL)))));
                    arr_28 [i_0] [(unsigned char)3] [i_5] [7LL] = ((/* implicit */_Bool) ((17491646391751814068ULL) + ((+(((((/* implicit */_Bool) (unsigned char)28)) ? (8581545984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37114)))))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 ^= ((/* implicit */unsigned short) var_1);
}
