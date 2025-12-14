/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248544
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
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) (-(var_1)))) ^ (var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (signed char)-96);
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                                arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)0))) & (((/* implicit */int) min((((/* implicit */short) var_8)), (arr_3 [(short)10]))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (6321618368724365522ULL) : (arr_9 [i_3]))))) : ((+(((/* implicit */int) (unsigned char)84))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)83))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (arr_6 [i_0] [i_6])))))))));
                                var_23 = 985162418487296LL;
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) 17976454081100112459ULL)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)28)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
