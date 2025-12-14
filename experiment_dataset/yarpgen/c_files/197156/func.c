/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197156
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_1]));
                    var_15 *= ((/* implicit */unsigned long long int) (~(-1LL)));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : (((long long int) (-(7435605584667511751LL))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [(unsigned char)12] [i_3])), ((short)-11062)))) : ((~(((/* implicit */int) arr_10 [4U]))))))));
        arr_13 [(signed char)0] [i_3] |= ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_5 [i_3] [i_3] [i_3] [i_3]), (arr_5 [i_3] [(unsigned char)8] [i_3] [i_3]))))));
    }
}
