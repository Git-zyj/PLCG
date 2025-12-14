/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54618
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
    var_20 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_0])) ? (((/* implicit */int) ((unsigned char) (unsigned short)61259))) : (max((var_3), ((-2147483647 - 1)))))) >> (((max((((/* implicit */int) ((unsigned short) (unsigned short)4277))), ((-(((/* implicit */int) (unsigned char)126)))))) - (4262)))));
                            arr_11 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [11ULL] [i_3 + 2] [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (var_11))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_8 [(_Bool)1] [i_3 + 2] [i_0])), (arr_9 [18] [i_3 + 2] [i_0] [i_2 - 2]))))));
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (2147483647))))))));
                            var_23 = ((/* implicit */long long int) (+(((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_0]))) : (var_16)))));
                        }
                    } 
                } 
                var_24 = (unsigned short)43516;
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_25 = ((/* implicit */int) arr_1 [i_0]);
                    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))));
                }
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_18 [i_0] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [2ULL] [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)45)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (((long long int) var_3)));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((-2147483636), ((-((-(((/* implicit */int) (unsigned short)61259)))))))))));
                }
            }
        } 
    } 
}
