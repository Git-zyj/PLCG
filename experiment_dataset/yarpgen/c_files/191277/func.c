/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191277
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
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 6; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 796987101U)) ? (3497980195U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                                arr_14 [i_4 + 4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1453551659)) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) var_19)))))));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) ((1879048192) <= (((/* implicit */int) (unsigned short)0))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-30466)) <= (-1453551659))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
                                arr_16 [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                } 
                var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1 - 1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_19))))) : (((((/* implicit */_Bool) (signed char)46)) ? (((((/* implicit */_Bool) 3497980195U)) ? (var_9) : (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))));
                arr_17 [i_0] = (short)26319;
                arr_18 [i_0] = ((/* implicit */int) ((short) (unsigned short)18286));
            }
        } 
    } 
    var_24 = var_3;
}
