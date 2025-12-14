/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28340
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16465))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((arr_3 [i_0] [(signed char)1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_2]))))))))) : (3187145257U)));
                                var_14 = ((/* implicit */signed char) ((((-366743792) % (((/* implicit */int) (short)-32759)))) + (((/* implicit */int) max((((((/* implicit */_Bool) arr_9 [i_2] [i_1])) || (((/* implicit */_Bool) (unsigned short)49070)))), (((arr_3 [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49070))))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [(signed char)7] [i_0] [i_0])))), (((3187145279U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))) * (1107822005U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8457051886479338138ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (3187145257U)))) < (((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-9152)))))))));
    var_17 = ((/* implicit */signed char) ((long long int) var_2));
}
