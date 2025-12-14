/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34290
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((long long int) 2631209825U)) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)26258)) && (((/* implicit */_Bool) 6058331586556973230LL))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((-6058331586556973201LL) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_4])))))) > (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_4])) >= (((/* implicit */int) arr_5 [i_0] [i_1])))))));
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)50)), ((short)10533))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_11 [i_5] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((int) ((6521455643733139761ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) / (4084775940811596557LL)))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((int) ((((((((/* implicit */_Bool) -1876743946)) ? (-6058331586556973230LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((signed char) -3341661916199304428LL))) - (20)))))))));
                                var_25 = ((/* implicit */_Bool) var_17);
                                arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)90)) < (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */unsigned long long int) (-(6058331586556973198LL)))) : (((752752446656851602ULL) + (((/* implicit */unsigned long long int) 1876743938))))));
                            }
                        } 
                    } 
                }
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)13004))))) | (((2631209802U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84)))))));
            }
        } 
    } 
}
