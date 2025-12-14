/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232241
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_2] [17U] [i_2]), (arr_6 [i_0] [i_2] [i_0] [i_0])))) && (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [(short)12] [i_2])) || (((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [i_2]))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)8)))), ((~(((arr_1 [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)249))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 13; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 2]))));
                    arr_17 [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) max(((-((-(((/* implicit */int) arr_14 [(signed char)4] [(_Bool)1] [i_5])))))), (((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */long long int) ((((_Bool) arr_9 [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned short)65528))))) : (3470696953399020442LL)));
                                arr_23 [i_3] [i_4 - 2] [(unsigned short)12] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_4 - 2]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_4 - 1])))))));
                                arr_24 [i_3] [9] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_9 [i_3] [i_4])), (((((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (var_12))))) * (min((((/* implicit */unsigned int) (signed char)19)), (4294967292U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) (_Bool)0);
    var_16 = ((/* implicit */short) var_3);
}
