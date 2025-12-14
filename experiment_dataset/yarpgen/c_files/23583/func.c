/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23583
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
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((15ULL) > (((/* implicit */unsigned long long int) 15)))))) - ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_2)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [(_Bool)1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24056))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                                arr_13 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_1] [1ULL] = ((/* implicit */unsigned short) ((((long long int) 0)) >= (((/* implicit */long long int) ((var_7) ^ (var_3))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) <= (min((var_7), (((/* implicit */unsigned int) var_0))))))));
                                var_13 = ((/* implicit */signed char) (((~(var_2))) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_0] [4] = ((/* implicit */signed char) (~(((/* implicit */int) (!(var_1))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_26 [i_1] [i_1] [2ULL] [2ULL] [i_2] [i_7] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_4))))));
                                var_14 &= ((/* implicit */unsigned short) (+(var_9)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
