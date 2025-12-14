/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237336
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
    var_16 = ((/* implicit */unsigned short) (+((((-(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_8 [i_0] [i_3] [i_0] [i_3] [i_4] [5U]))))))) <= (((arr_3 [i_1 - 1] [i_3]) - (arr_3 [i_1 - 1] [(short)2])))));
                                arr_12 [i_4] [i_4] [i_2] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1] [i_1])) < (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_4] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2])))) ^ ((((_Bool)0) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_1] [i_0] [i_3] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_21 [i_7] [i_1] [i_5] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8176))));
                                var_18 &= ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) -2751445857535401914LL)), (8191ULL))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) ^ (arr_19 [2U] [i_1 + 1] [i_5] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 24ULL))))) : (((/* implicit */int) ((unsigned short) var_6)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [(short)8] [i_1])) ? (arr_7 [14LL] [i_1] [i_1] [5LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)25892)))))));
                var_21 = ((/* implicit */signed char) ((arr_3 [i_0] [i_0]) << (((min((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_1])), ((~(((/* implicit */int) (short)24750)))))) + (32664)))));
            }
        } 
    } 
}
