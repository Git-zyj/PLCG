/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4516
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
    var_18 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -694080181)) ? (((/* implicit */unsigned int) 694080181)) : (max((111978261U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) ((unsigned char) (unsigned char)127)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) var_16);
                arr_4 [i_1] = ((/* implicit */unsigned char) -1393037309);
                arr_5 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((694080181) % (((/* implicit */int) (unsigned short)44205))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3] [i_1 - 2])) ? (arr_3 [i_0] [i_1 - 3] [i_1 - 2]) : (((/* implicit */long long int) arr_2 [i_1 + 1] [i_1 - 3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3] [i_1 - 2])) ? (4182989027U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((-(4182989035U)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((arr_8 [i_4]) ? (-694080182) : (((/* implicit */int) arr_12 [20] [20] [i_3] [i_2]))))), (max((max((889977973U), (((/* implicit */unsigned int) arr_6 [i_5])))), (max((111978261U), (((/* implicit */unsigned int) (unsigned char)15))))))));
                        var_23 &= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (unsigned char)78)), (arr_7 [i_2 - 1]))), (((/* implicit */long long int) 520192U))));
                    }
                }
            } 
        } 
    } 
}
