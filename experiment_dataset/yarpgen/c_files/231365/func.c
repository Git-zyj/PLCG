/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231365
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) == ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 - 3] [13ULL])) : (((/* implicit */int) (short)32764))))));
        var_14 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-46))) < (-5369256472673358660LL)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (signed char)40))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(5369256472673358659LL)));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 6; i_2 += 2) 
        {
            {
                arr_10 [i_1] [i_2 + 4] [i_2] = ((/* implicit */unsigned int) var_6);
                arr_11 [i_2] = -5369256472673358661LL;
                arr_12 [i_1 - 3] [i_1] [i_2 + 4] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) var_11)) < (var_13)))) >> ((((~(((/* implicit */int) (signed char)67)))) + (87)))));
            }
        } 
    } 
}
