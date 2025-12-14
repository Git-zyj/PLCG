/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3512
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
    var_19 = ((/* implicit */unsigned char) var_11);
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                    var_21 = (!(arr_3 [i_0]));
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (var_4));
                }
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_0] [(_Bool)1] [i_0] = var_12;
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))));
                                arr_18 [i_0] [i_1] [i_3] [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 + 2] [i_5]))))), ((+(min((((/* implicit */unsigned long long int) var_18)), (var_14)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8782804785778372015ULL)));
                            var_24 = var_1;
                        }
                    } 
                } 
                var_25 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : (15762088181593621399ULL))))))));
            }
        } 
    } 
}
