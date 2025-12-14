/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4724
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
    for (short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (unsigned short)255))));
        var_14 *= ((/* implicit */unsigned int) (signed char)7);
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_15 -= ((/* implicit */short) var_3);
                        var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (var_1)));
                        arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4739678594528966084ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)7)) != (((/* implicit */int) (signed char)-113))))) > (((/* implicit */int) (unsigned char)81)))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)11013)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2181880657U))))));
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)54522);
                        var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 4294967292U)), (max((max((var_2), (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */_Bool) (short)31430)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) arr_14 [i_4]);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_0)))) || (((/* implicit */_Bool) 12485643807727493230ULL))));
    }
    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            var_20 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)7556))))));
            var_21 = ((/* implicit */long long int) max((2119153244U), (3909258697U)));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7))));
                arr_26 [i_5] [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (max((max((((/* implicit */unsigned long long int) (short)-15914)), (arr_17 [i_6]))), (((/* implicit */unsigned long long int) arr_16 [i_5 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (short)16469))))))));
            }
        }
        var_22 = ((/* implicit */int) arr_24 [i_5] [i_5] [i_5]);
    }
    var_23 = ((/* implicit */_Bool) ((unsigned int) var_7));
}
