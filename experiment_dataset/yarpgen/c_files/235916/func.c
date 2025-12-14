/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235916
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_4), ((signed char)-50)))), (var_1)))), (max((((/* implicit */unsigned long long int) 978263989U)), (var_10))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_4 [i_0] [i_1]), (var_6)))))) != (max((2580968397127737835LL), (((/* implicit */long long int) arr_1 [i_1] [i_0]))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 4; i_3 < 20; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_15 [i_4] = var_2;
                            arr_16 [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4] = min((((/* implicit */long long int) 1314340864)), ((-9223372036854775807LL - 1LL)));
                            var_14 = ((/* implicit */int) ((long long int) var_5));
                            var_15 += ((/* implicit */int) arr_8 [i_0] [i_0] [i_4 - 1]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                arr_19 [i_5 + 1] [i_1] = ((/* implicit */short) ((unsigned char) max(((signed char)39), ((signed char)-47))));
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)-1)), (((long long int) (signed char)54))));
                            var_17 = ((/* implicit */int) (~(arr_23 [i_7 - 1] [i_6 - 1] [i_5 + 1] [i_5 - 1])));
                            var_18 = ((/* implicit */signed char) ((unsigned char) arr_11 [i_1] [i_1] [i_5 - 1] [i_7 - 3]));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */int) (signed char)8)), (-1461905279))))));
                            arr_26 [12U] [12U] [17U] [i_1] [i_1] = ((/* implicit */int) arr_25 [i_1] [i_5] [i_6] [(signed char)12]);
                        }
                    } 
                } 
            }
        }
        var_20 -= ((/* implicit */long long int) 3665643899U);
    }
    for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((3317474478U), (((/* implicit */unsigned int) (short)-32007))));
        var_22 |= min(((unsigned char)158), (((/* implicit */unsigned char) (signed char)-127)));
        var_23 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((int) (signed char)40)) >> (((((/* implicit */int) (signed char)-79)) + (109)))))), (min((((/* implicit */unsigned long long int) (unsigned char)9)), (221504198273312753ULL)))));
    }
    /* LoopNest 3 */
    for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                {
                    var_24 |= ((/* implicit */long long int) var_6);
                    /* LoopSeq 1 */
                    for (int i_12 = 3; i_12 < 18; i_12 += 4) 
                    {
                        var_25 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_9 - 1] [i_10] [i_11])) / (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_12] [i_12 - 3] [i_12 - 2] [i_12 - 3] [i_12 + 1] [i_12 - 3])))))) : (((((/* implicit */_Bool) (signed char)-105)) ? (6078016865275025139ULL) : (18446744073709551601ULL))));
                        arr_40 [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)2)) >> (((((/* implicit */int) (signed char)91)) - (70))))) >> (((var_11) - (4262330035676420623LL)))));
                        arr_41 [i_9] [i_10] = ((/* implicit */int) var_2);
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((min(((-(var_9))), (((/* implicit */unsigned long long int) var_11)))), (var_10)));
    var_27 |= ((/* implicit */long long int) (~(var_10)));
}
