/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190400
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
    var_11 = ((/* implicit */int) -8727933739883848911LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-29)) + (2147483647))) >> (((var_3) - (51971378U)))))) ? ((~(arr_4 [i_0] [i_0] [i_2]))) : (((/* implicit */long long int) ((int) 6972253924893149316LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)200))))) ? (((/* implicit */int) ((-531904208622865878LL) < (((/* implicit */long long int) arr_3 [i_1] [i_1]))))) : (((/* implicit */int) (unsigned char)61)))))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((_Bool) (+(arr_4 [i_2 + 1] [i_2] [i_2 + 3])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (~(((int) (unsigned char)165))));
    var_15 = ((/* implicit */int) var_9);
}
