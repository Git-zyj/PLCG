/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229512
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((max((arr_5 [i_2] [i_1]), (arr_5 [i_3] [i_2]))) / (((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (arr_5 [i_3] [i_1]) : (arr_5 [i_0] [i_1])))));
                            arr_14 [i_0] [5] [i_0] = (+(((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) (short)5563))))) / (arr_11 [i_3] [i_3] [6LL] [i_3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_19 [i_5] = ((/* implicit */unsigned char) arr_6 [i_0]);
                            var_13 += ((/* implicit */long long int) ((unsigned char) (short)32767));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((4960756642112271951ULL) - (arr_3 [5LL] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 + 1]))))) : (max((((/* implicit */int) var_1)), (-1221802148)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_8);
}
