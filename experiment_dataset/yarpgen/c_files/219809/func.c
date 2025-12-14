/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219809
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1701971705301104834ULL)) ? (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) / (12558151385597238498ULL))) : (((/* implicit */unsigned long long int) 4876133542000004893LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1701971705301104834ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) : (5888592688112313118ULL)))) && (((/* implicit */_Bool) 4876133542000004893LL)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_2]);
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4]))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (max((12558151385597238471ULL), (16744772368408446781ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5518860667686788875LL)) ? (4876133542000004893LL) : (((/* implicit */long long int) 0))))) ? (arr_7 [i_0] [i_1 + 3] [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_4 [i_4] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_8), (var_14)));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    arr_21 [i_7] &= max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((unsigned long long int) (_Bool)1)) : (5888592688112313128ULL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_24 [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (unsigned char)8))));
                        var_25 = ((/* implicit */unsigned short) (-(arr_8 [i_7] [i_7] [i_7] [i_7] [i_6 - 2] [i_6 - 1])));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775789LL)) ? (5518860667686788883LL) : (((/* implicit */long long int) 0U))));
                    }
                    var_27 = ((/* implicit */unsigned char) arr_0 [i_5]);
                    var_28 = ((/* implicit */short) arr_5 [i_6] [i_5] [i_7] [0]);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) var_2);
    var_30 &= max((((/* implicit */long long int) var_3)), (min((var_15), (var_7))));
}
