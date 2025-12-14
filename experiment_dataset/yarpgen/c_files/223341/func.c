/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223341
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (~(var_0)));
                var_12 = ((/* implicit */signed char) (~(4294967295U)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) max(((short)-32766), (arr_6 [i_2]))))))), (max((((/* implicit */unsigned int) var_5)), ((-(var_7)))))));
        arr_7 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) var_1)), (min((((/* implicit */short) var_5)), (var_4))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 |= ((/* implicit */int) var_9);
        var_15 += ((/* implicit */unsigned long long int) ((((3634086807737548206ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2054153416)) ? (2054153408) : (-2054153414)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3] [i_3])) / ((-(((/* implicit */int) arr_8 [i_3] [17U])))))))));
        arr_10 [i_3] = ((/* implicit */_Bool) arr_4 [i_3]);
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) var_0);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-32766)), (((((/* implicit */_Bool) arr_4 [i_4])) ? (((((/* implicit */_Bool) 4294967272U)) ? (2054153416) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_23 [i_5] = ((/* implicit */signed char) var_1);
                    arr_24 [i_5] [i_5] [5] = ((/* implicit */signed char) (unsigned char)0);
                }
            } 
        } 
        arr_25 [i_4] [i_4] = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) var_10))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_0))));
        var_17 *= ((/* implicit */unsigned int) arr_13 [7LL]);
    }
    var_18 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (4698453039077056354ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9031086524122789538ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : ((~(var_0))))));
    var_19 = min((((((var_2) << (((((-2054153408) + (2054153449))) - (41))))) / (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) (unsigned short)53605))))))), (min((((/* implicit */long long int) -2054153420)), (((((/* implicit */long long int) var_0)) - (-8739540959085975529LL))))));
}
