/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234005
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)5)) > (((/* implicit */int) (unsigned char)66))))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)37)))) & (((/* implicit */int) var_9))));
                        }
                    } 
                } 
                arr_14 [10LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)224))) ? (((/* implicit */int) (unsigned char)78)) : ((-(((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)125))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        for (short i_5 = 4; i_5 < 13; i_5 += 1) 
        {
            {
                arr_19 [i_4] = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4]))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)172))))) || (((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168)))))))))));
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (~(((/* implicit */int) ((max((var_7), (var_10))) != (var_10)))))))));
            }
        } 
    } 
    var_12 = var_1;
    var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (((((/* implicit */long long int) var_5)) ^ ((+(8604178628432308950LL)))))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 309605U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 2344540658U))))))))), (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56275))) : (8604178628432308950LL)))));
}
