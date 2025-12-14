/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197781
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
    var_10 -= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 1024U)))), (var_7))), ((_Bool)0)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_6 [i_4 + 3])))), (((/* implicit */int) max((arr_6 [i_4 + 3]), (arr_6 [i_4 + 1]))))));
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) (short)255)) >> (((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1)))))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_3 + 1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((max((var_5), (((/* implicit */int) arr_6 [i_1])))) <= (((/* implicit */int) (unsigned char)224))))), ((-(((/* implicit */int) (signed char)0))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_13 = ((min((arr_16 [i_0] [i_1] [i_5] [i_6]), (((arr_16 [i_0] [i_5] [i_0] [i_0]) - (((/* implicit */long long int) var_5)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])))))));
                                var_14 += ((/* implicit */unsigned short) arr_19 [i_5]);
                                arr_21 [i_0] [i_1] [i_5] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_18 [(short)9] [i_7] [(short)7] [i_5] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0])) == (max((13420096719820558564ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))))))))))));
                var_16 += ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) arr_5 [i_0] [i_1] [i_1] [(_Bool)1])));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_2);
}
