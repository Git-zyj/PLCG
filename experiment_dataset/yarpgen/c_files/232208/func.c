/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232208
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_18)) > (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = arr_0 [i_0 + 1];
                arr_6 [i_0] [i_0] [17ULL] = ((/* implicit */long long int) var_5);
                arr_7 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((unsigned char) arr_3 [i_0] [i_1 - 2] [i_1]))))));
                arr_8 [i_1] &= (signed char)102;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) (short)-9377);
                /* LoopSeq 3 */
                for (int i_4 = 3; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_15 [i_2] [(signed char)21] [i_4]))));
                    arr_16 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4 - 3]);
                }
                for (int i_5 = 3; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_5] [i_3] [i_2] = ((/* implicit */short) var_12);
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_26 [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_18 [i_5 + 2] [i_5 - 2]))) ? (((long long int) 978908762827579039LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_5 + 2])) ? (((/* implicit */int) arr_14 [i_5 + 2] [i_5 - 2] [i_5 - 2] [i_5 - 2])) : (arr_18 [i_6] [i_5 + 2]))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) var_16)))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3931047371U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_5]))) : (arr_15 [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_17 [i_5] [(unsigned char)10] [i_2])) : (((/* implicit */int) (signed char)-90)))) : (((((/* implicit */_Bool) 363919925U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_5] [22LL]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)28))))) : (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (var_4))) & (((/* implicit */long long int) 3931047371U))))));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 21; i_7 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */short) ((arr_29 [i_2] [i_2] [i_7]) || (arr_29 [i_3] [i_3] [i_7 + 1])));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((unsigned long long int) ((arr_12 [i_2] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                }
                var_28 = ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (9246558812177222703ULL))) ? (arr_19 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_16)))))))));
            }
        } 
    } 
}
