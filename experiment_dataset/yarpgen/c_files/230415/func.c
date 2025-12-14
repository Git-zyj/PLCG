/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230415
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
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) max(((unsigned char)231), ((unsigned char)0)))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((8U) ^ ((((_Bool)1) ? (901830839U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2])))))))) ? (6503866540337200435ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((17849431813055957918ULL), (((/* implicit */unsigned long long int) (signed char)-79)))) > (((var_4) ? (6503866540337200442ULL) : (11942877533372351173ULL)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72)))))))))));
                        var_16 = ((/* implicit */unsigned int) (signed char)-50);
                    }
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_1] [i_1 + 1])))) : (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) | (var_7)))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_5 [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_1);
    var_19 = ((/* implicit */unsigned char) max(((signed char)47), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
}
