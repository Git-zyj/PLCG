/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244261
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
    var_10 = ((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((min((1638224705235954876ULL), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_6)), (var_8))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))))));
        var_12 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) -1215536912)), (1876883011U))), (((/* implicit */unsigned int) (+(min((var_3), (((/* implicit */int) var_6)))))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */_Bool) var_3);
        var_14 = ((/* implicit */unsigned short) ((min((min((2603219085333893722ULL), (((/* implicit */unsigned long long int) 4)))), (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_1)), (var_7))))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((min((var_5), (((/* implicit */long long int) ((unsigned int) var_0))))), (((/* implicit */long long int) min((-2147483646), (-2147483646))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((33538048U), (((/* implicit */unsigned int) min((((/* implicit */int) (short)4094)), (17))))))) || (((/* implicit */_Bool) min((36660164046498425ULL), (((/* implicit */unsigned long long int) var_2)))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_2))));
                    var_18 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned char)26)), (0U))), (((/* implicit */unsigned int) ((-7) ^ (((/* implicit */int) (unsigned short)5892)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((signed char) ((5799085731844922281ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49114))))))), (min(((unsigned short)1), ((unsigned short)3858)))));
                    arr_15 [i_1] [i_4] [i_5 + 2] [i_5 + 4] = ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) var_6))), ((+(var_4)))));
                }
            } 
        } 
    }
    var_20 = (+(((/* implicit */int) (unsigned short)40829)));
}
