/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34170
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_0 [i_0]))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)25763)) : (((/* implicit */int) (unsigned short)63)))))))));
                arr_7 [17LL] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 - 2]))))) ? (((/* implicit */int) min((((unsigned short) (unsigned char)28)), ((unsigned short)51549)))) : (((((/* implicit */_Bool) arr_1 [i_0] [17U])) ? ((-(((/* implicit */int) arr_4 [(unsigned short)1])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [(unsigned short)4] [i_3] [i_4] = ((/* implicit */short) (unsigned short)61362);
                    var_17 = ((/* implicit */unsigned int) max(((((+(((/* implicit */int) (unsigned char)79)))) >> (((((/* implicit */int) arr_9 [i_3])) - (3799))))), ((((~(((/* implicit */int) (unsigned char)0)))) ^ (((/* implicit */int) arr_4 [i_4]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
}
