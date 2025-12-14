/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40962
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
    var_11 = ((/* implicit */unsigned short) 2805028797U);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-54)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))) : (((long long int) (signed char)30))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((unsigned char) min((arr_2 [i_1]), (((/* implicit */short) arr_3 [i_1] [i_0 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) var_7))))) != (var_4)));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) 1489938502U)))) || (((/* implicit */_Bool) max((-344506104), (((/* implicit */int) (signed char)38)))))))) <= (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_9 [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_0 - 1]))))));
                            arr_11 [i_0 - 2] [i_1] [i_0 - 2] [i_2] [i_3] [i_3] = (((((+(var_6))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-63)), ((unsigned char)255))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1898))) : (1489938502U));
                            var_16 = ((/* implicit */short) 1832788870);
                            var_17 = ((/* implicit */int) max((min((min((((/* implicit */unsigned int) (_Bool)0)), (1489938502U))), (((/* implicit */unsigned int) ((int) arr_6 [i_0]))))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15752))) : (((unsigned int) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_8)))));
    var_19 = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)38581)) && (((/* implicit */_Bool) 5205888317868672432ULL))))), ((unsigned short)12288));
}
