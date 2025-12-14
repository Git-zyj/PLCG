/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242142
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
    var_17 = ((/* implicit */unsigned int) min((var_5), (max((max((var_12), (var_3))), (((/* implicit */unsigned long long int) var_0))))));
    var_18 += ((/* implicit */unsigned short) max((min((6895357743649277924ULL), (((/* implicit */unsigned long long int) (unsigned short)30089)))), (max((((/* implicit */unsigned long long int) var_16)), (min((((/* implicit */unsigned long long int) (signed char)-5)), (7827870901098125978ULL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = var_5;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
        var_19 = ((/* implicit */_Bool) var_8);
        var_20 = var_14;
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) var_13);
        var_22 |= var_5;
    }
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (max((min((min((var_15), (var_15))), (min((((/* implicit */unsigned int) (unsigned char)16)), (1U))))), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9650))), (((/* implicit */unsigned short) max((var_13), (var_14)))))))))));
        var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((var_2), (var_11)))), (var_15)))), (min((max((((/* implicit */unsigned long long int) var_15)), (var_5))), (((/* implicit */unsigned long long int) min((var_11), (var_11))))))));
        var_25 = ((/* implicit */long long int) var_9);
        var_26 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (unsigned short)35446)), (min((5853946968039123580ULL), (((/* implicit */unsigned long long int) -4130493258411953799LL)))))), (((/* implicit */unsigned long long int) (signed char)106))));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_27 = min((min((((/* implicit */unsigned long long int) var_16)), (max((var_4), (((/* implicit */unsigned long long int) var_15)))))), (var_1));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_18 [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_0);
                        var_28 = ((/* implicit */unsigned short) max((max((min((var_3), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_6)))), (max((max((((/* implicit */unsigned long long int) var_11)), (var_12))), (min((var_4), (var_3)))))));
                        arr_19 [i_5] [i_4] [(_Bool)0] [i_4] [i_6] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_16)), (var_15))), (((/* implicit */unsigned int) var_13))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_29 |= ((/* implicit */int) max((min((var_1), (max((var_4), (((/* implicit */unsigned long long int) var_16)))))), (max((max((((/* implicit */unsigned long long int) var_9)), (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_6))))))));
            var_30 = ((/* implicit */unsigned char) var_6);
        }
        var_31 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_8)))), (max((min((var_7), (var_4))), (max((var_5), (((/* implicit */unsigned long long int) var_6))))))));
        arr_22 [i_3] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned short) var_11))))), (min((((/* implicit */unsigned long long int) var_2)), (var_12))))), (min((min((var_5), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_8))))));
    }
}
