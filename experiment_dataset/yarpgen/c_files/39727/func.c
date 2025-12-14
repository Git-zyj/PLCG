/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39727
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1707614347)) ? (287741177) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((-5LL) + (9223372036854775807LL))) << (((arr_1 [i_3 + 3]) - (1187351872)))))) ? (((((/* implicit */_Bool) arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_6 [i_3 - 2] [i_1] [i_3 + 2])) : (arr_11 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_2] [(_Bool)1]) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0])))))))))));
                            arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 947089456)) ? (((/* implicit */int) min((arr_5 [i_2]), ((signed char)12)))) : ((-(arr_7 [i_3] [i_0] [i_0]))))) > (max((((/* implicit */int) arr_9 [i_3 - 2] [i_3 + 3] [i_1])), (-1416604723)))));
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 3])) ? (arr_12 [i_0] [0U] [i_2] [i_2] [i_3 + 1] [i_3 - 2]) : (arr_12 [i_1] [i_2] [i_2] [i_2] [i_3 - 3] [i_3 - 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_3] [i_3] [1LL] [i_3 + 1] [i_3 - 1] [i_3 + 3]) == (arr_12 [(_Bool)1] [i_0] [i_1] [i_2] [i_3 - 3] [i_3 + 1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_23 = (i_1 % 2 == 0) ? (((((arr_6 [i_0] [i_1] [i_0]) + (2147483647))) << (((((-1416604718) + (1416604741))) - (23))))) : (((((((arr_6 [i_0] [i_1] [i_0]) - (2147483647))) + (2147483647))) << (((((-1416604718) + (1416604741))) - (23)))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_0])) / (((/* implicit */int) arr_9 [i_4] [i_4] [i_5]))))), (((((((/* implicit */_Bool) arr_14 [2U] [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) arr_20 [i_1] [i_6])))) ? (((/* implicit */long long int) ((-1533316342) - (((/* implicit */int) arr_3 [i_0]))))) : (((4534996753305002299LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))))))));
                                var_25 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) (short)9033))) / (-2270114858427369539LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (unsigned short)32873)) : (var_0)))) ? (((32256) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max(((unsigned short)32256), (((/* implicit */unsigned short) (short)127)))))))) ? (((/* implicit */int) (((+(var_0))) > (((((/* implicit */_Bool) var_16)) ? (var_2) : (var_0)))))) : (((/* implicit */int) var_13)));
    var_27 = ((/* implicit */unsigned short) max(((+(min((var_12), (var_2))))), (var_0)));
}
