/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41149
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_2))));
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((((((/* implicit */_Bool) max((-1428401031), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (var_6))))) : (((((/* implicit */_Bool) 1428401030)) ? (var_6) : (((/* implicit */unsigned long long int) -368359820)))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (max((var_4), (((/* implicit */unsigned long long int) var_3)))))))))));
    var_12 = ((/* implicit */_Bool) max(((-(var_6))), (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) (signed char)118)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 368359819)) ? (-4194304) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_13 = (+(((/* implicit */int) arr_3 [(unsigned short)9] [i_1])));
                            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) arr_6 [(signed char)3] [i_1] [i_3])) < (-8063639269418654891LL))))))) ? (((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_0])))) : (((/* implicit */int) ((368359813) < ((-(arr_6 [i_0] [i_2] [i_2]))))))));
                        }
                    } 
                } 
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [22ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) & (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1])) : (7407612664383915761LL))) : (((/* implicit */long long int) (-(var_2)))));
            }
        } 
    } 
}
