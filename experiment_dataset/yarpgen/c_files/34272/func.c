/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34272
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) max(((signed char)26), ((signed char)-26))))));
                            var_12 ^= ((/* implicit */long long int) arr_5 [i_2]);
                            var_13 += ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) (((~(((/* implicit */int) (signed char)-26)))) >> (((min((((/* implicit */unsigned int) (unsigned short)65535)), (var_3))) - (65529U))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0 - 1] [i_4 + 1] [i_4] [i_4] [i_1])))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_3))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-120)) == (((/* implicit */int) (unsigned short)22630))))), ((-(var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [(_Bool)1]))) : (var_3)))))));
                            arr_24 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */signed char) min((var_9), (((/* implicit */short) ((signed char) (signed char)-27)))));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */_Bool) max((((/* implicit */short) var_6)), (max((((/* implicit */short) arr_21 [i_0 - 1] [i_0] [i_0])), (var_10)))))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */long long int) var_3)));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(var_3)))) ? (((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((_Bool) var_0)))))));
}
