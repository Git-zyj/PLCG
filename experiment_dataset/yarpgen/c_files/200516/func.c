/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200516
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 *= (short)-5083;
        var_16 -= ((/* implicit */unsigned char) min(((((!((_Bool)1))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) arr_1 [(_Bool)1]))))), (((/* implicit */int) (short)5079))));
        var_17 = ((/* implicit */unsigned int) max(((short)5079), (max((((/* implicit */short) arr_2 [i_0])), ((short)-5082)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_13);
                        var_19 *= ((/* implicit */short) 17937861434385451058ULL);
                    }
                } 
            } 
            var_20 = min((var_9), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((short)5082), (((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_1])))))))));
            var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0])))))), (((long long int) var_4))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (short i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_22 = (!(((/* implicit */_Bool) max(((short)5082), ((short)5082)))));
                        var_23 = ((/* implicit */short) (!(((_Bool) arr_1 [i_5 + 2]))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_6] [i_6]))))) || (var_6))) && (((((/* implicit */_Bool) (short)5082)) || (((/* implicit */_Bool) arr_16 [i_6] [i_6] [(signed char)4] [i_6] [i_6]))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_6])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_6])))))))) ? (min((((((/* implicit */int) var_6)) * (((/* implicit */int) (short)5080)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((((/* implicit */_Bool) (short)5081)) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_1 [i_6]))))));
    }
    var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -4267342359268132718LL)) & ((~(((unsigned long long int) (short)5073))))));
}
