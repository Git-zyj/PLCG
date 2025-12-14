/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20262
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
    var_13 = ((/* implicit */unsigned short) max((max((min((((/* implicit */unsigned long long int) var_2)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)-11359))))));
                var_15 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 7; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_16 ^= ((/* implicit */short) max((((((((/* implicit */int) (unsigned char)67)) > (((/* implicit */int) var_10)))) ? (((((/* implicit */int) (signed char)-96)) + (arr_7 [i_2] [i_3]))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)23)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_2])) < (((((/* implicit */unsigned long long int) var_5)) % (arr_3 [i_2] [i_3] [i_3]))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_17 += ((/* implicit */short) arr_2 [i_5] [i_2]);
                            var_18 += ((/* implicit */unsigned long long int) arr_5 [i_3] [i_5]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max((((/* implicit */int) (signed char)71)), (((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((unsigned short)22227), (((/* implicit */unsigned short) (_Bool)1)))))))));
            }
        } 
    } 
}
