/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249648
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
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1103895716U)) : (var_9))))) << ((((!(((/* implicit */_Bool) var_1)))) ? ((-(((/* implicit */int) (unsigned char)28)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -972908210)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)133)) || (((/* implicit */_Bool) var_8))))))) ^ (((/* implicit */int) arr_0 [7U] [i_0 + 1]))));
                var_16 -= ((/* implicit */short) ((min((arr_6 [i_0] [i_0 + 1]), (arr_6 [i_0] [i_0 + 1]))) ? (var_10) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0 - 1])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) (unsigned char)133);
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((unsigned int) max((var_10), (((/* implicit */unsigned long long int) var_0))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)28))))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_6 [i_0] [i_0 + 2]), (arr_6 [i_0] [i_0 + 2])))), (arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_1])));
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_20 [17ULL] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) var_7))))) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */long long int) var_12)) : (var_9))) : (((/* implicit */long long int) max((972908219), (((/* implicit */int) arr_8 [i_0] [i_0] [i_6]))))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) var_3))))))));
                                arr_21 [i_6] [i_5] [(unsigned char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_15 [i_0] [i_1])) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-79))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)133))))) || (((/* implicit */_Bool) var_6)))));
}
