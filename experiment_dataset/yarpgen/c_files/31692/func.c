/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31692
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_13))))))) && (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((min(((-(var_6))), (((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [(signed char)5])))), (((/* implicit */unsigned long long int) var_11)))))));
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                            var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_1 - 1] [i_2 - 1] [i_1 - 1])) : (((/* implicit */int) var_16)))), (((/* implicit */int) min((arr_6 [7U] [i_3] [i_2 - 1] [i_2]), (arr_6 [i_3] [i_3] [i_2 - 1] [i_2]))))));
                        }
                    } 
                } 
                var_23 -= ((/* implicit */unsigned int) (((~(((/* implicit */int) var_18)))) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1] [(signed char)3] [i_1 + 3] [i_1])), (max((((/* implicit */unsigned short) (short)-13166)), (arr_0 [(_Bool)1]))))))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [9U] [9U])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)43)), (var_4)))))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-67)))), (((/* implicit */int) (signed char)-119))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_13 [i_1 + 3] [i_4 + 2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) var_0);
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)13164)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5))))), (min((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-67)), (var_15)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))));
}
