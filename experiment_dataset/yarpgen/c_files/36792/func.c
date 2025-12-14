/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36792
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
    var_11 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) (unsigned short)23044)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) ((unsigned short) -19226419))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) arr_1 [(unsigned short)10]);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (~((((-(((/* implicit */int) arr_3 [(signed char)18])))) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)38)))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1073741824)))) != (arr_0 [i_0])));
                                arr_17 [i_0] [(unsigned char)5] [14ULL] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((signed char)18), (((/* implicit */signed char) (_Bool)1))))) | ((~(((/* implicit */int) (unsigned short)61089))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(min((arr_0 [i_0 + 1]), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [2ULL] [i_1]))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_9);
}
