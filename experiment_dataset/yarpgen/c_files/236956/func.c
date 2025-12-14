/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236956
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
    var_14 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */short) (((_Bool)1) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((arr_7 [i_0] [i_3 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_4 [i_1]) : (((/* implicit */int) arr_8 [i_0] [0ULL] [0ULL]))))))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_1])))), (((arr_13 [i_0] [i_3] [i_3]) | (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1] [i_2] [i_0] [i_0] [i_2] [i_2]))))))));
                                arr_15 [i_3] = ((/* implicit */unsigned char) var_13);
                                arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_2] = ((/* implicit */unsigned short) var_8);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 21; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_6] [i_0] [i_0] [i_0] = (_Bool)1;
                            arr_23 [i_6] = ((/* implicit */unsigned short) ((unsigned char) ((15413610582441942646ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_24 [i_0] [i_1] [i_6] [i_5 + 1] [i_6 - 2] = ((/* implicit */_Bool) var_7);
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) (short)-19331);
                    }
                    arr_26 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((var_3), (arr_14 [20U] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_3 [(_Bool)1] [1ULL]))));
                    arr_27 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3784291878U)));
                }
            } 
        } 
        var_19 += ((/* implicit */_Bool) var_4);
        arr_28 [i_0] = ((/* implicit */signed char) 9223372036854775806LL);
    }
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_7)))));
    var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_9) ? (var_10) : (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33404))) : (var_1)));
}
