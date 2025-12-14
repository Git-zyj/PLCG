/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225315
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = 4262132301507126909LL;
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) var_5)))))));
        var_21 = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) var_9)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_22 |= ((/* implicit */_Bool) var_7);
                        arr_15 [(unsigned short)0] [(short)0] [i_3] = ((/* implicit */long long int) min((-502477559), (((/* implicit */int) min((arr_9 [i_3 + 1] [i_1 + 1] [i_1] [i_1]), (arr_9 [i_3 - 1] [i_1 + 1] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned char) (~(min((((int) var_8)), (31744)))));
        var_23 |= ((/* implicit */short) 1480059257U);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (signed char i_6 = 1; i_6 < 10; i_6 += 2) 
            {
                {
                    var_24 *= ((/* implicit */long long int) (~(28672)));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) && (((/* implicit */_Bool) var_3))))))));
                    arr_23 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5003526701581392078ULL)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) var_18))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)18410)))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) -2038569713))));
    var_28 = ((/* implicit */unsigned short) var_3);
    var_29 &= (+(((5336409002938517028LL) / (((/* implicit */long long int) var_13)))));
}
