/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46870
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
    var_16 |= ((/* implicit */unsigned short) min(((-(((/* implicit */int) max((((/* implicit */unsigned char) var_11)), ((unsigned char)140)))))), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_8))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) max((2841986231U), (((var_0) >> (((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) + (49))))))));
                        arr_15 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) var_5)), (((-9078599361310351227LL) * (((/* implicit */long long int) ((((/* implicit */_Bool) 9078599361310351233LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)113)))))))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_15) : (9078599361310351214LL)))))))) + (-9078599361310351217LL)))));
                        var_18 -= ((/* implicit */signed char) (!((_Bool)1)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 2) 
                {
                    {
                        arr_21 [i_0] [i_1] [i_4] [i_5 - 1] [i_5 - 1] [i_4] = ((/* implicit */signed char) min((min((((/* implicit */long long int) (_Bool)1)), (-9078599361310351223LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_7)) - (15985))))))));
                        var_19 = ((/* implicit */unsigned char) (-(((arr_10 [i_0] [i_1] [i_4] [i_4]) * (((7829645159850765497ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */signed char) (~(4968527907137823714LL)));
            arr_22 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_4);
        }
        var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((var_9) || (((/* implicit */_Bool) arr_10 [(_Bool)1] [(unsigned char)0] [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (var_3)))));
        arr_23 [i_0] |= ((/* implicit */_Bool) (+(var_0)));
    }
}
