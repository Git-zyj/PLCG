/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19852
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) (+(1020836584)))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) 1315304770U))));
                    var_17 = ((/* implicit */unsigned long long int) max((max((605080049U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(signed char)10] [i_1]))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1998688704)) ? (var_2) : (-1975624102))) / (1975624101))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) (+(((arr_4 [i_0] [i_3]) >> (((arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 2]) - (618813621)))))));
                        arr_11 [i_1] [i_2 + 3] [i_1] [i_2 + 3] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) 5254564959253446226ULL));
                        arr_12 [(unsigned char)8] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 + 4] [i_2 + 1] [i_2 - 1])) || (((/* implicit */_Bool) -1975624101)))))));
                        arr_13 [i_1] = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (short)4095)))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
}
