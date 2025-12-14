/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25469
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
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-31867)) ? (6622861042801437763ULL) : (((/* implicit */unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_7))))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned short) min(((-(arr_1 [i_0]))), (((/* implicit */unsigned int) arr_0 [i_0 + 2]))))))));
                var_15 |= (short)16383;
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        arr_7 [i_2] [i_2 + 1] = ((/* implicit */short) ((((var_1) / (((/* implicit */int) var_11)))) % (((/* implicit */int) arr_3 [i_2 - 2] [i_2 + 1]))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -4530590340774709859LL)) ? (11823883030908113873ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31858)))));
        var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */int) (short)-31874)) : (((/* implicit */int) arr_3 [i_2] [i_2 + 1]))));
    }
    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */int) (!((_Bool)1)));
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 24; i_5 += 1) 
            {
                for (int i_6 = 2; i_6 < 22; i_6 += 2) 
                {
                    {
                        arr_20 [i_5 - 1] [i_4] [i_3] [i_6 + 2] = ((/* implicit */short) ((unsigned int) arr_15 [i_4 - 1] [i_4 - 2] [i_4]));
                        arr_21 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)3)), (-1446980793)))), (arr_8 [i_5 - 2] [i_3])))) ? (min((((/* implicit */unsigned long long int) max((var_11), (arr_18 [i_3] [i_3] [i_5 + 1] [i_6])))), (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3])) ? (arr_13 [i_6 - 1] [i_3]) : (arr_17 [i_6] [i_4 + 1] [i_3]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_5 + 1] [i_6 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_5 + 1] [i_5] [i_3] [i_5 - 1]))))), (0ULL)))));
                        arr_22 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */short) var_6);
                    }
                } 
            } 
        } 
    }
    var_18 &= ((/* implicit */unsigned short) ((4294967291U) & (4179541281U)));
}
