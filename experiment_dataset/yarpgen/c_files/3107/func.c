/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3107
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
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)59045))));
    var_19 = ((/* implicit */int) min((((/* implicit */signed char) ((((unsigned long long int) (unsigned short)16257)) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-92)), ((unsigned short)6490)))))))), (var_3)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */long long int) (~(788782646U)));
            var_20 += ((unsigned char) (signed char)73);
        }
        var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27541))) >= (0ULL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) ((_Bool) 3506184649U));
            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-39))));
        }
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(max((788782646U), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-5664)), ((unsigned short)18976)))))))))));
    var_25 = var_6;
}
