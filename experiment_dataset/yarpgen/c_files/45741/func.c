/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45741
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_12)), (var_10))), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (short)-19711)))))))) ? ((-(((/* implicit */int) ((var_12) >= (((/* implicit */int) (short)-25216))))))) : (((/* implicit */int) ((short) (+(((/* implicit */int) arr_1 [(unsigned char)0]))))))));
                            arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (((+(min((var_7), (((/* implicit */unsigned int) (unsigned char)241)))))) * (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) arr_3 [(signed char)7] [i_1] [i_2 - 2])))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((950667735U) | (407441363U)))) ? (((/* implicit */int) max((arr_8 [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)0))))) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))) | (((250740366U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                arr_12 [i_0] [i_1] = ((/* implicit */int) (signed char)0);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)0), (((/* implicit */signed char) (_Bool)1))))) != (((/* implicit */int) var_4))));
}
