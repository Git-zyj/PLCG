/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192127
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) 9258185565025507223ULL))));
                        arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 - 1]))) ? (12778884271370437353ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2] [i_1] [(unsigned short)7] [(signed char)13]))));
                        arr_9 [11U] [5ULL] [i_2] [i_3] = ((/* implicit */unsigned char) -1192697774);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((unsigned char) 2147483647)))));
                        var_13 = ((short) ((((/* implicit */_Bool) (unsigned short)28023)) ? (((/* implicit */int) arr_1 [(unsigned short)2] [i_2])) : (((/* implicit */int) (unsigned short)28034))));
                        var_14 ^= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) > (arr_0 [i_0]))))));
                    }
                    arr_12 [i_0] [i_1 + 2] [i_2] = ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_1 - 2] [i_0])) ? (arr_4 [i_2] [i_2] [i_1 + 1] [i_0]) : (arr_4 [i_0 - 1] [(short)5] [(short)4] [9ULL]));
                }
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_10 [i_0 - 1] [i_0 - 1]))));
                arr_13 [(short)5] [(unsigned short)2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)0)))), (min((2147483647), (arr_3 [i_1] [(short)15])))))) ? (((unsigned long long int) 755603453)) : (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) -1145109462)) ^ (var_0))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-96)) == (((/* implicit */int) (short)(-32767 - 1)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((short) var_2));
}
