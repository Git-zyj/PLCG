/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230464
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((12952072720400640787ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))))));
                arr_8 [(signed char)9] [i_0] = ((long long int) min((5494671353308910828ULL), (12018194635357842018ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(((/* implicit */int) var_11)))))));
                    var_14 = ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) arr_4 [3ULL] [(signed char)0] [i_2])) ? (12952072720400640787ULL) : (6428549438351709597ULL)))))));
                }
                for (signed char i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    var_15 = ((/* implicit */long long int) (((+(2474715165U))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))));
                    arr_14 [i_3 - 1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_3 - 3] [(unsigned char)9] [i_3 - 3]), (arr_4 [i_3 - 3] [i_3 - 1] [i_3 - 3])))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) != (12952072720400640813ULL)))))))));
                    arr_15 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((5408434371344979218ULL) + (((/* implicit */unsigned long long int) -5220988015312982539LL)))) - (((/* implicit */unsigned long long int) ((int) min((12018194635357842018ULL), (5408434371344979218ULL)))))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((12018194635357842033ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_3 [i_0]))))) - ((+(9223372036854775807LL)))))))))));
                    arr_16 [i_3] = ((/* implicit */unsigned short) (~((+(arr_6 [9LL] [i_3 - 2] [(signed char)6])))));
                }
                var_17 = var_2;
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (signed char)22);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_10)))))))) / (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))));
}
