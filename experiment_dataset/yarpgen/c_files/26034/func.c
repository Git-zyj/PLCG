/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26034
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
    var_14 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) min((8090996724180832964ULL), (var_4)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_2 [i_0]))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_1 [i_0]))));
        arr_3 [i_0] = max((((/* implicit */int) ((signed char) (+(var_4))))), (((int) max((8090996724180832964ULL), (((/* implicit */unsigned long long int) (signed char)-79))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min(((short)31395), (((/* implicit */short) (signed char)-107))));
                arr_8 [6ULL] |= ((/* implicit */unsigned short) arr_5 [(unsigned char)13] [(unsigned char)13]);
                arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
}
