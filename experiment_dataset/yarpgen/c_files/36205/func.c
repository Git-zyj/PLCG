/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36205
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
    var_14 += ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) var_4)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                        var_16 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_8 [13ULL] [i_0] [i_1] [i_3 + 2] [11ULL] [i_2]))))));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */short) -1914185849243157266LL);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_15 [i_4]))));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((unsigned int) var_3));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_21 [20LL] [i_4] [i_6] [i_6 + 2] = (short)4149;
                    var_19 = ((/* implicit */int) (((+(var_1))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_12)) : (-199631926))))));
                }
            } 
        } 
    }
}
