/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211111
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) % (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) -238821766067566587LL)))))) >= (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */long long int) var_5)), (arr_4 [i_1] [i_0]))))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_1 + 1] [i_0])))) ? (((/* implicit */long long int) min((arr_2 [i_0] [6LL]), (((/* implicit */unsigned int) (unsigned short)22202))))) : (((((/* implicit */long long int) arr_2 [i_0] [i_0])) - (238821766067566601LL)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-74)))))) % (max((((/* implicit */unsigned long long int) ((-238821766067566587LL) - (238821766067566586LL)))), (arr_3 [i_2]))))))));
                            var_21 = ((/* implicit */long long int) var_14);
                            var_22 = ((/* implicit */long long int) ((unsigned int) arr_5 [4U] [i_1] [(unsigned short)16] [i_0]));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_6) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 + 3] [i_2])))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])) + (((/* implicit */int) arr_5 [4U] [(short)2] [(_Bool)1] [i_1])))))) : (((unsigned long long int) ((((/* implicit */_Bool) 2399041965U)) ? (238821766067566586LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4088)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))))))));
}
