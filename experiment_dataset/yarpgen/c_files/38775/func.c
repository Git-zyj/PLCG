/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38775
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((-((-(0))))) : (((/* implicit */int) var_3))));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)21837)) >> ((((-(var_0))) + (5799322550686814497LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) 1382176850);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_13);
                            var_21 = ((/* implicit */unsigned int) ((signed char) ((arr_0 [i_1]) & (((/* implicit */unsigned long long int) -7562993399133591346LL)))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_7)) >= ((+(1969115212)))))) & (((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 1331054872U)) : (arr_6 [2U] [i_1] [i_2]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1331054872U)))))))))));
                            var_23 = ((/* implicit */int) var_8);
                            var_24 |= ((/* implicit */unsigned int) ((max((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)22632))))))) - (((/* implicit */long long int) (+(((var_14) - (((/* implicit */unsigned int) -104000175)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-20)) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)50815)) != (((/* implicit */int) (unsigned char)38)))))))))))));
}
