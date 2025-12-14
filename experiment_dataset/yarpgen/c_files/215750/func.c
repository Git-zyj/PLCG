/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215750
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((-1286514857) | (1286514848)))), (((unsigned int) (unsigned char)0))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (unsigned char)120)) : (-2123659949)));
                    arr_9 [(signed char)2] |= ((/* implicit */unsigned long long int) (~(max((1286514853), (-899351431)))));
                    var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)27)))) <= (max((var_0), (((/* implicit */long long int) arr_0 [i_2] [i_1])))))) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_5 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((max((1286514857), (((/* implicit */int) (_Bool)1)))), (arr_2 [i_0]))))));
                                arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) var_8);
                                var_21 = ((/* implicit */int) (~(((unsigned long long int) ((long long int) arr_3 [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0))))) : (min((2123659937), (var_2)))))) && (((/* implicit */_Bool) var_10))));
    var_23 = ((/* implicit */_Bool) var_4);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) : ((~(var_0)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) ^ ((~(var_2)))))) : (((long long int) ((long long int) var_4)))));
}
