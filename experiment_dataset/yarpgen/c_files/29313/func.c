/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29313
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        var_20 = (+((-(((((/* implicit */int) (short)4892)) / (((/* implicit */int) (short)4892)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (short)4892)) >= (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4695))))) / (var_12)))));
                        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)4695))) ? (15350314586234451016ULL) : (((/* implicit */unsigned long long int) 4095U))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) (short)-4887)) ^ (((/* implicit */int) (short)4892)))))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)4883)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-4887)))))) <= (((/* implicit */int) ((unsigned short) arr_1 [i_1])))));
                        var_26 = (_Bool)1;
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_27 |= (_Bool)1;
                        var_28 = ((/* implicit */_Bool) (short)4892);
                        var_29 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                    }
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (~(((((13380267325339280051ULL) & (((/* implicit */unsigned long long int) -1801070380)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-17)) != (((/* implicit */int) var_10)))))))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) var_7);
}
