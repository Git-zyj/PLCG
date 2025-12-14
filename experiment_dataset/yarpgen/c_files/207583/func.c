/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207583
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(_Bool)1] [i_2] [i_3] |= ((/* implicit */unsigned long long int) 487760830);
                                var_19 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 487760806))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))))) == (((/* implicit */unsigned long long int) (+(arr_13 [i_4 - 1] [i_1] [i_2] [i_3] [i_4 - 2] [i_2]))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 487760826))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_21 [i_7] [i_6] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)896)) ? (((/* implicit */int) (unsigned short)59047)) : (((/* implicit */int) (unsigned char)24))))) ? (((/* implicit */int) (unsigned char)0)) : (((((110545333) == (((/* implicit */int) var_2)))) ? (var_9) : (var_8))));
                                var_22 = ((/* implicit */int) ((unsigned short) ((var_15) / (((/* implicit */int) var_3)))));
                                var_23 = ((/* implicit */unsigned char) (unsigned short)0);
                            }
                        } 
                    } 
                } 
                arr_22 [(unsigned short)12] [i_1] = min((min((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_0])) ? (-77388502) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) ((var_4) <= (((/* implicit */int) arr_16 [(unsigned char)17] [i_0] [i_1] [i_1]))))))), (((((/* implicit */int) (unsigned short)15011)) | (((/* implicit */int) (unsigned char)41)))));
            }
        } 
    } 
    var_24 = ((var_12) / (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_16))))) ? ((-(((/* implicit */int) (unsigned short)13)))) : (((((/* implicit */_Bool) -1290013125)) ? (-487760812) : (((/* implicit */int) var_16)))))));
}
