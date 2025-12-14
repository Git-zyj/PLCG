/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5135
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    var_13 &= ((/* implicit */short) ((_Bool) 0ULL));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((short) arr_5 [i_2]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_14 *= ((/* implicit */short) -4329805658160530503LL);
                                var_15 = ((((/* implicit */_Bool) 17042430230528LL)) ? ((-(arr_0 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                                var_16 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) -117253532)) ? (-2263310006352463980LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_3] [i_3 - 1])))));
                                arr_16 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) var_3));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])))))) : (4329805658160530502LL)))) ? (((/* implicit */long long int) (((-(117253563))) / (((/* implicit */int) (signed char)18))))) : (arr_2 [i_5]))))));
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_5]);
                }
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -4329805658160530491LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_14 [(short)1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)32584)) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_14 [(signed char)18] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])))));
                arr_20 [i_1] [i_0] = ((/* implicit */unsigned short) min((((3462992732U) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25589)) << (((4329805658160530491LL) - (4329805658160530491LL)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((12426475532558803434ULL), (((/* implicit */unsigned long long int) (unsigned short)59368))))) && (((/* implicit */_Bool) 8ULL)))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) 534380072789039962ULL);
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_20 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)50376))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_14 [i_6] [i_6] [19U] [i_6] [20] [19U] [i_6]))));
        var_22 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)36)) != (((/* implicit */int) (signed char)(-127 - 1))))))));
    }
}
