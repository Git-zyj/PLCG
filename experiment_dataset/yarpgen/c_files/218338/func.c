/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218338
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
    var_20 = ((/* implicit */signed char) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [(_Bool)0] &= ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)18498))))) == ((-(((((/* implicit */_Bool) (short)7453)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))))));
                            var_23 = ((/* implicit */signed char) (short)-27127);
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((((/* implicit */int) (signed char)99)) << (((((/* implicit */int) (short)27127)) - (27124))))) < ((~(((/* implicit */int) max(((short)-18498), (((/* implicit */short) (unsigned char)78))))))))))));
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) max((arr_8 [i_0] [i_0 + 1] [(signed char)20] [(signed char)20]), (((/* implicit */unsigned int) (unsigned char)38))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15506))))));
            }
        } 
    } 
}
