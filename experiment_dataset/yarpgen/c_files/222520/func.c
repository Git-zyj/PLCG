/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222520
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_9)))))) / (max((((/* implicit */long long int) var_11)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (((((/* implicit */_Bool) var_11)) ? (min((var_0), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_2))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 &= ((/* implicit */_Bool) min((((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_0 + 1]))))) << (((min((((/* implicit */int) var_11)), (var_4))) - (222))))), (min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-7)), (arr_4 [i_1]))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    arr_7 [i_0 + 1] [i_1] [i_0] = ((/* implicit */signed char) arr_5 [i_0 + 1] [i_1] [i_0] [i_2]);
                    arr_8 [i_0 + 1] [i_0] [i_1] [i_2] = ((/* implicit */short) (unsigned short)1023);
                }
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_11 [i_0] = ((/* implicit */int) ((signed char) var_8));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 2147483635)) ? (var_0) : (((/* implicit */unsigned long long int) 6U)))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned short) var_3);
                                arr_19 [i_6] [i_5 + 1] [i_5] [i_1] [i_0 + 3] |= ((/* implicit */signed char) -2147483636);
                            }
                            var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_0] [i_4 - 2])) && (((/* implicit */_Bool) arr_17 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_4 + 1]))))), ((+((+(var_4)))))));
                            var_19 = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_10))));
                        }
                    } 
                } 
                var_20 = arr_15 [i_0 + 2] [i_1] [i_1] [i_1] [i_1] [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 23; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                arr_26 [i_8] [i_7 - 1] = ((/* implicit */int) var_9);
                arr_27 [i_7 + 1] [i_8] [i_8] = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
}
