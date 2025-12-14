/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241319
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
                            var_19 = (-(((unsigned int) ((280329987U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1])))))));
                            var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) 790647737)) ? (((/* implicit */unsigned long long int) 280329976U)) : (12077423866036234138ULL)))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned short) ((arr_2 [(signed char)8]) + (((/* implicit */long long int) var_9))));
                arr_13 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((var_13), (((/* implicit */int) var_5)))) : (var_9)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (var_2) : (((/* implicit */unsigned long long int) max((var_13), (-634993630))))))));
                var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (min((((/* implicit */unsigned long long int) var_14)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -634993636))))))))) ? (((/* implicit */int) max((arr_9 [10ULL]), (((/* implicit */short) max((arr_1 [i_0] [i_1]), (arr_1 [(_Bool)1] [(_Bool)1]))))))) : (((/* implicit */int) var_17))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)1)))))));
    var_24 &= ((/* implicit */unsigned short) var_5);
}
