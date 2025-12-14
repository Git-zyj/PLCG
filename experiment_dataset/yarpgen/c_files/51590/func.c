/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51590
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -674850714)) ? (((/* implicit */int) var_3)) : (674850713)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_6)))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_6)) ? (14465781605957570054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_4))))))))));
    var_13 -= ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (var_11) : ((+(var_11))))), (((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6481191650724792279LL)) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) (short)0))))))) ? (((/* implicit */int) (short)224)) : (((/* implicit */int) ((-674850714) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [2])) : (((/* implicit */int) var_8)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_16 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_1] [i_3])))) || (((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)1)) > (674850713)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_11 [i_0] [i_1] [i_3]))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_3] [i_2] [i_0] [i_0])), (-3816704796322541298LL))))))));
                            arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(arr_12 [i_1] [i_1] [i_0])))) || (((_Bool) var_9))))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) var_10)))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((long long int) ((int) (short)32767))))));
                            var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])) ? (max((((/* implicit */long long int) var_1)), (arr_12 [i_0] [i_0] [i_0]))) : ((~(arr_7 [i_0] [i_1] [5] [i_3])))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))), (((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 2])))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_4] [i_1] = ((/* implicit */long long int) var_6);
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_3))));
                            arr_22 [i_0] [i_0] [i_4] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8)))));
                            arr_23 [i_0] [i_0] [(short)0] [i_0] [i_0] [i_0] = ((unsigned long long int) max(((-(var_11))), (((/* implicit */long long int) (unsigned short)55874))));
                        }
                    } 
                } 
            }
        } 
    } 
}
