/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222033
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
    var_15 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -2147483630)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (18063610078755039926ULL));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_1 [i_2 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [4] [i_1] [i_3] [i_1] [i_3])) <= (611775655)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
                                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 611775655)) ? (866785722) : (-1257855672)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-13)) : (-24))))));
                                var_18 = ((/* implicit */long long int) arr_0 [i_0]);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_13 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))) ? (((var_2) / (var_2))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_6 [i_0])), (arr_10 [i_1] [i_0] [i_1] [1LL] [i_0] [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) (((~(var_9))) < (((/* implicit */unsigned long long int) (+(arr_14 [i_7] [i_5 + 1]))))));
                                var_21 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_18 [i_5 - 1] [i_5 + 1] [i_0]) : (arr_18 [i_5 - 2] [i_5 - 1] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_0)))) ? ((-(arr_25 [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)47)))))));
        arr_26 [i_8] [i_8] = ((/* implicit */int) var_14);
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (+(((((/* implicit */_Bool) 2013265920)) ? (((/* implicit */long long int) arr_25 [i_8])) : (arr_24 [i_8]))))))));
        var_25 = 134994719U;
    }
}
