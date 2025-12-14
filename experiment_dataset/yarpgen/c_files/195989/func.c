/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195989
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
    var_14 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)20))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_0]))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [4LL] [i_0]))));
                }
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-62))));
                    arr_15 [i_0] [(signed char)17] [(short)20] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19624))) | (min((((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_1] [i_1 - 1] [i_3])), (((unsigned int) var_3))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((11079973709697385127ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))))) + (((/* implicit */unsigned long long int) ((arr_0 [i_3]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))))))))));
                }
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -131882364)), (((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 - 2] [i_1 - 1])) ? (15473984551022627814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)248)))))))));
                    var_19 = ((/* implicit */unsigned short) arr_6 [(_Bool)1] [i_1 - 1] [i_4] [i_1]);
                }
                var_20 = ((/* implicit */unsigned long long int) -509211859);
            }
        } 
    } 
}
