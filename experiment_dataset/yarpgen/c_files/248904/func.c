/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248904
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((max((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_2)))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 6; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)22108);
                    arr_9 [i_1] [i_1] [i_2] = (~(arr_7 [i_1 - 1] [i_2 - 1] [i_2 + 3]));
                }
                var_12 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)43428)) ? (arr_6 [i_0] [i_1 + 2] [i_0] [i_1]) : (-1)))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (signed char i_5 = 3; i_5 < 7; i_5 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_2 [i_4] [i_1 - 2]))) / (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551611ULL)) || (((/* implicit */_Bool) arr_12 [i_1 - 1] [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_1 - 1]))))))))));
                                var_14 = ((/* implicit */signed char) max((((arr_13 [i_0] [i_1] [i_3] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22096))) : (3032391637880773987ULL))), (((((/* implicit */_Bool) max((arr_15 [i_1]), (((/* implicit */unsigned long long int) var_6))))) ? (var_9) : (((/* implicit */unsigned long long int) max((-4781938893970637546LL), (var_8))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((min((15414352435828777632ULL), (((/* implicit */unsigned long long int) 3747228325U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_20 [i_6] [8U] [i_6] [i_3] [8U] [i_1 + 3] [i_6]))))))))));
                                var_16 += ((/* implicit */short) min((max(((signed char)(-127 - 1)), ((signed char)122))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 3032391637880773988ULL)))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1727701491)))))) >= (var_4)));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_4 [(signed char)0] [i_1 + 1]))))));
                    var_18 ^= ((/* implicit */signed char) min((((((/* implicit */long long int) max((2147483635), (((/* implicit */int) arr_10 [i_0]))))) & (arr_4 [i_1 + 2] [i_1 - 2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)43439)))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_8);
    var_20 = ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
}
