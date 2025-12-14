/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243484
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-81)), (max((((/* implicit */unsigned long long int) -1547700611)), (9675018253047138484ULL)))));
                arr_6 [(unsigned char)5] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_0 [i_0] [i_1]))))))) ? (1446107111U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (-674443461))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 3]))))) & ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_2]) - (arr_4 [i_2])))) : ((+(5861297581560359885ULL)))))));
        var_11 ^= ((/* implicit */long long int) var_7);
        arr_10 [i_2] [(signed char)12] = ((/* implicit */int) (!(((/* implicit */_Bool) ((-1) - (((((/* implicit */_Bool) arr_0 [i_2] [i_2 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_2 + 1] [i_2])))))))));
    }
    var_12 -= ((/* implicit */_Bool) var_4);
    var_13 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) max((((_Bool) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (1056843241U))))))));
}
