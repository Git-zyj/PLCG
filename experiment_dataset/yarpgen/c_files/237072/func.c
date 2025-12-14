/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237072
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */long long int) 680561340U)) : (((((/* implicit */_Bool) (unsigned short)40251)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((-((+(var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) arr_1 [i_0 + 2] [i_1]))), ((+(-634505344)))))) >= ((+(((var_7) ? (16088262675225753930ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) arr_11 [i_2] [i_3] [i_3] [i_4]);
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */long long int) 704322086U)) / ((-(-387186901934562922LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
}
