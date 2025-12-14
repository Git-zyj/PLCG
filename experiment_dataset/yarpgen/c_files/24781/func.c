/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24781
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
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) var_6);
                    var_20 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned char)156)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (arr_2 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)116))));
        arr_12 [i_3] = ((/* implicit */short) min(((unsigned char)179), ((unsigned char)252)));
    }
    var_22 = ((int) ((unsigned short) min((1293554362), (((/* implicit */int) var_10)))));
}
