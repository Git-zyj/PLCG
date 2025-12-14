/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217664
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
    var_19 *= ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] [14U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                arr_6 [i_0] [(short)10] = ((/* implicit */unsigned int) ((signed char) (short)5445));
                var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (short)5462)) - (((/* implicit */int) (unsigned char)92)))));
                            arr_14 [i_0 - 1] [i_1] [i_2 - 1] [i_0 - 1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) (+(((unsigned int) (short)5445))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 1]))) : (((((/* implicit */unsigned long long int) 1256989189U)) * (var_9))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)50789)) : (2147483647)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [(signed char)0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_18))))) : (((var_9) - (arr_8 [i_3] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned short)12])) : ((-(-792033684))))))));
                            var_23 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(max((-1226436212), (((/* implicit */int) (unsigned short)65535))))))) - (var_11)));
                            arr_15 [i_0] [i_1] [i_2 - 1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((-1226436215), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            {
                arr_20 [i_4] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) 1621168149912362004ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7873632450806396761ULL))), (((unsigned long long int) arr_19 [i_5 - 3] [i_5]))));
                arr_21 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((short) arr_19 [i_4] [i_5]));
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (~(var_0)))), (var_13))), (var_13)));
}
