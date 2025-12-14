/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210460
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((max((((((/* implicit */int) var_7)) / (var_5))), (((/* implicit */int) ((short) var_1))))), (((/* implicit */int) ((var_4) != (((/* implicit */int) ((_Bool) var_11))))))));
                    var_16 |= ((/* implicit */long long int) ((((int) var_0)) % (min((var_4), (((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_17 -= ((/* implicit */unsigned short) (signed char)-50);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_18 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_2)))) > (var_14)))) % (((((/* implicit */_Bool) ((-4857904928338955453LL) / (((/* implicit */long long int) var_4))))) ? (((((((/* implicit */int) var_8)) + (2147483647))) >> (((1023LL) - (1020LL))))) : (((/* implicit */int) var_11))))));
            var_19 = ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
            arr_17 [i_3] [i_3] [i_4] = ((/* implicit */int) var_13);
        }
        var_20 = ((/* implicit */unsigned long long int) max((var_20), ((((+(var_10))) - ((+(((var_10) / (((/* implicit */unsigned long long int) var_9))))))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                for (signed char i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((-(-1260384545955338372LL))) - (((/* implicit */long long int) var_14)))))));
                        arr_24 [6ULL] [i_7 + 1] [(signed char)3] [i_7] [i_3] [i_6] = (+(((/* implicit */int) var_7)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((var_14) > (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_12)))));
    }
}
