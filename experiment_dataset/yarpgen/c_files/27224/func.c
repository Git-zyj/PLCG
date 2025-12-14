/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27224
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)40))))) & (((/* implicit */int) (unsigned short)31389)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                }
                var_14 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)64013)) : (var_3)))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_11)))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_2)), (6212159481681611709ULL))))) : (((/* implicit */int) var_6)));
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */unsigned char) (~((-(((var_5) & (((/* implicit */unsigned int) 640875442))))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            {
                var_18 |= ((((/* implicit */unsigned int) ((/* implicit */int) ((7LL) == (((/* implicit */long long int) arr_12 [8ULL] [i_3] [8ULL])))))) + (((arr_12 [i_3] [i_4] [4]) | (arr_12 [i_4] [i_4] [(unsigned char)18]))));
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 11583742055529453531ULL);
            }
        } 
    } 
}
