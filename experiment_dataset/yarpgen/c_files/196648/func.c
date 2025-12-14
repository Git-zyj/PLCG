/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196648
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((5680843024220844792ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21973))))) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_1 [(_Bool)1] [i_1]))))) : (((unsigned long long int) 4650174101541701083LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_1] [(_Bool)1]) == (((/* implicit */int) arr_0 [i_1]))))))));
                arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned char)50))))), (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_0 [i_0]);
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_1))));
                            var_22 += ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) arr_3 [i_2] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)7] [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 12765901049488706832ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-9918)))) : (((/* implicit */int) var_3)))) : (((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (16382) : (((/* implicit */int) (short)26399)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-26383))));
    var_25 *= ((/* implicit */unsigned long long int) var_18);
}
