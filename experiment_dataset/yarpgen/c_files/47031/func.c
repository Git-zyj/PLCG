/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47031
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_2]) : (arr_2 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)21)) <= (((/* implicit */int) (short)22269))))))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13478))))) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_21 = ((arr_14 [i_3]) || (((((/* implicit */int) ((((/* implicit */int) arr_6 [i_4])) > (((/* implicit */int) var_10))))) <= ((+(((/* implicit */int) arr_4 [6U] [i_3] [6U])))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13478)));
                            var_23 = min((((/* implicit */unsigned int) (unsigned short)13486)), (min((arr_12 [(_Bool)0]), (arr_12 [i_5]))));
                        }
                    } 
                } 
                arr_19 [i_3] [i_3] [i_3] |= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned short)13486)))), (((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) arr_3 [i_3] [i_4] [i_4])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)13478)) ? (((/* implicit */int) (unsigned short)52049)) : (((/* implicit */int) (unsigned short)52048)))));
    var_25 = ((/* implicit */signed char) var_4);
}
