/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193064
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_20 = ((long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (unsigned short)56560))))) ? (127) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [(unsigned char)6] [i_1 + 1] [i_2] [i_1]))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 1]))) * (((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1]))))))) != (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 107555472U)) || (((/* implicit */_Bool) 107555472U))))) - ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_3])))))))));
                            var_21 = ((/* implicit */unsigned short) var_1);
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 1] [i_1 + 2]))) : (var_18))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned short)8]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */int) var_19);
                    var_23 = ((/* implicit */unsigned char) arr_17 [i_4 + 1] [i_5 - 1] [i_6] [(unsigned short)10]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_10))));
}
