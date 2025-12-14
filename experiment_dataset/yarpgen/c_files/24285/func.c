/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24285
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0 + 1] = ((/* implicit */signed char) ((_Bool) (signed char)117));
    }
    for (signed char i_1 = 4; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] = arr_4 [i_1 + 1];
        var_11 -= ((unsigned int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) : (((((/* implicit */_Bool) 186455720U)) ? (var_5) : (((/* implicit */unsigned long long int) 398976440U))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (signed char)111);
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_12 |= ((signed char) var_4);
            var_13 = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1 - 2] [i_2 + 1])))))));
            arr_11 [i_2] [12U] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_2 + 3] [i_2 + 3])))));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_14 ^= ((/* implicit */unsigned short) (unsigned char)255);
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))) ? (((4294967295U) ^ (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 888317462)) ? (((/* implicit */int) (signed char)-113)) : (888317466))))))) ? (1954583369) : (((/* implicit */int) ((unsigned short) (unsigned short)25824)))));
                    }
                } 
            } 
        }
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (signed char)112))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)63), (((/* implicit */unsigned short) arr_14 [16U] [i_1] [i_1] [i_1])))))) : (min((var_2), (0U))))), (var_2))))));
    }
    for (short i_5 = 4; i_5 < 11; i_5 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((arr_0 [i_5]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 3) 
        {
            arr_21 [i_6] = ((/* implicit */unsigned char) var_4);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (1U) : (20U)))) ? (arr_1 [i_6]) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_5 + 2])) & (((/* implicit */int) (signed char)(-127 - 1)))))))) : (((/* implicit */long long int) (+(max((-2), (((/* implicit */int) arr_0 [(short)12])))))))));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) ((_Bool) ((int) arr_19 [11ULL] [i_6])))) << ((((+(-7636816850444969132LL))) + (7636816850444969150LL))))))));
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_16 [i_6 - 4] [6U] [i_6] [i_6]), (((/* implicit */unsigned int) arr_19 [i_5 + 1] [i_6 - 4])))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)15)))))) ? (((int) var_3)) : (0)));
        }
    }
    var_22 = ((/* implicit */unsigned int) var_7);
    var_23 = ((/* implicit */long long int) max((511ULL), (((/* implicit */unsigned long long int) ((short) (signed char)(-127 - 1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        var_24 -= ((/* implicit */unsigned int) ((signed char) 7636816850444969126LL));
        arr_26 [(signed char)11] = ((/* implicit */unsigned int) (unsigned char)255);
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (short)14))));
        var_26 = ((/* implicit */unsigned short) var_5);
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (short)127)) ? (((((/* implicit */_Bool) (~(-2)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (+(5))))));
    }
    for (unsigned short i_9 = 1; i_9 < 9; i_9 += 3) 
    {
        var_28 = ((/* implicit */long long int) 2);
        var_29 = ((/* implicit */_Bool) min((((unsigned int) 8)), (((/* implicit */unsigned int) ((int) ((unsigned char) 4294967295U))))));
    }
    for (unsigned short i_10 = 3; i_10 < 12; i_10 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) -2)));
        var_31 = ((/* implicit */int) (_Bool)1);
    }
    var_32 |= ((/* implicit */unsigned int) var_10);
}
