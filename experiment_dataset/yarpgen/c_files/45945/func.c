/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45945
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
    var_16 -= ((int) (unsigned short)34653);
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) max((((/* implicit */int) (short)(-32767 - 1))), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((3147219498U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-31160))))) ? (3147219495U) : (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))))))), (((long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31181))))))));
                                var_19 ^= ((/* implicit */unsigned char) ((min((8488372997763495385LL), (((/* implicit */long long int) (short)31181)))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) -843899208))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)219)) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (short)29902)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (signed char)80)))) / (((/* implicit */int) arr_1 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) | (((long long int) (unsigned char)145)))) | (((/* implicit */long long int) (~(min((((/* implicit */int) var_6)), (var_5))))))));
                                var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -7310491349599724439LL)) ? (((/* implicit */int) var_6)) : (3))), (((/* implicit */int) var_10))));
                                var_23 -= ((/* implicit */unsigned int) 1630407483465575031LL);
                                var_24 = ((/* implicit */long long int) var_15);
                                var_25 ^= ((/* implicit */short) ((min((((/* implicit */long long int) (unsigned char)0)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [0LL]))) - (var_13)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
