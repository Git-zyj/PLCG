/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194670
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) ((unsigned char) var_2)))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_10)))) ? (((((/* implicit */int) (short)-18423)) % (((/* implicit */int) (short)18422)))) : (((/* implicit */int) max((((/* implicit */short) var_15)), ((short)-25905))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0])) ? (arr_2 [i_0] [9]) : (((/* implicit */long long int) 8U))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0 + 1]))) ? ((+(arr_3 [(unsigned char)1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18434)))));
                var_22 = ((((/* implicit */_Bool) (-(-342499677)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -342499677)) ? (-4774790689282257234LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)4] [i_1])))))) ? (max((((/* implicit */long long int) (short)18422)), (-695011790382418411LL))) : (((/* implicit */long long int) min((((/* implicit */int) var_4)), (-342499691)))))) : (max((min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) (short)-18437)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18404)) ? (((/* implicit */int) (short)21350)) : (-342499684)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)167))))), (((unsigned long long int) ((((/* implicit */_Bool) 2147483645)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31087))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_24 = ((/* implicit */short) max((min((arr_5 [i_3]), (((/* implicit */signed char) arr_9 [i_2] [i_2] [i_2])))), (min(((signed char)94), (arr_5 [i_3])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_14 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 - 1]))) ? (((unsigned long long int) (short)-31087)) : (((/* implicit */unsigned long long int) max((-342499684), (((/* implicit */int) (unsigned short)53156))))))))));
                            var_26 = (!(((/* implicit */_Bool) (+(min((arr_11 [(signed char)15] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_6 [i_2]))))))));
                        }
                    } 
                } 
                arr_16 [i_2] [i_2] [i_3] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_6 [i_2])))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)61)))))))));
}
