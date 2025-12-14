/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214477
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1 + 1])) >= (((/* implicit */int) (signed char)-37)))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) || (var_4))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32383)) ? (3203748893U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (((arr_0 [i_0]) % (((/* implicit */long long int) var_10)))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3 - 1] [i_3 + 2]))))) || (((/* implicit */_Bool) max((-4964200213687457482LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)106)) << (((/* implicit */int) (_Bool)1))))))))))));
                    arr_13 [i_2] [i_4] [i_2] [i_4] &= ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) -1186100763)), (var_10)))))));
                    var_16 += (-(((int) (_Bool)1)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_17 *= ((/* implicit */_Bool) arr_5 [i_5]);
        arr_17 [i_5] [i_5] &= ((/* implicit */unsigned short) (~(((((((/* implicit */int) (signed char)-37)) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_5])) + (4398))) - (23)))))));
    }
}
