/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246723
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
    var_13 = ((/* implicit */_Bool) var_4);
    var_14 = ((((unsigned long long int) (~(((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (18117929358561210809ULL) : (18117929358561210812ULL)))) ? (((/* implicit */unsigned long long int) (-(-20970848)))) : (((((/* implicit */_Bool) var_12)) ? (328814715148340803ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_3 [i_0] [i_0])))) ? (min((328814715148340807ULL), (arr_3 [(unsigned char)7] [i_1]))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_15 [i_2] [i_1] [(signed char)12] [i_1] = min((((/* implicit */int) ((18117929358561210796ULL) == (arr_13 [i_0] [i_0] [i_0] [i_0])))), (arr_0 [(unsigned char)1]));
                                var_15 *= ((/* implicit */_Bool) arr_11 [5U]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    for (long long int i_6 = 4; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_20 [i_5] [7ULL] [i_5] [(_Bool)1] = ((/* implicit */int) arr_18 [i_5] [i_5] [i_5 + 1] [i_5]);
                            var_16 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (328814715148340803ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (-31357798) : (arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((328814715148340804ULL), (((/* implicit */unsigned long long int) 63))))));
                            var_18 -= ((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_5] [i_5] [2LL] [i_6 - 2]);
                        }
                    } 
                } 
            }
        } 
    } 
}
