/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223233
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) min((var_4), (var_5)))) / (((/* implicit */int) var_8)))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((arr_0 [i_0 - 1] [i_1 + 2]) | (695087370U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned long long int) var_13);
    }
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) > (568735220U))))));
                var_17 += ((((/* implicit */_Bool) 1321957424)) ? (((/* implicit */int) ((signed char) (short)-8341))) : (((((/* implicit */_Bool) (short)27962)) ? (((/* implicit */int) (short)27941)) : (-1321957405))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-1))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & ((~(-1321957412)))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-1))))));
    var_20 += ((/* implicit */unsigned long long int) -1321957416);
}
